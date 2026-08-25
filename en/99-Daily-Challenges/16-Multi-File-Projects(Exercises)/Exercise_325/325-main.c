/* Objective: Practice the naming convention and structure of Include Guards.
Instructions:
1. Create the file 340-sensor.h using the uppercase naming convention (SENSOR_H).
2. Add the protection #ifndef SENSOR_H / #define SENSOR_H / #endif.
3. Inside the protected block, add the constant #define SENSOR_MAX_VALUE 100 and the prototype int read_sensor(void);.
4. In the file 340-main.c, include "340-sensor.h" and display the constant in main. */

#include <stdio.h>
#include "340-sensor.h"

int main(void)
{
    printf("Sensor maximum value: %d\n", SENSOR_MAX_VALUE);

    return 0;
}