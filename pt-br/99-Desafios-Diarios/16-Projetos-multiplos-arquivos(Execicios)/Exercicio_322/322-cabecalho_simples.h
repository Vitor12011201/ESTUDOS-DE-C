/* Objetivo: Compreender o papel de um arquivo de cabeçalho (.h) para disponibilizar protótipos de funções e constantes para o seu código principal.
Instruções:
1. Crie o arquivo 334-cabecalho_simples.h contendo:
 - A definição de uma constante #define VERSAO_PROJETO 1.0
 - O protótipo de uma função: void exibe_boas_vindas(void);
2. Crie o arquivo 334-principal.c:
 - Inclua o seu cabeçalho usando aspas em vez de chevron: #include "334-cabecalho_simples.h"
 - Implemente a função exibe_boas_vindas e crie a função main exibindo a constante VERSAO_PROJETO. */

#define VERSAO_PROJETO 1.0

void exibe_boas_vindas(void);