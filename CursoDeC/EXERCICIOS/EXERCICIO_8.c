#include <stdio.h>

// Criar um programa que: Lê 5 números - Guarda em um array - Usa função para descobrir o maior valor - Mostra o resultado no main

void ler_Numeros(int numeros[]) {
    for (int i = 0; i < 5; i++) {
        printf("(%d) Digite um numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
}
int maior_Numero(int numeros[]) {
    int maior = numeros[0];
    for (int i = 0; i < 5; i++) {
        if (maior < numeros[i]) {
            maior = numeros[i];
        }
    }
    return maior;
}
int main() {
    int numeros[5];
    ler_Numeros(numeros);
    int maior = maior_Numero(numeros);
        printf("O maior numeros é o %d \n" , maior);

}