#include <stdio.h>

//Crie um programa em C que:
//Peça para o usuário digitar 6 números inteiros
//Armazene esses números em um array
//Use uma função para encontrar o menor número do array
//Mostre o resultado no main

void ler_Numeros(int numeros[6]) {
    for (int i = 0; i < 6; i++) {
        printf("(%d) Digite um numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
}

int menor_Numero(int numeros[6]) {
    int menor_Numero = numeros[0];
    for (int i = 0; i < 6; i++) {
        if (numeros[i] > menor_Numero) {
            menor_Numero = numeros[i];
        }
    }
}

int main () {
    int array[6];
    ler_Numeros(array);
    int resultado = menor_Numero(array);
    printf("Resultado da menor numero eh: %d", resultado);
}
