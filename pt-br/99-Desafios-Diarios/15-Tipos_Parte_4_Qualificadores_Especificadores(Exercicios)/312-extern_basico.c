/* Objetivo: Compreender a diferença entre declarar a existência de uma variável com extern e definir a variável na memória.
Instruções:
1. No topo da função main, declare uma variável inteira que será definida apenas mais abaixo no arquivo:
 - extern int pontuacao_global;
2. Imprima o valor de pontuacao_global dentro do main.
3. Altere o valor de pontuacao_global para 100 dentro do main.
4. Fora e abaixo da função main (no escopo de arquivo), faça a definição real da variável:
 - int pontuacao_global = 50; */

#include <stdio.h>

int main(void)
{
 extern int pontuacao_global;

 printf("Pontuacao inicial: %d\n", pontuacao_global);

 pontuacao_global = 100;

 printf("Pontuacao alterada: %d\n", pontuacao_global);

 return 0;
}

int pontuacao_global = 50;