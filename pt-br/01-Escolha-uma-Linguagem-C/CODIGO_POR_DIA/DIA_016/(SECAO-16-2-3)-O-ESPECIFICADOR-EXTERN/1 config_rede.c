/* OBJETIVO: Demonstrar o uso do especificador 'extern' em um único arquivo C para declaração antecipada (Forward Declaration) e dentro de um bloco local. */

#include <stdio.h>
#include <stdlib.h>

// Declaração antecipada com extern: avisa ao compilador que a variável existe,
// permitindo que funções acima da definição real a utilizem sem erro de compilação.
extern int g_contador;

void incrementar(void) {
    // Acessa a variável global declarada no topo via extern
    g_contador += 10;
}

int main(void) {
    printf("=== EXEMPLO 1: extern em Arquivo Único ===\n");

    printf("Valor inicial de g_contador: %d\n", g_contador);

    incrementar();
    printf("Valor após incrementar():    %d\n", g_contador);

    // USO DO EXTERN EM ESCOPO DE BLOCO LOCAL:
    {
        // Garante a referência explícita ao símbolo global dentro deste bloco
        extern int g_contador;
        g_contador = 100;
        printf("Valor alterado no bloco interno: %d\n", g_contador);
    }

    printf("Valor final no main: %d\n", g_contador);

    return EXIT_SUCCESS;
}

// DEFINIÇÃO REAL DA VARIÁVEL GLOBAL (Alocação física de memória na RAM):
// Declarada após o uso no main para demonstrar o poder do 'extern'.
int g_contador = 50;