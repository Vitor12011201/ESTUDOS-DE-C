/* OBJECTIVE: Demonstrate the conceptual separation between a module's Interface (what would go in the .h file) and its Implementation (what would go in the .c file), keeping everything in a single executable file. */

#include <stdio.h>
#include <stdlib.h>

// ============================================================================
// 1. INTERFACE / CONTRACT SECTION (Simulates the file: 'vector_math.h')
// ============================================================================

// Prototypes of the public functions exported by the module
int *vector_create(size_t size);
void vector_fill(int *vector, size_t size, int initial_value);
void vector_destroy(int **vector);

// ============================================================================
// 2. CONSUMPTION SECTION (Simulates the file: 'main.c')
// ============================================================================

int main(void) {
    printf("=== EXAMPLE 1: Basic Modular Structure (Interface vs Implementation) ===\n");

    size_t size = 5;

    // Consumes the module's interface without needing to know how 'vector_create' allocates
    int *my_vector = vector_create(size);

    // Strict handling against allocation failure on the Heap
    if (my_vector == NULL) {
        fprintf(stderr, "Error creating the dynamic vector.\n");
        return EXIT_FAILURE;
    }

    // Processes the data using the module
    vector_fill(my_vector, size, 10);

    printf("Contents of the vector allocated by the module:\n");
    for (size_t i = 0; i < size; i++) {
        printf("  -> my_vector[%zu] = %d\n", i, my_vector[i]);
    }

    // We pass the pointer's address so the function can zero out the original pointer (&my_vector)
    vector_destroy(&my_vector);

    if (my_vector == NULL) {
        printf("Vector destroyed and pointer zeroed to NULL successfully.\n");
    }

    return EXIT_SUCCESS;
}

// ============================================================================
// 3. IMPLEMENTATION SECTION (Simulates the file: 'vector_math.c')
// ============================================================================

int *vector_create(size_t size) {
    if (size == 0) return NULL;

    // Using the best practice 'sizeof *vector'
    int *vector = malloc(size * sizeof *vector);
    return vector; // Returns NULL if allocation fails
}

void vector_fill(int *vector, size_t size, int initial_value) {
    if (vector == NULL) return;

    for (size_t i = 0; i < size; i++) {
        vector[i] = initial_value * (int)(i + 1);
    }
}

void vector_destroy(int **vector) {
    if (vector != NULL && *vector != NULL) {
        free(*vector);   // Frees the block allocated on the Heap
        *vector = NULL;  // Resets the caller's pointer to avoid Dangling Pointer
    }
}