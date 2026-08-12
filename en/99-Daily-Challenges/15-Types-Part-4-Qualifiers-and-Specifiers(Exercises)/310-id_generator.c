/* Objective: Use static in block scope to create a sequential ID generator without using public global variables.
Instructions:
1. Create a function int generate_next_id(void).
2. Declare a static variable to control the sequence: static int last_id = 1000;.
3. Every time the function is called, it should increment last_id and return the new value.
4. In main, simulate the creation of 3 new users by calling the function and printing the returned IDs. */

#include <stdio.h>

int generate_next_id(void)
{
    static int last_id = 1000;

    last_id++;

    return last_id;
}

int main(void)
{
    printf("User 1 - ID: %d\n", generate_next_id());
    printf("User 2 - ID: %d\n", generate_next_id());
    printf("User 3 - ID: %d\n", generate_next_id());

    return 0;
}