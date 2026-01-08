#include <stdio.h>

//Criar um programa em C que:
//1️-Leia 6 números inteiros
//2️-Guarde tudo em um array
//3-️Use uma função para calcular a média dos números
//4️-Use outra função para contar quantos números são maiores que a média
//5-️Mostre no main:
//a média
//a quantidade de números acima da média

void ler_Numeros(int numeros[]) {
    for (int i = 0; i < 6; i++) {
        printf("(%d) Digite um numero: \n", i + 1);
        scanf("%d" , &numeros[i]);
    }
}

int media_Numeros(float numeros[]) {
    for (int i = 0; i < 6; i++) {
        return numeros[i] / i;
    }
}
int main() {
    int numeros[6];
    ler_Numeros(numeros);
    printf("%d", media_Numeros(numeros));
}