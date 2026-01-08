#include <stdio.h>

// Peça 2 numeros ao usuario e retorne o maior dos dois

int maiorNumero(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int n1;
    int n2;

    printf("1- Digite um numero: ");
    scanf("%d", &n1);
    printf("2- Digite um numero: ");
    scanf("%d", &n2);
    printf("O maior numero é: %d" , maiorNumero(n1 , n2));
}