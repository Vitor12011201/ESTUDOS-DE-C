/* Objective: Explore the complete signature of the main function (int main(int argc, char *argv[])) to capture parameters passed via the terminal.
Instructions:
1. Declare the main function with parameters: int main(int argc, char *argv[]).
2. Print the total number of arguments passed (argc).
3. Use a loop to list all the arguments contained in the argv vector.
4. Run the program in the terminal passing extra parameters (e.g., ./app argument1 test 123). */

/*
Objective: Explore the complete signature of the main function (int main(int argc, char *argv[]))
to capture parameters passed via the terminal.

argc = total number of arguments received.
argv = vector of strings containing each argument.

Important:
argv[0] usually contains the name/path used to execute the program.
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Number of arguments: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}