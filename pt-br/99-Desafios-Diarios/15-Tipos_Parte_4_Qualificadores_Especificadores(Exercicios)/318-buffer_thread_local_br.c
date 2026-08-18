/* Objetivo: Compreender a utilidade do _Thread_local para criar buffers locais de manipulação de dados em escopo global/estático.
Instruções:
1. Fora de qualquer função (escopo de arquivo), declare um buffer de mensagens exclusivo por thread:
 - _Thread_local char buffer_erro[64];
2. Crie duas funções simuladas:
 - void simula_erro_conexao(void) -> Escreve no buffer_erro a mensagem "Erro de Conexao".
 - void simula_erro_disco(void) -> Escreve no buffer_erro a mensagem "Erro de Disco".
3. Crie uma função para imprimir o conteúdo atual de buffer_erro.
4. No main, execute as chamadas sequencialmente e exiba o resultado. */

#include <stdio.h>
#include <string.h>

/*
 * Buffer global com armazenamento local por thread.
 * Cada thread teria sua própria cópia de buffer_erro.
 */
_Thread_local char buffer_erro[64];

void simula_erro_conexao(void) {
 strcpy(buffer_erro, "Erro de Conexao");
}

void simula_erro_disco(void) {
 strcpy(buffer_erro, "Erro de Disco");
}

void imprime_erro(void) {
 printf("Buffer atual: %s\n", buffer_erro);
}

int main(void) {
 simula_erro_conexao();
 imprime_erro();

 simula_erro_disco();
 imprime_erro();

 return 0;
}