/* Objetivo: Observar por que declarar um array como register quebra o mecanismo padrão de decaimento para ponteiros no C.
Instruções:
1. Declare um vetor de inteiros marcado como registrador: register int numeros[3] = {10, 20, 30};.
2. Lembre-se de que, em C, acessar um elemento como numeros[1] ou passar o vetor para um ponteiro faz com que o nome do array "decaia" para o endereço de memória do seu primeiro elemento (&numeros[0]).
3. Tente atribuir o array a um ponteiro: int *ptr = numeros; ou tente desreferenciar com aritmética de ponteiros *(numeros + 1). */

#include <stdio.h>

int main(void) {
    register int numeros[3] = {10, 20, 30};

    /*
     * As linhas abaixo são problemáticas porque exigem que o array
     * "decaia" para um ponteiro para seu primeiro elemento.
     */

    // int *ptr = numeros;
    // printf("%d\n", *(numeros + 1));
    // printf("%d\n", numeros[1]);

    /*
     * Em C, normalmente:
     *
     * numeros
     *
     * em uma expressão é convertido aproximadamente para:
     *
     * &numeros[0]
     *
     * Assim:
     *
     * int *ptr = numeros;
     *
     * precisa obter um ponteiro para o primeiro elemento.
     *
     * O mesmo acontece com:
     *
     * *(numeros + 1)
     *
     * E até numeros[1], pois:
     *
     * numeros[1]
     *
     * é definido em termos de:
     *
     * *(numeros + 1)
     *
     * Como o array foi declarado com register, essa conversão
     * para ponteiro não é válida de forma segura no C clássico.
     *
     * Por isso, arrays declarados como register são extremamente
     * limitados e praticamente inúteis na programação moderna.
     */

    return 0;
}