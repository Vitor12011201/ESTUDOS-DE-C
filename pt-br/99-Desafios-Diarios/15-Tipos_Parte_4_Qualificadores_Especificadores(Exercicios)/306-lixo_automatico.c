/* Objetivo: Observar na prática o perigo de ler uma variável auto sem inicialização explícita.
Instruções:
1. Declare uma variável inteira dentro do main sem atribuir valor: int valor_indeterminado; (isso é o mesmo que auto int valor_indeterminado;).
2. Imprima o valor contido nela usando printf("%d\n", valor_indeterminado);.
3 Em seguida, corrija a boa prática inicializando a variável: int valor_seguro = 0; e imprima-a.
4. Reflexão no comentário: Explique por que imprimir uma variável não inicializada gera comportamento indefinido e por que ela pode conter valores totalmente imprevisíveis.*/

#include <stdio.h>

int main(void)
{
    int valor_indeterminado;

    printf("Valor nao inicializado: %d\n", valor_indeterminado);

    int valor_seguro = 0;

    printf("Valor inicializado: %d\n", valor_seguro);

    /*
     * Uma variável local automática que não é inicializada possui um
     * valor indeterminado.
     *
     * Portanto, não podemos assumir que ela começa com 0 ou com qualquer
     * outro valor específico.
     *
     * Ao tentar ler valor_indeterminado antes de atribuir um valor válido
     * a ela, o programa entra em comportamento indefinido.
     *
     * Isso significa que a linguagem C não garante o que acontecerá:
     * ela pode aparentemente imprimir 0, imprimir um número aleatório,
     * apresentar resultados diferentes entre execuções ou até sofrer
     * outros comportamentos inesperados.
     *
     * Isso acontece porque a região de memória utilizada pela variável
     * pode conter dados que já estavam naquele espaço anteriormente.
     *
     * Por isso, uma boa prática é inicializar a variável antes de utilizá-la,
     * como em:
     *
     *     int valor_seguro = 0;
     */

    return 0;
}