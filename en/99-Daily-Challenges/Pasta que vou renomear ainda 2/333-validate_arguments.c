/* Objective: Combine argc, argv, type conversion with atoi, and system return codes (EXIT_SUCCESS / EXIT_FAILURE).
Instructions:
1. Include <stdio.h> and <stdlib.h>.
2. Declare the main function signature to receive argc and argv.
3. Your program must expect exactly 2 numeric arguments passed via the command line (in addition to the program name in argv[0], totaling argc == 3).
4. Error case: If the user does not pass exactly 2 arguments (e.g., typing only ./app 10 or ./app with nothing), print a correct usage message to stderr (fprintf(stderr, "Usage: %s <num1> <num2>\n", argv[0]);) and exit immediately returning EXIT_FAILURE.
5. Success case: If it receives the 2 arguments, convert them to integers using atoi(argv[1]) and atoi(argv[2]), print the sum of the two numbers to stdout, and exit returning EXIT_SUCCESS.
   - In the code comment: Explain how you would test both output scenarios in your terminal (one generating an error and the other success) and how you would inspect the operating system's return code after execution. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /*
     * Error test:
     * ./app 10
     * echo $?
     * The program should show the usage message and return EXIT_FAILURE.
     *
     * Success test:
     * ./app 10 20
     * echo $?
     * The program should print 30 and return EXIT_SUCCESS.
     *
     * On Linux, the command "echo $?" shows the return code
     * of the last executed program.
     */

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s <num1> <num2>\n", argv[0]);
        return EXIT_FAILURE;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    printf("Sum: %d\n", num1 + num2);

    return EXIT_SUCCESS;
}