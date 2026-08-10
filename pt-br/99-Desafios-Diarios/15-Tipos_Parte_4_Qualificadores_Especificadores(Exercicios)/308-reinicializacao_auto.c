/* Objetivo: Observar que variáveis automáticas (auto) declaradas dentro do corpo de um loop são recriadas e reinicializadas a cada iteração, perdendo qualquer valor acumulado anteriormente.
Instruções:
1. Crie um loop for simples que rode 3 vezes (de i = 0 até i < 3).
2. Dentro do bloco {} do loop, declare uma variável local: int contador = 0;.
3. Incremente a variável: contador++;.
4. Imprima o valor de contador e da iteração i com printf("Iteracao %d: contador = %d\n", i, contador)*/

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        int contador = 0;

        contador++;

        printf("Iteracao %d: contador = %d\n", i, contador);
    }

    return 0;
}