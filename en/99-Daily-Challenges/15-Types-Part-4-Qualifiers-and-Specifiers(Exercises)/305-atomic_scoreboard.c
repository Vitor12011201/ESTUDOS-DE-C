/* Objective: Practice declaring atomic types using <stdatomic.h> and check how to perform safe direct reads and writes.
Instructions:
1. Include the <stdio.h> and <stdatomic.h> libraries.
2. In main, declare a score using the convenient macro: atomic_int score = ATOMIC_VAR_INIT(0); (or simply atomic_int score = 0;).
3. Simulate a point gain by incrementing the score by 100 using the += operator: score += 100;.
4. Create a plain local variable int copy_score = atomic_load(&score); to safely read the atomic value and print it on the screen with printf.
5. In the code comment: Explain simply why using atomic_int instead of a plain int avoids problems when two parts of the program try to update the score at the same time. */

#include <stdio.h>
#include <stdatomic.h>

int main(void)
{
    atomic_int score = ATOMIC_VAR_INIT(0);
    /* It could also be written as:
       atomic_int score = 0;
    */

    score += 100;

    int copy_score = atomic_load(&score);

    printf("Score: %d\n", copy_score);

    /*
     * An atomic_int performs reads and modifications in an atomic way,
     * meaning the operation happens without any other part of the program
     * being able to interrupt it halfway through.
     *
     * If two threads try to update a plain int at the same time,
     * one update may overwrite the other, causing an incorrect result.
     * With atomic_int, shared access to the score is done safely,
     * avoiding that race condition.
     */

    return 0;
}