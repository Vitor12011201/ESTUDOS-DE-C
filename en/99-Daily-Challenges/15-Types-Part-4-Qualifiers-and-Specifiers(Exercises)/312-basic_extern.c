/* Objective: Understand the difference between declaring a variable's existence with extern and defining the variable in memory.
Instructions:
1. At the top of the main function, declare an integer variable that will be defined only later in the file:
   - extern int global_score;
2. Print the value of global_score inside main.
3. Change the value of global_score to 100 inside main.
4. Outside and below the main function (in file scope), make the actual definition of the variable:
   - int global_score = 50; */

#include <stdio.h>

int main(void)
{
    extern int global_score;

    printf("Initial score: %d\n", global_score);

    global_score = 100;

    printf("Changed score: %d\n", global_score);

    return 0;
}

int global_score = 50;