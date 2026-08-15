/* OBJECTIVE: Combine 'register' and 'const' to ensure code safety, preventing address leakage (&) and accidental modification of critical constants. */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    double base_value;
} CalculationItem;

int main(void) {
    printf("=== EXAMPLE 3: Safety with register const and Structs ===\n");

    size_t total_items = 3;

    // Dynamic allocation for an array of structs on the Heap
    CalculationItem *items = malloc(total_items * sizeof *items);

    // Strict memory allocation check
    if (items == NULL) {
        fprintf(stderr, "Fatal error: Failed to allocate calculation table.\n");
        return EXIT_FAILURE;
    }

    // Initializing struct data
    for (size_t i = 0; i < total_items; i++) {
        items[i].id = (int)(i + 1);
        items[i].base_value = (i + 1) * 150.50;
    }

    /*
     * ADVANCED USAGE: 'register const'
     * 1. 'const' prevents direct modification of the value.
     * 2. 'register' PREVENTS anyone from passing the address (&multiplier_factor)
     *    to external functions that might try to ignore 'const' via Typecast!
     */
    register const double multiplier_factor = 1.15;

    printf("Applying correction rate (%.2f):\n", multiplier_factor);
    for (size_t i = 0; i < total_items; i++) {
        double final_value = items[i].base_value * multiplier_factor;
        printf("  -> Item ID %d: Base $ %.2f | Corrected $ %.2f\n",
               items[i].id,
               items[i].base_value,
               final_value);
    }

    // Responsible deallocation of allocated memory
    free(items);
    items = NULL;

    printf("Struct array deallocated and pointer zeroed to NULL.\n");

    return EXIT_SUCCESS;
}