#include <stdio.h>

#include "327-temperature_converter.h"

int main(void)
{
    const double celsius_temperature = 25.0;
    const double fahrenheit_temperature = 77.0;

    printf("%.1f °C equals %.1f °F.\n",
           celsius_temperature,
           celsius_to_fahrenheit(celsius_temperature));
    printf("%.1f °F equals %.1f °C.\n",
           fahrenheit_temperature,
           fahrenheit_to_celsius(fahrenheit_temperature));

    return 0;
}
