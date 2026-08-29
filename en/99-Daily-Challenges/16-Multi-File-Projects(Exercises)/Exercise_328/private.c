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

static int secret_key = 1234;