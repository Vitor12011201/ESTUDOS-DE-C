/*
Objective: Understand how the value returned by the main function (or via exit())
communicates to the operating system whether the program ran successfully or with an error.

To check the return code of the last execution:

Linux/macOS:
echo $?

Windows CMD:
echo %ERRORLEVEL%

Windows PowerShell:
echo $LASTEXITCODE

EXIT_SUCCESS represents a successful execution.
EXIT_FAILURE represents an execution with an error.
*/

#include <stdlib.h>

#define ERROR_MODE 0

int main(void)
{
    if (ERROR_MODE == 0)
    {
        return EXIT_SUCCESS;
    }
    else
    {
        return EXIT_FAILURE;
    }
}