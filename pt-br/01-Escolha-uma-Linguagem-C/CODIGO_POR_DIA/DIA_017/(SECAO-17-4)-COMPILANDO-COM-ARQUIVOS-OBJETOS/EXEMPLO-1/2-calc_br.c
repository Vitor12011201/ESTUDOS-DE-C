#include <stdio.h>
#include <stdlib.h>
#include "1-calc.h"

int main(void) {
    printf("=== EXEMPLO 1: Compilacao e Linkagem com Arquivos Objeto ===\n");

    int res_mult = multiplicar(6, 7);
    int res_pot = potencia(2, 8);

    printf("6 * 7 = %d\n", res_mult);
    printf("2^8   = %d\n", res_pot);

    return EXIT_SUCCESS;
}