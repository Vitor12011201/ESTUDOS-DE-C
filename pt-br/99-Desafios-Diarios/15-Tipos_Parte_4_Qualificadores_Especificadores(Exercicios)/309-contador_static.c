/* Objetivo: Observar a persistência de valor de uma variável static local em comparação com uma variável comum (auto).
Instruções:
1. Crie uma função chamada void teste_contador(void).
2. Dentro dela, declare duas variáveis:
 - int comum = 0;
 - static int estatico = 0;
3. Incremente ambas em 1: comum++; estatico++;.
4. Imprima os valores das duas variáveis.
5. No main, chame a função teste_contador() 3 vezes seguidas.*/

#include <stdio.h>

void teste_contador(void)
{
 int comum = 0;
 static int estatico = 0;

 comum++;
 estatico++;

 printf("Comum: %d | Estatico: %d\n", comum, estatico);
}

int main(void)
{
 teste_contador();
 teste_contador();
 teste_contador();

 return 0;
}