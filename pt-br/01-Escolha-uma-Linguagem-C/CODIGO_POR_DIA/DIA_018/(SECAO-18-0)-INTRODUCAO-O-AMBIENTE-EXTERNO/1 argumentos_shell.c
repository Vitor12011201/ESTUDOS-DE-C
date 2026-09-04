/* OBJETIVO: Demonstrar como um programa C captura e interpreta os argumentos passados pelo usuario via shell durante a execucao. */

#include <stdio.h>
#include <stdlib.h>

/*
 * 'argc' (Argument Count): Quantidade de argumentos passados. Sempre é no mínimo 1 (o próprio nome do programa).
 * 'argv' (Argument Vector): Um array de strings (ponteiros de char) contendo os argumentos literais.
 */
int main(int argc, char *argv[]) {
    printf("=== EXEMPLO 1: Argumentos de Linha de Comando ===\n");

    printf("Total de argumentos recebidos (argc): %d\n\n", argc);

    // O índice 0 de argv sempre contém o caminho/nome do executável chamado pelo SO
    printf("Nome do programa executado: %s\n", argv[0]);

    // Lendo argumentos adicionais passados pelo usuário (se houver)
    if (argc > 1) {
        printf("Argumentos fornecidos pelo usuario:\n");
        for (int i = 1; i < argc; i++) {
            printf("  argv[%d] = %s\n", i, argv[i]);
        }
    } else {
        printf("\nNenhum argumento adicional foi fornecido pelo shell.\n");
        printf("Dica: Tente executar o programa assim: ./1800-argumentos_shell argumento1 argumento2\n");
    }

    // Retorna 0 (EXIT_SUCCESS) para o Sistema Operacional indicando que rodou tudo bem
    return EXIT_SUCCESS;
}