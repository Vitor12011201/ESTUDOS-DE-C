/* Objetivo: Implementar uma operação de soma de vetores no estilo de processamento de alto desempenho (HPC) garantindo ausência de aliasing.
Instruções:
1. Crie uma função void soma_vetores(const float *restrict a, const float *restrict b, float *restrict resultado, int n).
2. Dentro da função, faça um loop somando elemento por elemento: resultado[i] = a[i] + b[i];.
3. No main, declare 3 arrays distintos de tamanho 5: v1, v2 e res.
4. Preencha v1 e v2, execute a função e imprima res.*/

#include <stdio.h>

void soma_vetores(const float *restrict a, const float *restrict b, float *restrict resultado, int n)
{

    for (int i = 0; i < n; i++)
    {
        resultado[i] = a[i] + b[i];
        printf("%.2f\n", resultado[i]);
    }

}

int main()
{
    float v1[5] = {1.0f , 2.0f , 3.0f , 4.0f , 5.0f};
    float v2[5] = {10.0f , 20.0f , 30.0f , 40.0f, 50.0f};
    float resultado[5];

    soma_vetores(v1, v2, resultado, 5);

    return 0;

}