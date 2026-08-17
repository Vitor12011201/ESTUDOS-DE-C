/* OBJECTIVE: Use '_Thread_local' on a pointer to dynamically allocate memory on the Heap in an isolated manner per thread, ensuring NULL checking and deallocation with free(). */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Each thread has its own private pointer pointing to its block on the Heap
static _Thread_local int *tl_local_buffer = NULL;
static _Thread_local size_t tl_local_size = 0;

void *worker(void *arg) {
    int id = *(int *)arg;
    tl_local_size = 4;

    // Dynamic allocation on the Heap exclusive to this thread using 'sizeof *pointer'
    tl_local_buffer = malloc(tl_local_size * sizeof *tl_local_buffer);
    if (tl_local_buffer == NULL) {
        fprintf(stderr, "[Thread %d] Critical error: Failed to allocate local buffer.\n", id);
        pthread_exit(NULL);
    }

    // Filling the thread's exclusive buffer
    for (size_t i = 0; i < tl_local_size; i++) {
        tl_local_buffer[i] = (id * 1000) + (int)(i + 1);
    }

    // Displaying the data contained in the local buffer
    printf("[Thread %d] Local buffer allocated on the Heap:\n", id);
    for (size_t i = 0; i < tl_local_size; i++) {
        printf("  -> tl_local_buffer[%zu] = %d\n", i, tl_local_buffer[i]);
    }

    // Memory cleanup in the thread's own context
    free(tl_local_buffer);
    tl_local_buffer = NULL;
    tl_local_size = 0;

    printf("[Thread %d] Local buffer memory freed and pointer reset.\n", id);

    return NULL;
}

int main(void) {
    printf("=== EXAMPLE 2: _Thread_local Pointer Allocated on the Heap ===\n");

    size_t num_threads = 2;

    pthread_t *h_threads = malloc(num_threads * sizeof *h_threads);
    if (h_threads == NULL) {
        fprintf(stderr, "Error allocating pthread vector.\n");
        return EXIT_FAILURE;
    }

    int *ids = malloc(num_threads * sizeof *ids);
    if (ids == NULL) {
        fprintf(stderr, "Error allocating ID vector.\n");
        free(h_threads);
        h_threads = NULL;
        return EXIT_FAILURE;
    }

    // Launching the threads
    for (size_t i = 0; i < num_threads; i++) {
        ids[i] = (int)(i + 1);
        if (pthread_create(&h_threads[i], NULL, worker, &ids[i]) != 0) {
            fprintf(stderr, "Failed to create thread %zu\n", i + 1);
        }
    }

    // Waiting for completion
    for (size_t i = 0; i < num_threads; i++) {
        pthread_join(h_threads[i], NULL);
    }

    // Freeing main resources
    free(ids);
    ids = NULL;

    free(h_threads);
    h_threads = NULL;

    printf("Process successfully completed.\n");

    return EXIT_SUCCESS;
}