#include <stdio.h>

// Criar uma função que diz se um número é par ou ímpar.

int ehPositivo (int n) {
    if (n >= 0) {
        return 1;
    } else {
        return 0;
    }

}
int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main () {
    int nu;
    printf("Digite um numero: \n");
    scanf("%d" , &nu);
    if (ehPar(nu)) {
        printf("Par \n");
    } else {
        printf("Impar \n");
    }
    printf("Seu numero eh %d \n", nu);

    if (ehPositivo(nu)) {
        printf ("Possitivo");
    } else {
        printf ("Negativo");
    }
}