/* Objetivo: Praticar a convenção de nomenclatura e estrutura dos Include Guards.
Instruções:
1. Crie o arquivo 340-sensor.h usando a convenção de nome em maiúsculas (SENSOR_H).
2. Adicione a proteção #ifndef SENSOR_H / #define SENSOR_H / #endif.
3. Dentro do bloco protegido, adicione a constante #define VALOR_MAXIMO_SENSOR 100 e o protótipo int le_sensor(void);.
4. No arquivo 340-main.c, inclua "340-sensor.h" e exiba a constante no main. */

#include <stdio.h>
#include "340-sensor_br.h"

int main(void)
{
    printf("Valor maximo do sensor: %d\n", VALOR_MAXIMO_SENSOR);

    return 0;
}