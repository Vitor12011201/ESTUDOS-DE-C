/* Objective: Understand the syntax of a volatile pointer pointing to a hardware memory address.
Instructions:
1. Simulate a hardware register by creating an unsigned int variable hardware_timer = 0;.
2. Create a pointer pointing to it, telling C that this value may change at any moment due to hardware:
   volatile unsigned int *timer_reg = &hardware_timer;
3. Create a simple function void display_time(volatile unsigned int *timer_ptr) that just reads the value through *timer_ptr and prints it to the console.
4. In main, simulate the hardware changing hardware_timer = 1000; and call the function. */

#include <stdio.h>

void display_time(volatile unsigned int *timer_ptr)
{
    unsigned int current_time = *timer_ptr;

    printf("Current time: %u\n", current_time);
}

int main(void)
{

    unsigned int hardware_timer = 0;

    volatile unsigned int *timer_reg = &hardware_timer;

    hardware_timer = 1000;

    display_time(timer_reg);

    return 0;
}