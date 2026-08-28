/*
Objective: Separate the interface, implementation, and use of a simple module.

Instructions:
1. Declare functions in this header to convert temperatures between Celsius and Fahrenheit.
2. Implement the functions in 327-temperature_converter.c.
3. Include this header in 327-main.c and use both conversions.
4. Compile with:
   gcc -std=c17 -Wall -Wextra -Wpedantic 327-main.c 327-temperature_converter.c -o converter
*/

#ifndef TEMPERATURE_CONVERTER_H
#define TEMPERATURE_CONVERTER_H

double celsius_to_fahrenheit(double celsius);
double fahrenheit_to_celsius(double fahrenheit);

#endif
