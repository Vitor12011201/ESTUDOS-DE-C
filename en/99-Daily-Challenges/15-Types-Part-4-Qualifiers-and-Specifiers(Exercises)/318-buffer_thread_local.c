/* Objective: Understand the usefulness of _Thread_local for creating local data manipulation buffers in global/static scope.
Instructions:
1. Outside any function (file scope), declare a thread-exclusive message buffer:
   - _Thread_local char error_buffer[64];
2. Create two simulated functions:
   - void simulate_connection_error(void) -> Writes "Connection Error" to error_buffer.
   - void simulate_disk_error(void) -> Writes "Disk Error" to error_buffer.
3. Create a function to print the current content of error_buffer.
4. In main, execute the calls sequentially and display the result. */

#include <stdio.h>
#include <string.h>

/*
 * Global buffer with thread-local storage.
 * Each thread would have its own copy of error_buffer.
 */
_Thread_local char error_buffer[64];

void simulate_connection_error(void) {
    strcpy(error_buffer, "Connection Error");
}

void simulate_disk_error(void) {
    strcpy(error_buffer, "Disk Error");
}

void print_error(void) {
    printf("Current buffer: %s\n", error_buffer);
}

int main(void) {
    simulate_connection_error();
    print_error();

    simulate_disk_error();
    print_error();

    return 0;
}