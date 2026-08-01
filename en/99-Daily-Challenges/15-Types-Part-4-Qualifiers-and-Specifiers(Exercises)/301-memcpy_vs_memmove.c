/* Objective: Understand why the standard library uses restrict in the memcpy function, while memmove does not.
Instructions:
1. The signature of memcpy is: void *memcpy(void *restrict dest, const void *restrict src, size_t n);.
2. This means that the source (src) and destination (dest) memory areas can never overlap.
3. Create an integer array: int arr[] = {1, 2, 3, 4, 5};.
4. Create a function void copy_vector(int *restrict dest, const int *restrict src, int n) with a simple for loop copying dest[i] = src[i].
5. In main, call the function copying from vector a to a completely separate vector b (correct use of restrict). */

#include <stdio.h>

int arr[] = {1, 2, 3, 4, 5};

void copy_vector(int *restrict dest, const int *restrict src, int n)
{
    for (int i = 0; i < n; i++)
    {
        dest[i] = src[i];
        printf("%d\n", dest[i]);
    }
}

int main()
{
    int b[5];

    copy_vector(b, arr, 5);

    return 0;
}