#include <stdio.h>

#include "327-conversor_temperatura.h"

int main(void)
{
    const double temperatura_celsius = 25.0;
    const double temperatura_fahrenheit = 77.0;

    printf("%.1f °C equivalem a %.1f °F.\n",
           temperatura_celsius,
           celsius_para_fahrenheit(temperatura_celsius));
    printf("%.1f °F equivalem a %.1f °C.\n",
           temperatura_fahrenheit,
           fahrenheit_para_celsius(temperatura_fahrenheit));

    return 0;
}
