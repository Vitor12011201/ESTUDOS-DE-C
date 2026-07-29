/* Objective: Use a mutable pointer that points to constant data to traverse an array without risking changing its values.
Instructions:
1. Declare an array int grades[] = {85, 90, 78, 92};.
2. Declare a pointer const int *ptr = grades;.
3. Use a loop to traverse the array by incrementing the pointer (ptr++) and printing each element with *ptr.
4. Try to do *ptr = 100; inside the loop and see the compiler complain. */

#include <stdio.h>

int main(void)
{
    int grades[] = {85, 90, 78, 92};

    const int *ptr = grades;

    int count = sizeof(grades) / sizeof(grades[0]);

    for (int i = 0; i < count; i++)
    {
        printf("Grade: %d\n", *ptr);

        ptr++;
    }

    return 0;
}