#include <stdio.h>

/* OBJETIVO: Demonstrar como o 'restrict' permite ao compilador manter valores em
   registradores rápidos da CPU sem precisar recarregar da RAM a cada iteração. */

// Sem 'restrict', o compilador assume que 'destino' e 'origem' podem apontar para a
// mesma memória (pointer aliasing) e recarrega 'fator' da RAM a cada ciclo.
void somar_vetor_optimizado(int * restrict destino, const int * restrict origem, int * restrict fator, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        // Como o compilador SABE que nada se sobrepõe, ele pode vetorizar esta operação
        destino[i] = origem[i] + (*fator);
    }
}

int main() {
    int a[4] = {1, 2, 3, 4};
    int b[4] = {0};
    int multiplicador = 10;

    somar_vetor_optimizado(b, a, &multiplicador, 4);

    printf("--- Resultado da Operação com 'restrict' ---\n");
    for (int i = 0; i < 4; i++) {
        printf("b[%d] = %d\n", i, b[i]);
    }

    return 0;
}