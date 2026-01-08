#include <stdio.h>
#include <stdlib.h>

// 3 - Faça um algoritmo que leia dois valores inteiros A e B, se os valores de A e B forem iguais, deverá somar os dois valores,
//caso contrário devera multiplicar A por B. Ao final de qualquer um dos cálculos deve-se atribuir o resultado a uma variável C e
//imprimir seu valor na tela.

int main () {
    int a;
    int b;
    int c;
    printf ("Digite o numero A: \n");
    scanf("%d" , &a);
    printf ("Digite o numero B: \n");
    scanf("%d", &b);
    if (a == b) {
        printf("Os numeros A e B são iguais \n");
        c = a + b;

    } else {
        printf("Os numeros A e B são diferentes \n");
        c = a * b;
    }
    printf ("Resuldado final: %d \n" , c);
}