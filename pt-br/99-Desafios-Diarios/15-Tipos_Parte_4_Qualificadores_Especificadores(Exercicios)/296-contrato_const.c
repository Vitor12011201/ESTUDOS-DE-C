/* Objetivo: Praticar o uso de const como um "contrato de segurança" em assinaturas de funções.
Instruções:
1. Escreva uma função void exibe_mensagem(const char *msg).
2. Tente fazer msg[0] = 'X'; dentro da função para ver o compilador barrar a alteração do texto.
3. Remova a linha incorreta e faça a função apenas imprimir a string recebida usando printf("%s\n", msg);.
4. No main, passe uma string literal para essa função e verifique o funcionamento.*/

#include <stdio.h>

void exibe_mensagem(const char *msg) {
    /*
    Esta linha causa erro de compilação porque msg aponta
    para caracteres que não podem ser alterados pela função:

    msg[0] = 'X';
    */

    printf("%s\n", msg);
}

int main(void) {
    exibe_mensagem("Olá, mundo!");

    return 0;
}