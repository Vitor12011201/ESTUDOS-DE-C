#include <stdio.h>
#include <stdlib.h>

// 1 - Faça um algoritmo que leia os valores de A, B, C e em seguida imprima na tela a soma entre A e B é mostre se a soma é menor que C.

int main() {
    int a;
    int b;
    int c;
    printf("Digite o valor de A: \n");
    scanf("%d" ,&a);
    printf("Digite o valor de B: \n");
    scanf("%d", &b);
    printf("Digite o valor de C: \n");
    scanf("%d", &c);
    printf("A soma dos valores de A e B é: %d \n" , a + b);
    if ((a + b) < c) {
        printf("O numero C:(%d) é MAIOR que a soma de A: (%d) e B: (%d) = %d \n", c , a , b, a + b);
    } else if ((a + b) > c){
        printf("O numero C:(%d) é MENOR que a soma de A: (%d) e B: (%d) = %d \n",c , a , b , a + b);
    } else {
        printf("O Numero C:(%d) e a soma de A + B:(%d) são exatamente iguais \n", c , a + b);
    }
}