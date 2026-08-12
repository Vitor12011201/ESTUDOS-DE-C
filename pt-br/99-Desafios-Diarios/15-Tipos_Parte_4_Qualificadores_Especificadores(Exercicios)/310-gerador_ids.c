/* Objetivo: Usar static em escopo de bloco para criar um gerador sequencial de IDs sem usar variáveis globais públicas.
Instruções:
1. Crie uma função int gera_proximo_id(void).
2. Declare uma variável estática para controlar a sequência: static int ultimo_id = 1000;.
3. Toda vez que a função for chamada, ela deve incrementar ultimo_id e retornar o novo valor.
4. No main, simule a criação de 3 novos usuários chamando a função e imprimindo os IDs retornados.*/

#include <stdio.h>

int gera_proximo_id(void)
{
    static int ultimo_id = 1000;

    ultimo_id++;

    return ultimo_id;
}

int main(void)
{
    printf("Usuario 1 - ID: %d\n", gera_proximo_id());
    printf("Usuario 2 - ID: %d\n", gera_proximo_id());
    printf("Usuario 3 - ID: %d\n", gera_proximo_id());

    return 0;
}