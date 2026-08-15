/* OBJETIVO: Combinar 'register' e 'const' para garantir segurança de código, impedindo o vazamento de endereço (&) e alteração acidental de constantes críticas. */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    double valor_base;
} ItemCalculo;

int main(void) {
    printf("=== EXEMPLO 3: Segurança com register const e Structs ===\n");

    size_t total_itens = 3;

    // Alocação dinâmica para array de structs na Heap
    ItemCalculo *itens = malloc(total_itens * sizeof *itens);

    // Verificação estrita de alocação de memória
    if (itens == NULL) {
        fprintf(stderr, "Erro grave: Falha ao alocar tabela de cálculos.\n");
        return EXIT_FAILURE;
    }

    // Inicialização dos dados da struct
    for (size_t i = 0; i < total_itens; i++) {
        itens[i].id = (int)(i + 1);
        itens[i].valor_base = (i + 1) * 150.50;
    }

    /*
     * USO AVANÇADO: 'register const'
     * 1. 'const' impede modificação direta do valor.
     * 2. 'register' IMPEDE que alguém passe o endereço (&fator_multiplicador)
     *    para funções externas que poderiam tentar ignorar o 'const' via Typecast!
     */
    register const double fator_multiplicador = 1.15;

    printf("Aplicando taxa de correção (%.2f):\n", fator_multiplicador);
    for (size_t i = 0; i < total_itens; i++) {
        double valor_final = itens[i].valor_base * fator_multiplicador;
        printf("  -> Item ID %d: Base R$ %.2f | Corrigido R$ %.2f\n",
               itens[i].id,
               itens[i].valor_base,
               valor_final);
    }

    // Liberação responsável da memória alocada
    free(itens);
    itens = NULL;

    printf("Array de structs desalocado e ponteiro zerado para NULL.\n");

    return EXIT_SUCCESS;
}