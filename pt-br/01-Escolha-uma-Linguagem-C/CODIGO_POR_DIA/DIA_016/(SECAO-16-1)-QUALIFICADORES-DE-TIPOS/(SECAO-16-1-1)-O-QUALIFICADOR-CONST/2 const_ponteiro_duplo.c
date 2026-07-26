#include <stdio.h>

/* OBJETIVO: Travar tanto o endereço guardado pelo ponteiro quanto o dado apontado,
   criando um ponteiro de imutabilidade absoluta. */

int main() {
    int taxa_fps = 60;
    int nova_taxa = 120;

    // Lendo da direita para a esquerda:
    // ptr é um [ponteiro constante] para um [int constante].
    const int *const ptr_blindado = &taxa_fps;

    printf("--- Imutabilidade Dupla ---\n");
    printf("Endereço monitorado: %p | Valor: %d\n", (void*)ptr_blindado, *ptr_blindado);

    // Ambas as tentativas abaixo geram ERRO DE COMPILAÇÃO:
    // *ptr_blindado = 144;      // ERRO: Dado é constante
    // ptr_blindado = &nova_taxa; // ERRO: Ponteiro é constante

    return 0;
}