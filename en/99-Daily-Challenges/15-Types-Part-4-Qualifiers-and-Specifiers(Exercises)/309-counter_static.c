/* Objective: Observe the persistence of a local static variable compared to a regular (auto) variable.
Instructions:
1. Create a function called void test_counter(void).
2. Inside it, declare two variables:
   - int common = 0;
   - static int static_var = 0;
3. Increment both by 1: common++; static_var++;.
4. Print the values of both variables.
5. In main, call the test_counter() function 3 times in a row. */

#include <stdio.h>

void test_counter(void)
{
   int common = 0;
   static int static_var = 0;

   common++;
   static_var++;

   printf("Common: %d | Static: %d\n", common, static_var);
}

int main(void)
{
   test_counter();
   test_counter();
   test_counter();

   return 0;
}