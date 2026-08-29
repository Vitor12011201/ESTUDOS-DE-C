/* Objective: Observe in practice how the static keyword prevents a file-scope variable from being accessed by another file via extern.
Instructions:
1. Create the file 343-private.c containing a static file-scope variable:
   - static int secret_key = 1234;
2. Create the file 343-main.c trying to access that variable via extern:

   #include <stdio.h>
   extern int secret_key;
   int main(void) {
       printf("Key: %d\n", secret_key);
       return 0;
   }

3. Try to compile both files together in the terminal (gcc -o app 343-private.c 343-main.c).
4. Observe the linker error (undefined reference to 'secret_key').
5. Reflection in the comment: Explain in the file 343-main.c why the compiler accepts the extern syntax, but the linker fails when building the final executable. */

#include <stdio.h>

extern int secret_key;

int main(void)
{
    printf("Key: %d\n", secret_key);

    return 0;
}

/*
Reflection:

The extern keyword informs the compiler that the variable
secret_key exists somewhere else in the program.

Therefore, when compiling this file, the compiler accepts the declaration:

    extern int secret_key;

However, in the file 343-private.c, the variable was declared with static:

    static int secret_key = 1234;

When static is used on a file-scope variable,
it has internal linkage.

This means secret_key can only be accessed within
the 343-private.c file itself.

Thus, when the linker tries to join the files to create the
executable, it cannot find an external variable called
secret_key available for 343-main.c.

That is why the error "undefined reference to 'secret_key'" occurs.
*/