/* OBJECTIVE: Demonstrate that variables declared with '_Thread_local' have an independent and isolated copy for each thread executed. */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Variable with _Thread_local: each thread will have its own copy of 'thread_counter' in RAM
static _Thread_local int thread_counter = 0;

// Structure to pass initialization data to each thread
typedef struct {
    int thread_id;
    int max_increment;
} ThreadData;

void *thread_routine(void *arg) {
    // Cast of the generic argument pointer
    ThreadData *data = (ThreadData *)arg;

    // Each thread modifies ONLY its local copy of 'thread_counter'
    for (int i = 0; i < data->max_increment; i++) {
        thread_counter++;
    }

    printf("[Thread %d] Finished local count. thread_counter = %d\n",
           data->thread_id, thread_counter);

    return NULL;
}

int main(void) {
    printf("=== EXAMPLE 1: _Thread_local with Primitive Types ===\n");

    size_t num_threads = 3;

    // Dynamic allocation on the Heap for the thread handlers (pthreads)
    pthread_t *threads = malloc(num_threads * sizeof *threads);
    if (threads == NULL) {
        fprintf(stderr, "Error allocating memory for threads.\n");
        return EXIT_FAILURE;
    }

    // Dynamic allocation for the arguments of each thread
    ThreadData *args = malloc(num_threads * sizeof *args);
    if (args == NULL) {
        fprintf(stderr, "Error allocating memory for arguments.\n");
        free(threads);
        threads = NULL;
        return EXIT_FAILURE;
    }

    // Creating the threads
    for (size_t i = 0; i < num_threads; i++) {
        args[i].thread_id = (int)(i + 1);
        args[i].max_increment = (int)(i + 1) * 100;

        if (pthread_create(&threads[i], NULL, thread_routine, &args[i]) != 0) {
            fprintf(stderr, "Error creating thread %zu\n", i + 1);
        }
    }

    // Waiting for all threads to finish
    for (size_t i = 0; i < num_threads; i++) {
        pthread_join(threads[i], NULL);
    }

    // Safe deallocation of Heap memory
    free(args);
    args = NULL;

    free(threads);
    threads = NULL;

    printf("All threads have finished and memory has been freed.\n");

    return EXIT_SUCCESS;
}