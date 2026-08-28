#include <stdio.h>
#include <stdlib.h>
#include "1703-globals.h"

/*
 * TENTATIVA DE ACESSO A VARIÁVEL STATIC:
 * Se você desmarcar a linha abaixo, o Linker (ld) emitirá um erro de compilação:
 * "undefined reference to 'segredo_modulo'"
 */
// extern int segredo_modulo; // ERRO DE LINKAGEM!

int main(void) {
    printf("=== EXEMPLO 1: extern vs static (Linkage Externa vs Interna) ===\n");

    printf("Valor inicial de contador_global (via extern): %d\n", contador_global);

    incrementar_contador();
    printf("Valor de contador_global apos incrementar_contador(): %d\n", contador_global);

    // Alteração direta da variável extern
    contador_global = 500;
    printf("Valor de contador_global alterado diretamente na main: %d\n", contador_global);

    return EXIT_SUCCESS;
}