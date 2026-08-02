#include <stdio.h>

/* OBJETIVO: Demonstrar como 'volatile' impede que o compilador assuma
   que o valor de uma flag nunca muda dentro de um laço de verificação (polling). */

int main() {
    /* Sem 'volatile', o compilador olharia para o laço 'while (!status_pronto)' abaixo,
       veria que ninguém altera 'status_pronto' DENTRO do corpo do laço e otimizaria
       o código para 'while (1)', travando a execução para sempre. */
    volatile int status_pronto = 0;

    printf("--- Monitorando Flag de Hardware (volatile) ---\n");

    int simulador_interrupcao = 0;
    while (!status_pronto) {
        simulador_interrupcao++;

        // Simula uma alteração assíncrona vinda do hardware após 3 verificações
        if (simulador_interrupcao == 3) {
            status_pronto = 1; // A CPU é obrigada a escrever isso direto na RAM
        }
    }

    printf("Sinal capturado com sucesso na iteracao %d!\n", simulador_interrupcao);
    return 0;
}