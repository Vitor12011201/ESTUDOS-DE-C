#include <stdio.h>
#include <stdlib.h>

// 4 - Faça um algoritmo que receba um número inteiro e imprima na tela o seu antecessor e o seu sucessor.

int main () {

    int numero;

    printf("Digite um numero: ");
    scanf("%d" , &numero);
    printf("O antecessor do numero é: %d --- O sucessor do numero é: %d \n" , numero - 1 , numero + 1);
}