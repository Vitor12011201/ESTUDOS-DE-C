/* Objective: Observe in practice the danger of reading an auto variable without explicit initialization.
Instructions:
1. Declare an integer variable inside main without assigning a value: int indeterminate_value; (this is the same as auto int indeterminate_value;).
2. Print the value contained in it using printf("%d\n", indeterminate_value);.
3. Then, correct the good practice by initializing the variable: int safe_value = 0; and print it.
4. Reflection in the comment: Explain why printing an uninitialized variable generates undefined behavior and why it may contain totally unpredictable values. */

#include <stdio.h>

int main(void)
{
    int indeterminate_value;

    printf("Uninitialized value: %d\n", indeterminate_value);

    int safe_value = 0;

    printf("Initialized value: %d\n", safe_value);

    /*
     * An automatic local variable that is not initialized has an
     * indeterminate value.
     *
     * Therefore, we cannot assume it starts with 0 or any other
     * specific value.
     *
     * By trying to read indeterminate_value before assigning a valid
     * value to it, the program enters undefined behavior.
     *
     * This means the C language does not guarantee what will happen:
     * it may apparently print 0, print a random number, present
     * different results between executions, or even exhibit other
     * unexpected behaviors.
     *
     * This happens because the memory region used by the variable
     * may contain data that was previously in that space.
     *
     * That is why a good practice is to initialize the variable before
     * using it, like in:
     *
     *     int safe_value = 0;
     */

    return 0;
}