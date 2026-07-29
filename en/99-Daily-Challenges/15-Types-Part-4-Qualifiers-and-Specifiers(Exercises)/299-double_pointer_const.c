/* Objective: Master right-to-left reading in pointers to pointers with const in different positions.
Instructions:
1. Declare char *message1 = "Hello"; and char *message2 = "World";.
2. Create a pointer to a pointer where the second layer is constant: char *const *pp = &message1;.
3. Run the practical test:
   - Try to advance the main pointer: pp++; (Should it work? Yes/No).
   - Try to change the pointed message: *pp = message2; (Should it error? Yes/No).
4. In the file comment, write the right-to-left reading of this declaration char *const *pp explaining exactly why the compiler accepted one and rejected the other. */

#include <stdio.h>

int main(void)
{
   char *message1 = "Hello";
   char *message2 = "World";

   /*
    * Right-to-left reading:
    *
    * char *const *pp
    *
    * pp is a pointer
    * to a constant pointer
    * to char.
    *
    * The main pointer, pp, is not constant and can change.
    * The pointer accessed by *pp is constant and cannot
    * be assigned another address.
    */
   char *const *pp = &message1;

   printf("Message: %s\n", *pp);

   /*
    * YES, it compiles:
    *
    * pp is not constant, so it can advance to another address.
    *
    * However, since pp initially points to a single variable,
    * and not to an array of pointers, we should not dereference it
    * after incrementing.
    */
   pp++;

   /*
    * To properly test the next operation, we return pp
    * to the original address.
    */
   pp--;

   /*
    * DOES NOT compile:
    *
    * *pp is a constant pointer to char.
    * Therefore, it cannot be changed to point to message2.
    */
   // *pp = message2;

   return 0;
}