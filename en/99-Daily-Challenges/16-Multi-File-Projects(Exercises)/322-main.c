/* Objective: Understand the role of a header file (.h) in making function prototypes and constants available to your main code.
Instructions:
1. Create the file 322-simple_header.h containing:
   - The definition of a constant #define PROJECT_VERSION 1.0
   - The prototype of a function: void display_welcome(void);
2. Create the file 322-main.c:
   - Include your header using quotes instead of angle brackets: #include "322-simple_header.h"
   - Implement the display_welcome function and create the main function displaying the PROJECT_VERSION constant. */

#include <stdio.h>
#include "322-simple_header.h"

void display_welcome(void)
{
    printf("Welcome to the project!\n");
}

int main(void)
{
    display_welcome();

    printf("Project version: %.1f\n", PROJECT_VERSION);

    return 0;
}