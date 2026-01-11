#include <stdio.h>

//Criar um programa em C que:
//1️-Leia 6 números inteiros
//2️-Guarde tudo em um array
//3-️Use uma função para calcular a média dos números
//4️-Use outra função para contar quantos números são maiores que a média
//5-️Mostre no main:
//a média
//a quantidade de números acima da média

void ler_Numeros(float numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("(%d) Digite um numero: ", i + 1);
        scanf("%f" ,&numeros[i]);
    }
}
float media_Numeros(float numeros[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return soma / tamanho;
}

int numeros_Maiores_Media(float numeros[], int tamanho, float media) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] > media) {
            contador++;
        }
    }
    return contador;
}

int main() {
    float array[6];
    ler_Numeros(array, 6);
    float resultado_Media = media_Numeros(array, 6);
    int maior_Numero = numeros_Maiores_Media(array, 6, resultado_Media);
    printf("A media dos numeros digitados é: %f \n", resultado_Media);
    printf("Existem (%d) numeros(s) maiores que a media", maior_Numero);
}