#include <stdio.h>

/* OBJECTIVE: Map the impact of 'const' on double pointers (char **),
   simulating protection of argument tables or network text buffers. */

int main() {
    char arg1[] = "sunshine";
    char arg2[] = "moonlight";
    
    char *list_str[] = {arg1, arg2};

    // --- CASE A: char **const p ---
    // 'p' is a CONSTANT POINTER to (pointer to char).
    // The address of 'p' is fixed, but we can modify the internal pointer (*p).
    char **const p_const = list_str;
    // p_const++;        // ERROR! 'p_const' is constant.
    (*p_const)++;        // VALID! Advances the internal pointer 'arg1' to "unshine".

    // Resetting for the next test
    list_str[0] = arg1;

    // --- CASE B: char *const *p ---
    // 'p' is a pointer to a (CONSTANT POINTER to char).
    // We can move 'p', but we cannot change the internal pointer (*p).
    char *const *p_internal_const = list_str;
    p_internal_const++;   // VALID! Now points to list_str[1] ("moonlight").
    // (*p_internal_const)++; // ERROR! The intermediate pointer is constant.

    printf("--- Multiple Indirection Test ---\n");
    printf("Intermediate pointer advanced via p_const: \"%s\"\n", *p_const);
    printf("Double pointer advanced via p_internal_const: \"%s\"\n", *p_internal_const);

    return 0;
}