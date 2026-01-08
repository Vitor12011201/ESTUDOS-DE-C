#include <stdio.h>
#include <stdlib.h>

// 2 - Faça um algoritmo para receber um número qualquer e imprimir na tela se o número é par ou ímpar, positivo ou negativo.



int main () {

    int numero;

    printf("Digite um numero: ");
    scanf("%d" , &numero);

    if (numero % 2 == 0 && numero >= 0) {
        printf("O seu numero é PAR e POSITIVO");
    } else if (numero % 2 == 1 && numero >= 0) {
        printf("O seu numero é IMPAR e POSITIVO");
    } else if (numero % 2 == 0 && numero <= 0) {
        printf("O seu numero é PAR e NEGATIVO");
    } else {
        printf("O seu numero é IMPAR E NEGATIVO");
    }
}