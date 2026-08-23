/* Objetivo: Praticar a criação de um arquivo de cabeçalho .h para distribuir protótipos de um módulo de cálculo geométrico.
Instruções:
1. 338-geometria.h: Adicione o protótipo float calcula_area_retangulo(float base, float altura);.
2. 338-geometria.c: Inclua "338-geometria.h" e implemente a função de cálculo.
3. 338-main.c: Inclua <stdio.h> e "338-geometria.h". No main, chame a função para calcular a área de um retângulo de 5.0 x 3.0 e imprima o resultado. */

#include <stdio.h>
#include "324-geometria.h"

int main(void) {
    float area = calcula_area_retangulo(5.0f, 3.0f);

    printf("Area do retangulo: %.2f\n", area);

    return 0;
}