/* Instructions:
1. Declare two variables in file scope:
   - int global_counter = 0; (shared by the entire program)
   - _Thread_local int local_counter = 0; (unique copy per thread)
2. Create a function void increment_both(int value) that adds value to both variables.
3. In main, call the function twice with different values and print the value of both variables after each call. */

#include <stdio.h>

/* Global variable shared by the entire program */
int global_counter = 0;

/* Each thread has its own copy */
_Thread_local int local_counter = 0;

void increment_both(int value) {
    global_counter += value;
    local_counter += value;
}

int main(void) {
    increment_both(5);

    printf("After adding 5:\n");
    printf("global_counter = %d\n", global_counter);
    printf("local_counter  = %d\n\n", local_counter);

    increment_both(10);

    printf("After adding 10:\n");
    printf("global_counter = %d\n", global_counter);
    printf("local_counter  = %d\n", local_counter);

    return 0;
}