#include <stdio.h>

/* OBJECTIVE: Lock both the address stored by the pointer and the pointed data,
   creating a pointer of absolute immutability. */

int main() {
    int fps_rate = 60;
    int new_rate = 120;

    // Reading right-to-left:
    // ptr is a [constant pointer] to a [constant int].
    const int *const ptr_armored = &fps_rate;

    printf("--- Double Immutability ---\n");
    printf("Monitored address: %p | Value: %d\n", (void*)ptr_armored, *ptr_armored);

    // Both attempts below generate COMPILATION ERROR:
    // *ptr_armored = 144;      // ERROR: Data is constant
    // ptr_armored = &new_rate; // ERROR: Pointer is constant

    return 0;
}