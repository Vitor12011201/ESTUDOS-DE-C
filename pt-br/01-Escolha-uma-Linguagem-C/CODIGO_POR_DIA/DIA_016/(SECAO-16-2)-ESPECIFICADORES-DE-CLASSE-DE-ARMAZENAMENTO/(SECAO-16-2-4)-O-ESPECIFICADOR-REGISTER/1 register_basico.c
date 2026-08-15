/* OBJETIVO: Demonstrar o uso do especificador 'register' em um acumulador de loop e exemplificar a proibição estrita de obter seu endereço com o operador '&'. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("=== EXEMPLO 1: register Básico e Restrição de Endereço ===\n");

    // Dica ao compilador para manter 'i' e 'soma' nos registradores da CPU
    register int i;
    register int soma = 0;

    // Loop de alta frequência usando variáveis em registradores
    for (i = 1; i <= 10; i++) {
        soma += i;
    }

    printf("Soma de 1 a 10 calculada via registrador: %d\n", soma);

    /*
     * DEMONSTRAÇÃO DE ERRO DE COMPILAÇÃO (Regra do C ISO):
     * Se você desmarcar a linha abaixo, o compilador (GCC/Clang) emitirá um erro:
     * "error: address of register variable 'i' requested"
     *
     * Registradores da CPU não residem na memória RAM, portanto NÃO possuem endereço.
     */
    // int *ptr = &i; // ERRO DE COMPILAÇÃO!

    return EXIT_SUCCESS;
}