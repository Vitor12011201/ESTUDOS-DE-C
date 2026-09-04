/* OBJECTIVE: Demonstrate how a C program captures and interprets the arguments passed by the user via the shell during execution. */

#include <stdio.h>
#include <stdlib.h>

/*
 * 'argc' (Argument Count): Number of arguments passed. Always at least 1 (the program name itself).
 * 'argv' (Argument Vector): An array of strings (char pointers) containing the literal arguments.
 */
int main(int argc, char *argv[]) {
    printf("=== EXAMPLE 1: Command Line Arguments ===\n");

    printf("Total arguments received (argc): %d\n\n", argc);

    // Index 0 of argv always contains the path/name of the executable called by the OS
    printf("Executed program name: %s\n", argv[0]);

    // Reading additional arguments passed by the user (if any)
    if (argc > 1) {
        printf("Arguments provided by the user:\n");
        for (int i = 1; i < argc; i++) {
            printf("  argv[%d] = %s\n", i, argv[i]);
        }
    } else {
        printf("\nNo additional arguments were provided by the shell.\n");
        printf("Tip: Try running the program like this: ./1800-arguments_shell arg1 arg2\n");
    }

    // Returns 0 (EXIT_SUCCESS) to the Operating System, indicating a successful run
    return EXIT_SUCCESS;
}