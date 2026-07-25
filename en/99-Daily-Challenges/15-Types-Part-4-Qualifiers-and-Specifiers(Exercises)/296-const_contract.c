/* Objective: Practice using const as a "security contract" in function signatures.
Instructions:
1. Write a function void display_message(const char *msg).
2. Try to do msg[0] = 'X'; inside the function to see the compiler block the text modification.
3. Remove the incorrect line and make the function just print the received string using printf("%s\n", msg);.
4. In main, pass a string literal to this function and check its operation. */

#include <stdio.h>

void display_message(const char *msg) {
    /*
    This line causes a compilation error because msg points
    to characters that cannot be modified by the function:

    msg[0] = 'X';
    */

    printf("%s\n", msg);
}

int main(void) {
    display_message("Hello, world!");

    return 0;
}