/* OBJETIVO: Demonstrar a separacao conceitual entre a Interface de um modulo (o que iria no arquivo .h) e a sua Implementacao (o que iria no arquivo .c), mantendo tudo em um arquivo executavel. */

#include <stdio.h>
#include <stdlib.h>

// ============================================================================
// 1. SEÇÃO DE INTERFACE / CONTRATO (Simula o arquivo: 'vetor_math.h')
// ============================================================================

// Protótipos das funções públicas exportadas pelo módulo
int *vetor_criar(size_t tamanho);
void vetor_preencher(int *vetor, size_t tamanho, int valor_inicial);
void vetor_destruir(int **vetor);

// ============================================================================
// 2. SEÇÃO DE CONSUMO (Simula o arquivo: 'main.c')
// ============================================================================

int main(void) {
    printf("=== EXEMPLO 1: Estrutura Modular Basica (Interface vs Implementacao) ===\n");

    size_t tamanho = 5;

    // Consome a interface do módulo sem precisar saber como 'vetor_criar' aloca
    int *meu_vetor = vetor_criar(tamanho);

    // Tratamento estrito contra falha de alocação na Heap
    if (meu_vetor == NULL) {
        fprintf(stderr, "Erro ao criar o vetor dinâmico.\n");
        return EXIT_FAILURE;
    }

    // Processa os dados usando o módulo
    vetor_preencher(meu_vetor, tamanho, 10);

    printf("Conteudo do vetor alocado pelo modulo:\n");
    for (size_t i = 0; i < tamanho; i++) {
        printf("  -> meu_vetor[%zu] = %d\n", i, meu_vetor[i]);
    }

    // Passamos o endereço do ponteiro para a função poder zerar o ponteiro original (&meu_vetor)
    vetor_destruir(&meu_vetor);

    if (meu_vetor == NULL) {
        printf("Vetor destruido e ponteiro zerado para NULL com sucesso.\n");
    }

    return EXIT_SUCCESS;
}

// ============================================================================
// 3. SEÇÃO DE IMPLEMENTAÇÃO (Simula o arquivo: 'vetor_math.c')
// ============================================================================

int *vetor_criar(size_t tamanho) {
    if (tamanho == 0) return NULL;

    // Uso da boa prática 'sizeof *vetor'
    int *vetor = malloc(tamanho * sizeof *vetor);
    return vetor; // Retorna NULL se a alocação falhar
}

void vetor_preencher(int *vetor, size_t tamanho, int valor_inicial) {
    if (vetor == NULL) return;

    for (size_t i = 0; i < tamanho; i++) {
        vetor[i] = valor_inicial * (int)(i + 1);
    }
}

void vetor_destruir(int **vetor) {
    if (vetor != NULL && *vetor != NULL) {
        free(*vetor);   // Libera o bloco alocado na Heap
        *vetor = NULL;  // Reseta o ponteiro do chamador para evitar Dangling Pointer
    }
}