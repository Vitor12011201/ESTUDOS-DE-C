/* Objective: Implement a vector addition operation in the style of high-performance computing (HPC), ensuring no aliasing.
Instructions:
1. Create a function void add_vectors(const float *restrict a, const float *restrict b, float *restrict result, int n).
2. Inside the function, make a loop adding element by element: result[i] = a[i] + b[i];.
3. In main, declare 3 distinct arrays of size 5: v1, v2, and res.
4. Fill v1 and v2, execute the function, and print res. */

#include <stdio.h>

void add_vectors(const float *restrict a, const float *restrict b, float *restrict result, int n)
{
    for (int i = 0; i < n; i++)
    {
        result[i] = a[i] + b[i];
        printf("%.2f\n", result[i]);
    }
}

int main()
{
    float v1[5] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    float v2[5] = {10.0f, 20.0f, 30.0f, 40.0f, 50.0f};
    float result[5];

    add_vectors(v1, v2, result, 5);

    return 0;
}