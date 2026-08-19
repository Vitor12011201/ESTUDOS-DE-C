/* Objective: Understand that, although the pointer to a _Thread_local variable is a regular pointer in C, the address pointed to is specific to the current thread.
Instructions:
1. Declare a global _Thread_local int worker_id = 101;.
2. Create a function void display_address(void) that declares a regular pointer int *ptr = &worker_id;.
3. Print the value contained in *ptr and the memory address it points to ((void*)ptr).
4. In main, call the display_address() function. */

#include <stdio.h>

/* Each thread has its own instance of this variable */
_Thread_local int worker_id = 101;

void display_address(void) {
    /*
     * ptr is a regular pointer.
     * However, it points to the instance of worker_id
     * belonging to the thread that is executing this function.
     */
    int *ptr = &worker_id;

    printf("Value: %d\n", *ptr);
    printf("Address: %p\n", (void *)ptr);
}

int main(void) {
    display_address();

    return 0;
}