/* Objective: Use extern to "warn" C about a global variable that is defined after the function in the file.
Instructions:
1. Create a function called void display_counter(void).
2. Inside the display_counter function, use extern int global_counter; to declare that the variable exists.
3. Print the value of the variable with printf("Counter: %d\n", global_counter);.
4. Create the main(void) function. Inside it, assign 10 to the global_counter variable and call display_counter().
5. Below and outside main, make the actual definition of the variable: int global_counter = 0;. */

#include <stdio.h>

void display_counter(void)
{
    extern int global_counter;

    printf("Counter: %d\n", global_counter);
}

int main(void)
{
    extern int global_counter;

    global_counter = 10;

    display_counter();

    return 0;
}

int global_counter = 0;