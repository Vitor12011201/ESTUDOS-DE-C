/* Objetivo: Entender por que a biblioteca padrão usa restrict na função memcpy, enquanto a memmove não usa.
Instruções:
1. A assinatura do memcpy é: void *memcpy(void *restrict dest, const void *restrict src, size_t n);.
2. Isso significa que as áreas de memória de origem (src) e destino (dest) nunca podem se sobrepor.
3. Crie um array de inteiros: int arr[] = {1, 2, 3, 4, 5};.
4. Crie uma função void copia_vetor(int *restrict dest, const int *restrict src, int n) com um loop for simples copiando dest[i] = src[i].
5. No main, chame a função copiando de um vetor a para um vetor b completamente separado (uso correto do restrict).*/

#include <stdio.h>

int arr[] = {1 , 2 , 3 , 4 , 5};

void copia_vetor(int *restrict dest, const int *restrict src, int n)
{
    for (int i = 0; i < n; i++)
    {
        dest[i] = src[i];
        printf("%d\n",dest[i]);
    }
}

int main()
{

    int b[5];

    copia_vetor(b, arr , 5);

    return 0;

}