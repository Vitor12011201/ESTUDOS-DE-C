// ============================================================================
// Arquivo: 3-foo_br.c
// ============================================================================
// Ponto de entrada (Main)
#include <stdio.h>
#include <stdlib.h>
#include "1-bar_br.h" // Inclui o protótipo da função add()

int main(void) {
    printf("=== EXEMPLO 1: Protótipo via Header ===\n");

    int resultado = add(2, 3);
    printf("Resultado de add(2, 3): %d\n", resultado);

    return EXIT_SUCCESS;
}