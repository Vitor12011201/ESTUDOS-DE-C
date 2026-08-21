/* Objective: Understand the role of a header file (.h) in making function prototypes and constants available to your main code.
Instructions:
1. Create the file 334-simple_header.h containing:
   - The definition of a constant #define PROJECT_VERSION 1.0
   - The prototype of a function: void display_welcome(void);
2. Create the file 334-main.c:
   - Include your header using quotes instead of angle brackets: #include "334-simple_header.h"
   - Implement the display_welcome function and create the main function displaying the PROJECT_VERSION constant. */

#define PROJECT_VERSION 1.0

void display_welcome(void);