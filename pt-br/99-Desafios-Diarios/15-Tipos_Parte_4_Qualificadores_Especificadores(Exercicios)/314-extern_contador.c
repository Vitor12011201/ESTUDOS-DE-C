/* Objetivo: Usar extern para "avisar" ao C sobre uma variável global que é definida depois da função no arquivo.
Instruções:
1. Crie uma função chamada void exibe_contador(void).
2. Dentro da função exibe_contador, use extern int contador_global; para declarar que a variável existe.
3. Imprima o valor da variável com printf("Contador: %d\n", contador_global);.
4. Crie a função main(void). Dentro dela, atribua 10 à variável contador_global e chame exibe_contador().
5. Abaixo e fora do main, faça a definição real da variável: int contador_global = 0;. */

#include <stdio.h>

void exibe_contador(void)
{
    extern int contador_global;

    printf("Contador: %d\n", contador_global);
}

int main(void)
{
    extern int contador_global;

    contador_global = 10;

    exibe_contador();

    return 0;
}

int contador_global = 0;