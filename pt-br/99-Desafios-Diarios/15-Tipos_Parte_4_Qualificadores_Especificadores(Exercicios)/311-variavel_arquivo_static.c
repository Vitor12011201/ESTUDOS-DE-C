/* Objetivo: Praticar a restrição de visibilidade (Internal Linkage) de uma variável no escopo de arquivo.
Instruções:
1. Fora de qualquer função (no escopo de arquivo), declare uma variável estática:
 - static int total_conexoes_privadas = 0;
2. Crie duas funções no mesmo arquivo:
 - void conecta_cliente(void) -> Incrementa total_conexoes_privadas.
 - void desconecta_cliente(void) -> Decrementa total_conexoes_privadas.
3. Crie uma função getter int le_total_conexoes(void) que apenas retorna o valor da variável estática.
4. No main, chame as funções de conectar e desconectar e exiba o total de conexões ativas. */

#include <stdio.h>

static int total_conexoes_privadas = 0;

void conecta_cliente(void)
{
 total_conexoes_privadas++;
}

void desconecta_cliente(void)
{
 total_conexoes_privadas--;
}

int le_total_conexoes(void)
{
 return total_conexoes_privadas;
}

int main(void)
{
 conecta_cliente();
 conecta_cliente();
 conecta_cliente();

 printf("Conexoes ativas: %d\n", le_total_conexoes());

 desconecta_cliente();

 printf("Conexoes ativas: %d\n", le_total_conexoes());

 return 0;
}