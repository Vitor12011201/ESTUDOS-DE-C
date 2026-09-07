/*
Objective: validate integer command-line arguments without using atoi.

Success test:
    ./app 12 -7

Error test:
    ./app 12 abc

Use "echo $?" after each run on Linux to check the return code.
*/

#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

static int convert_to_int(const char *text, int *result)
{
    char *end = NULL;
    long value;

    errno = 0;
    value = strtol(text, &end, 10);

    if (text[0] == '\0' || *end != '\0' || errno == ERANGE ||
        value < INT_MIN || value > INT_MAX) {
        return 0;
    }

    *result = (int)value;
    return 1;
}

int main(int argc, char *argv[])
{
    int first_number;
    int second_number;

    if (argc != 3) {
        fprintf(stderr, "Usage: %s <integer1> <integer2>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_to_int(argv[1], &first_number) ||
        !convert_to_int(argv[2], &second_number)) {
        fprintf(stderr, "Error: both arguments must be valid integers.\n");
        return EXIT_FAILURE;
    }

    printf("Sum: %ld\n", (long)first_number + second_number);

    return EXIT_SUCCESS;
}
