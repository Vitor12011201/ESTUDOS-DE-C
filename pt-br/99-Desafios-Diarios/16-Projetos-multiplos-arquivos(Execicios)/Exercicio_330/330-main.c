/*
Exercicio 330: usar um modulo de estatisticas em um programa separado.

Saida esperada:
Media: 7.50
Maior nota: 10
*/

#include <stdio.h>

#include "330-estatisticas.h"

int main(void)
{
    const int notas[] = {6, 8, 10, 6};
    const size_t quantidade = sizeof notas / sizeof notas[0];

    printf("Media: %.2f\n", calcular_media(notas, quantidade));
    printf("Maior nota: %d\n", encontrar_maior(notas, quantidade));

    return 0;
}
