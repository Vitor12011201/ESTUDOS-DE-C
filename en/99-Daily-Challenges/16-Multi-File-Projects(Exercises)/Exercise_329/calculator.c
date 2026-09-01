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

int add(int a, int b) {
    return a + b;
}