/* Objective: Observe that automatic (auto) variables declared inside a loop body are recreated and reinitialized at each iteration, losing any previously accumulated value.
Instructions:
1. Create a simple for loop that runs 3 times (from i = 0 to i < 3).
2. Inside the {} block of the loop, declare a local variable: int counter = 0;.
3. Increment the variable: counter++;.
4. Print the value of counter and iteration i with printf("Iteration %d: counter = %d\n", i, counter) */

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        int counter = 0;

        counter++;

        printf("Iteration %d: counter = %d\n", i, counter);
    }

    return 0;
}