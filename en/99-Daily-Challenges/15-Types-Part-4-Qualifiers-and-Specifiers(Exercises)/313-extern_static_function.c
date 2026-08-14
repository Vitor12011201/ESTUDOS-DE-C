/* Objective: Practice the visibility difference between public functions (implicit extern) and private module functions (static).
Instructions:
1. Create the explicit prototype of a public utility function using extern:
   - extern void public_function(void);
2. Create a private function by marking it as static:
   - static void private_function(void) { printf("Internal access authorized.\n"); }
3. Implement public_function(void) calling private_function() inside it.
4. In main, call public_function(). */

#include <stdio.h>

extern void public_function(void);

static void private_function(void)

{

    printf("Internal access authorized.\n");

}

void public_function(void)

{

    private_function();

}

int main(void)

{

    public_function();

    return 0;

}