/* Objetivo: Compreender o papel de um arquivo de cabeçalho (.h) para disponibilizar protótipos de funções e constantes para o seu código principal.
Instruções:
1. Crie o arquivo 334-cabecalho_simples.h contendo:
 - A definição de uma constante #define VERSAO_PROJETO 1.0
 - O protótipo de uma função: void exibe_boas_vindas(void);
2. Crie o arquivo 334-principal.c:
 - Inclua o seu cabeçalho usando aspas em vez de chevron: #include "334-cabecalho_simples.h"
 - Implemente a função exibe_boas_vindas e crie a função main exibindo a constante VERSAO_PROJETO. */

#include <stdio.h>
#include "322-cabecalho_simples.h"

void exibe_boas_vindas(void)
{
 printf("Bem-vindo ao projeto!\n");
}

int main(void)
{
 exibe_boas_vindas();

 printf("Versao do projeto: %.1f\n", VERSAO_PROJETO);

 return 0;
}