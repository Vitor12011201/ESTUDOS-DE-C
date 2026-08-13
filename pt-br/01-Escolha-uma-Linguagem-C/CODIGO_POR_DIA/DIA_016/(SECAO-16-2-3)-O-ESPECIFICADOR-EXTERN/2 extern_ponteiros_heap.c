/* OBJETIVO: Utilizar 'extern' para referenciar um ponteiro global alocado dinamicamente na Heap com malloc, tratando erros de NULL e liberando com free(). */

#include <stdio.h>
#include <stdlib.h>

// Declaração antecipada 'extern' do ponteiro e do tamanho do buffer
extern int *g_vetor;
extern size_t g_tamanho;

void preencher_vetor(void) {
    // Acessa o ponteiro global alocado na Heap
    for (size_t i = 0; i < g_tamanho; i++) {
        g_vetor[i] = (int)(i + 1) * 25;
    }
}

int main(void) {
    printf("=== EXEMPLO 2: extern com Ponteiro na Heap ===\n");

    g_tamanho = 4;

    // Alocação dinâmica usando a boa prática 'sizeof *ponteiro'
    g_vetor = malloc(g_tamanho * sizeof *g_vetor);

    // Checagem obrigatória contra erro de alocação (NULL)
    if (g_vetor == NULL) {
        fprintf(stderr, "Erro crítico: Falha ao alocar memória na Heap.\n");
        return EXIT_FAILURE;
    }

    // Preenche o vetor via função auxiliar
    preencher_vetor();

    // Exibe os valores alocados dinamicamente
    printf("Conteúdo do vetor alocado na Heap:\n");
    for (size_t i = 0; i < g_tamanho; i++) {
        printf("  g_vetor[%zu] = %d\n", i, g_vetor[i]);
    }

    // Boas práticas de liberação e anulação do ponteiro
    free(g_vetor);
    g_vetor = NULL;
    g_tamanho = 0;

    printf("Memória liberada com sucesso e ponteiro anulado (NULL).\n");

    return EXIT_SUCCESS;
}

// DEFINIÇÃO REAL DOS PONTEIROS (Aloca os ponteiros globais no segmento de dados)
int *g_vetor = NULL;
size_t g_tamanho = 0;