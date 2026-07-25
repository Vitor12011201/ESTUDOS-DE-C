#include <stdio.h>

/* OBJETIVO: Demonstrar a diferença fundamental entre ponteiro para dado constante
   (const int *) e um ponteiro constante (int * const). */

int main() {
    int valor_a = 10;
    int valor_b = 20;

    // 1. Ponteiro para dado constante: O VALOR não pode mudar via ponteiro, mas o ENDEREÇO sim.
    const int *ptr_dado_const = &valor_a;
    // *ptr_dado_const = 15; // ERRO DE COMPILAÇÃO!
    ptr_dado_const = &valor_b; // VÁLIDO: O ponteiro agora aponta para valor_b.

    // 2. Ponteiro constante: O ENDEREÇO é fixo, mas o VALOR apontado pode ser modificado.
    int * const ptr_fixo = &valor_a;
    *ptr_fixo = 99; // VÁLIDO: O valor dentro de valor_a mudou para 99.
    // ptr_fixo = &valor_b; // ERRO DE COMPILAÇÃO! O ponteiro é constante.

    printf("--- Teste de Ponteiros Constantes ---\n");
    printf("Valor A alterado via ptr_fixo: %d\n", valor_a);
    printf("Valor B lido via ptr_dado_const: %d\n", *ptr_dado_const);

    return 0;
}