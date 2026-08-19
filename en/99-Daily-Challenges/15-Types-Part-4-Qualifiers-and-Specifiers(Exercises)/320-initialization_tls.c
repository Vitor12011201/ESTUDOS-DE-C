/* Objective: Practice the restrictions imposed by the compiler for initializing thread-lifetime variables.
Instructions:
1. Remember that global or static variables marked with _Thread_local can only be initialized with constant expressions (known at compile time).
2. In file scope, try to initialize a TLS variable using the return of a function or a common variable:
   - int dynamic_value = 50;
   - // _Thread_local int limit = dynamic_value; // Generates an error!
3. Fix the code by initializing the TLS variable only with a valid constant:
   - _Thread_local int limit = 100;
4. In main, print the value of limit. */

#include <stdio.h>

int dynamic_value = 50;

/*
 * ERROR:
 *
 * _Thread_local int limit = dynamic_value;
 *
 * A variable with thread storage duration declared
 * at file scope must be initialized with a constant
 * expression.
 *
 * Even though dynamic_value was initialized with 50, it is still
 * a variable, not a constant known as a constant expression by
 * the C language.
 */

/* Valid initialization */
_Thread_local int limit = 100;

int main(void) {
    printf("limit = %d\n", limit);

    return 0;
}