/* OBJETIVO: Utilizar 'register' em parâmetros e acumuladores de funções intensivas, contrastando com o processamento de dados alocados dinamicamente na Heap. */

#include <stdio.h>
#include <stdlib.h>

// Os parâmetros da função usam 'register' para acesso ultra-rápido durante as iterações
long long processar_vetor(register const int *vetor_ram, register size_t tamanho) {
    // Acumulador interno também mantido em registrador da CPU
    register long long acumulador = 0;

    for (register size_t i = 0; i < tamanho; i++) {
        acumulador += vetor_ram[i];
    }

    return acumulador;
}

int main(void) {
    printf("=== EXEMPLO 2: register em Funções com Vetor na Heap ===\n");

    size_t qtd_elementos = 5;

    // Alocação dinâmica do vetor na Heap usando 'sizeof *ponteiro'
    int *dados = malloc(qtd_elementos * sizeof *dados);

    // Checagem rigorosa contra falha de alocação (NULL)
    if (dados == NULL) {
        fprintf(stderr, "Erro crítico: Falha ao alocar memória na Heap.\n");
        return EXIT_FAILURE;
    }

    // Preenchendo o vetor alocado na Heap
    for (size_t i = 0; i < qtd_elementos; i++) {
        dados[i] = (int)(i + 1) * 100;
    }

    // Processando o vetor via função otimizada
    long long total = processar_vetor(dados, qtd_elementos);
    printf("Soma total dos elementos processados: %lld\n", total);

    // Desalocação segura da memória na Heap e anulação do ponteiro
    free(dados);
    dados = NULL;

    printf("Memória da Heap liberada e ponteiro anulado com sucesso.\n");

    return EXIT_SUCCESS;
}