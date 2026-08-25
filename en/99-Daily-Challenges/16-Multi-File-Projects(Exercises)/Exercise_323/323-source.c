/* Objective: Observe the implicit function declaration error when calling a function from another .c file and fix it with a local prototype.
Instructions:
1. Create the file 337-source.c with the function:

int multiply(int a, int b) {
    return a * b;
}

2. Create the file 337-destination.c with main calling multiply(4, 5) without any prototype or #include.
3. Try to compile both together in the terminal (gcc -o app 337-source.c 337-destination.c) to see the compiler warning/error.
4. Then, add the prototype int multiply(int, int); at the top of 337-destination.c and compile again without errors. */

int multiply(int a, int b) {
    return a * b;
}