/*
Objetivo: praticar a criacao de um modulo reutilizavel e sua compilacao
separada em arquivos objeto.

Compile cada modulo:
    gcc -std=c17 -Wall -Wextra -Wpedantic -c 330-main.c -o 330-main.o
    gcc -std=c17 -Wall -Wextra -Wpedantic -c 330-estatisticas.c -o 330-estatisticas.o

Faca o linking:
    gcc 330-main.o 330-estatisticas.o -o estatisticas
*/

#ifndef ESTATISTICAS_H
#define ESTATISTICAS_H

#include <stddef.h>

double calcular_media(const int valores[], size_t quantidade);
int encontrar_maior(const int valores[], size_t quantidade);

#endif
