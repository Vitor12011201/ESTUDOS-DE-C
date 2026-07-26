#include <stdio.h>

/* OBJECTIVE: Demonstrate the two fundamental positions of 'const' with a single asterisk.
   - const int *p  -> 'p' is a pointer to a constant int (data is read-only).
   - int *const p  -> 'p' is a constant pointer to an int (address is read-only). */

int main() {
    int value1 = 10;
    int value2 = 20;

    // 1. Pointer to constant data (const comes BEFORE *)
    // Reading right-to-left: ptr_data_const is a pointer to int that is constant.
    const int *ptr_data_const = &value1;
    ptr_data_const = &value2; // VALID: The pointer can change address.
    // *ptr_data_const = 30;  // COMPILATION ERROR! Cannot change the value at destination.

    // 2. Constant pointer (const comes AFTER *)
    // Reading right-to-left: ptr_address_const is a constant pointer to an int.
    int *const ptr_address_const = &value1;
    *ptr_address_const = 30;  // VALID: Can change the value at destination.
    // ptr_address_const = &value2; // COMPILATION ERROR! Cannot change the address.

    printf("--- const Position Test ---\n");
    printf("Value1 modified via ptr_address_const: %d\n", value1);
    printf("Value pointed by ptr_data_const:       %d\n", *ptr_data_const);

    return 0;
}