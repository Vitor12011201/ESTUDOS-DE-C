/* OBJECTIVE: Use 'extern' to reference a global pointer dynamically allocated on the Heap with malloc, handle NULL errors, and free with free(). */

#include <stdio.h>
#include <stdlib.h>

// Forward 'extern' declaration of the pointer and the buffer size
extern int *g_vector;
extern size_t g_size;

void fill_vector(void) {
    // Accesses the global pointer allocated on the Heap
    for (size_t i = 0; i < g_size; i++) {
        g_vector[i] = (int)(i + 1) * 25;
    }
}

int main(void) {
    printf("=== EXAMPLE 2: extern with Pointer on the Heap ===\n");

    g_size = 4;

    // Dynamic allocation using the best practice 'sizeof *pointer'
    g_vector = malloc(g_size * sizeof *g_vector);

    // Mandatory check against allocation error (NULL)
    if (g_vector == NULL) {
        fprintf(stderr, "Critical error: Failed to allocate memory on the Heap.\n");
        return EXIT_FAILURE;
    }

    // Fills the vector via helper function
    fill_vector();

    // Displays the dynamically allocated values
    printf("Contents of the vector allocated on the Heap:\n");
    for (size_t i = 0; i < g_size; i++) {
        printf("  g_vector[%zu] = %d\n", i, g_vector[i]);
    }

    // Best practices for freeing and nullifying the pointer
    free(g_vector);
    g_vector = NULL;
    g_size = 0;

    printf("Memory successfully freed and pointer nullified (NULL).\n");

    return EXIT_SUCCESS;
}

// ACTUAL DEFINITION OF THE POINTERS (Allocates the global pointers in the data segment)
int *g_vector = NULL;
size_t g_size = 0;