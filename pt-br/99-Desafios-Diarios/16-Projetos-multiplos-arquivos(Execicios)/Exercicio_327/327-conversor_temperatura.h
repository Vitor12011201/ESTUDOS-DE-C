/*
Objetivo: Separar a interface, a implementacao e o uso de um modulo simples.

Instrucoes:
1. Declare, neste header, funcoes para converter temperaturas entre Celsius e Fahrenheit.
2. Implemente as funcoes em 327-conversor_temperatura.c.
3. Inclua este header em 327-principal.c e use as duas conversoes.
4. Compile com:
   gcc -std=c17 -Wall -Wextra -Wpedantic 327-principal.c 327-conversor_temperatura.c -o conversor
*/

#ifndef CONVERSOR_TEMPERATURA_H
#define CONVERSOR_TEMPERATURA_H

double celsius_para_fahrenheit(double celsius);
double fahrenheit_para_celsius(double fahrenheit);

#endif
