/* Objective: Understand the classic danger of trying to return the address of an auto variable from inside a function.
Instructions:
1. Create a function int* create_value(void) that declares a local int variable result = 42; and tries to return its address: return &result;.
2. In main, call this function storing the return value in a pointer: int *ptr = create_value();.
3. Try to print *ptr using printf and enable compiler warnings (-Wall).
4. Challenge: The compiler will issue a very serious warning (function returns address of local variable). Explain in the file comments why dereferencing ptr is extremely dangerous, since the memory of the result variable was destroyed at the moment the create_value function ended. */

#include <stdio.h>

/*
 * The variable 'result' has automatic storage duration.
 * This means it exists only during the execution of the
 * create_value() function.
 *
 * When the function ends, the lifetime of 'result' also ends.
 *
 * Therefore, returning:
 *
 *     &result
 *
 * returns an address that used to point to an object that no longer exists.
 *
 * The pointer received by main CANNOT be used to access
 * 'result'. Dereferencing that pointer causes undefined behavior.
 *
 * The memory region may be reused later by other functions,
 * variables, or program operations. That is why even if in
 * some execution it seems to work and prints 42, there is no
 * guarantee that this will keep happening.
 *
 * The program may:
 *
 * - apparently print 42;
 * - print another value;
 * - crash;
 * - behave differently depending on optimization;
 * - exhibit any other behavior allowed by undefined behavior.
 *
 * In more precise terms, it is not that the physical memory simply
 * "disappears". What ends is the LIFETIME of the 'result' object.
 * From that point on, that region no longer validly belongs to
 * that variable.
 */
int *create_value(void)
{
    int result = 42;

    return &result;
}

int main(void)
{
    int *ptr = create_value();

    /*
     * DANGEROUS:
     *
     * 'result' no longer exists when create_value() returned.
     * Therefore, trying to access the object through '*ptr' results
     * in undefined behavior.
     */
    printf("%d\n", *ptr);

    return 0;
}