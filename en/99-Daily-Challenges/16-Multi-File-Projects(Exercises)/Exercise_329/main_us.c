/* Objective: Practice manual generation of object files (.o) using the GCC -c flag and linking them together in the linking step.
Instructions:
1. Create the file calculator.c with a simple function:

   int add(int a, int b) {
       return a + b;
   }

2. Create the file main.c calling add(10, 20) using the prototype int add(int, int);.
3. In the comments of the 346-main.c file, write the exact sequence of terminal commands to:
   - Compile 346-calculator.c to 346-calculator.o
   - Compile 346-main.c to 346-main.o
4. Link both to generate the executable app */

#include <stdio.h>

/* Prototype of the function defined in another file */
int add(int, int);

int main(void)
{
    int result = add(10, 20);

    printf("Result: %d\n", result);

    return 0;
}

/*
Terminal command sequence:

1. Compile 346-calculator.c and generate the object file:

   gcc -c 346-calculator.c -o 346-calculator.o

2. Compile 346-main.c and generate the object file:

   gcc -c 346-main.c -o 346-main.o

3. Link both object files and generate the executable app:

   gcc 346-calculator.o 346-main.o -o app

4. Run:

   ./app

Expected output:

   Result: 30
*/