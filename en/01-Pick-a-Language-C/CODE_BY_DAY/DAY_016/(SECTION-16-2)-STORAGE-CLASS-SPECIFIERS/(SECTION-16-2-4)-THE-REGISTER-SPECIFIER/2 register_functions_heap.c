/* OBJECTIVE: Use 'register' in parameters and accumulators of intensive functions, contrasting with processing of dynamically allocated data on the Heap. */

#include <stdio.h>
#include <stdlib.h>

// Function parameters use 'register' for ultra-fast access during iterations
long long process_vector(register const int *ram_vector, register size_t size) {
    // Internal accumulator also kept in a CPU register
    register long long accumulator = 0;

    for (register size_t i = 0; i < size; i++) {
        accumulator += ram_vector[i];
    }

    return accumulator;
}

int main(void) {
    printf("=== EXAMPLE 2: register in Functions with Vector on the Heap ===\n");

    size_t element_count = 5;

    // Dynamic allocation of the vector on the Heap using 'sizeof *pointer'
    int *data = malloc(element_count * sizeof *data);

    // Rigorous check against allocation failure (NULL)
    if (data == NULL) {
        fprintf(stderr, "Critical error: Failed to allocate memory on the Heap.\n");
        return EXIT_FAILURE;
    }

    // Filling the vector allocated on the Heap
    for (size_t i = 0; i < element_count; i++) {
        data[i] = (int)(i + 1) * 100;
    }

    // Processing the vector via optimized function
    long long total = process_vector(data, element_count);
    printf("Total sum of processed elements: %lld\n", total);

    // Safe deallocation of Heap memory and nullifying the pointer
    free(data);
    data = NULL;

    printf("Heap memory freed and pointer successfully nullified.\n");

    return EXIT_SUCCESS;
}