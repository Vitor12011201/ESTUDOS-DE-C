/* Objective: Learn the basic syntax of the _Atomic qualifier and the <stdatomic.h> library.
Instructions:
1. Include the <stdatomic.h> library.
2. Declare an atomic counter using the classic qualifier syntax: _Atomic int counter = 0; (or the helper macro atomic_int counter = 0;).
3. Create a simple function that performs a basic increment counter++;.
4. In main, print the final value.
- Reflection in the comment: Explain why, even though in C code the writing counter++ is identical to that of a regular variable, the compiler generates a completely different assembly code with lock instructions. */

#include <stdio.h>
#include <stdatomic.h>

_Atomic int counter = 0;

void increment_counter(void)
{
    counter++;
}

int main(void)
{
    increment_counter();

    printf("Final counter value: %d\n", counter);

    /*
     * Although the expression counter++ has the same appearance as that used with a
     * common int variable, the type of counter is atomic.
     *
     * Therefore, the compiler must transform the increment into an atomic
     * read-modify-write operation. This prevents another thread from observing
     * or interfering with an intermediate state of the operation.
     *
     * On x86 processors, the compiler may generate instructions with the "lock"
     * prefix, such as lock add or lock xadd. On other architectures, it may
     * use exclusive instruction pairs, runtime calls, or other equivalent
     * mechanisms.
     *
     * Thus, the C syntax is simple, but the generated machine code is
     * different because it needs to guarantee atomicity and synchronization
     * across multiple threads.
     */

    return 0;
}