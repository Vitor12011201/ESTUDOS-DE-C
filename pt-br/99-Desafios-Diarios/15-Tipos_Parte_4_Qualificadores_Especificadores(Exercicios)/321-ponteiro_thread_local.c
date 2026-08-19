/* Objetivo: Compreender que, embora o ponteiro para uma variável _Thread_local seja um ponteiro comum em C, o endereço apontado é específico da thread corrente.
Instruções:
1. Declare uma variável global _Thread_local int id_trabalhador = 101;.
2. Crie uma função void exibe_endereco(void) que declara um ponteiro comum int *ptr = &id_trabalhador;.
3. Imprima o valor contido em *ptr e o endereço de memória para onde ele aponta ((void*)ptr).
4. No main, chame a função exibe_endereco(). */

#include <stdio.h>

/* Cada thread possui sua própria instância desta variável */
_Thread_local int id_trabalhador = 101;

void exibe_endereco(void) {
    /*
     * ptr é um ponteiro comum.
     * Porém, ele aponta para a instância de id_trabalhador
     * pertencente à thread que está executando esta função.
     */
    int *ptr = &id_trabalhador;

    printf("Valor: %d\n", *ptr);
    printf("Endereco: %p\n", (void *)ptr);
}

int main(void) {
    exibe_endereco();

    return 0;
}