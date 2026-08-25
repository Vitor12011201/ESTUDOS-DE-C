/* Objective: Practice creating a .h header file to distribute prototypes for a geometric calculation module.
Instructions:
1. 338-geometry.h: Add the prototype float calculate_rectangle_area(float base, float height);.
2. 338-geometry.c: Include "338-geometry.h" and implement the calculation function.
3. 338-main.c: Include <stdio.h> and "338-geometry.h". In main, call the function to calculate the area of a 5.0 x 3.0 rectangle and print the result. */

#include <stdio.h>
#include "324-geometry.h"

int main(void) {
    float area = calculate_rectangle_area(5.0f, 3.0f);

    printf("Rectangle area: %.2f\n", area);

    return 0;
}