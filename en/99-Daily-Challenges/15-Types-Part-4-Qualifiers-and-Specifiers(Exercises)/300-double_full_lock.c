/* Objective: Practice declaring a constant pointer to a constant pointer to constant data (const char *const *const) and test all protection layers in the compiler.
Instructions:
1. Declare two strings: char *s1 = "Alpha"; and char *s2 = "Beta";.
2. Declare an initial pointer char *p = s1;.
3. Now, create the full lock on a double pointer:
   - const char *const *const pp = &p;
4. Perform the three modification tests in the code (one at a time) and comment out the lines that generate errors so the code compiles:
   - Test 1 (Outer Layer): Try to change the double pointer: pp = NULL;
   - Test 2 (Middle Layer): Try to change what *pp points to: *pp = s2;
   - Test 3 (Inner Layer): Try to change the character of the data: **pp = 'X';
5. Challenge: In the file comments, write the translation of the type const char *const *const pp by reading strictly from right to left, explaining why all 3 operations above were blocked by the compiler. */

#include <stdio.h>
#include <stddef.h>

int main(void)
{
   const char *s1 = "Alpha";
   const char *s2 = "Beta";

   /*
    * p is a pointer to constant char.
    *
    * p can still be reassigned directly:
    * p = s2;
    */
   const char *p = s1;

   /*
    * Strictly reading from right to left:
    *
    * const char *const *const pp
    *
    * pp is:
    * - a constant pointer
    * - to a constant pointer
    * - to constant char
    *
    * In one sentence:
    * "pp is a constant pointer to a constant pointer
    * to constant char."
    */
   const char *const *const pp = &p;

   /*
    * TEST 1 — OUTER LAYER
    *
    * pp is a constant pointer, so it cannot receive
    * another address after initialization.
    */
   // pp = NULL;  // ERROR: assignment of read-only variable 'pp'

   /*
    * TEST 2 — MIDDLE LAYER
    *
    * *pp is a constant pointer, so it cannot be
    * redirected to s2 through pp.
    */
   // *pp = s2;   // ERROR: assignment of read-only location '*pp'

   /*
    * TEST 3 — INNER LAYER
    *
    * **pp is a constant char, so its value cannot be
    * changed through pp.
    */
   // **pp = 'X'; // ERROR: assignment of read-only location '**pp'

   printf("String: %s\n", *pp);
   printf("First character: %c\n", **pp);

   return 0;
}