/* Objective: Observe why declaring an array as register breaks the standard pointer decay mechanism in C.
Instructions:
1. Declare an integer vector marked as register: register int numbers[3] = {10, 20, 30};.
2. Remember that in C, accessing an element like numbers[1] or passing the vector to a pointer causes the array name to "decay" to the memory address of its first element (&numbers[0]).
3. Try to assign the array to a pointer: int *ptr = numbers; or try to dereference with pointer arithmetic *(numbers + 1). */

#include <stdio.h>

int main(void) {
    register int numbers[3] = {10, 20, 30};

    /*
     * The lines below are problematic because they require the array
     * to "decay" to a pointer to its first element.
     */

    // int *ptr = numbers;
    // printf("%d\n", *(numbers + 1));
    // printf("%d\n", numbers[1]);

    /*
     * In C, normally:
     *
     * numbers
     *
     * in an expression is converted approximately to:
     *
     * &numbers[0]
     *
     * Thus:
     *
     * int *ptr = numbers;
     *
     * needs to obtain a pointer to the first element.
     *
     * The same happens with:
     *
     * *(numbers + 1)
     *
     * And even numbers[1], since:
     *
     * numbers[1]
     *
     * is defined in terms of:
     *
     * *(numbers + 1)
     *
     * Since the array was declared with register, this conversion
     * to a pointer is not safely valid in classic C.
     *
     * That is why arrays declared as register are extremely
     * limited and practically useless in modern programming.
     */

    return 0;
}