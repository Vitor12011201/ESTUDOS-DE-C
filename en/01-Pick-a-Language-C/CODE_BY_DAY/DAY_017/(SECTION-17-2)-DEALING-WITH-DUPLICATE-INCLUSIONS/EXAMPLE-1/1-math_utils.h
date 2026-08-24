/* Objective: Demonstrates how the Header Guard prevents compilation errors when a .h file is included more than once in the same source file. */

#ifndef MATH_UTILS_H   // 1. If MATH_UTILS_H is not defined...
#define MATH_UTILS_H   // 2. Defines the macro to block future inclusions

// Type definition and function prototype
typedef struct {
    int x;
    int y;
} Point;

int sum_points(Point p1, Point p2);

#endif                 // 3. End of the #ifndef protected block