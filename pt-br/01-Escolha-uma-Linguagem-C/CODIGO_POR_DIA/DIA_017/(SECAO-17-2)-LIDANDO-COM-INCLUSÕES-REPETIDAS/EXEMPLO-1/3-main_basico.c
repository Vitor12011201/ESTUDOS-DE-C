#include <stdio.h>
#include <stdlib.h>

// Inclusão dupla intencional para testar o Header Guard:
#include "1-math_utils_br.h"
#include "1-math_utils_br.h" // Sem o #ifndef, causaria erro de "redefinition of 'struct Ponto'"

int main(void) {
    printf("=== EXEMPLO 1: Proteção Contra Inclusão Dupla ===\n");

    Ponto p1 = {10, 20};
    Ponto p2 = {5, 15};

    int resultado = somar_pontos(p1, p2);
    printf("Soma das coordenadas: %d\n", resultado);

    return EXIT_SUCCESS;
}