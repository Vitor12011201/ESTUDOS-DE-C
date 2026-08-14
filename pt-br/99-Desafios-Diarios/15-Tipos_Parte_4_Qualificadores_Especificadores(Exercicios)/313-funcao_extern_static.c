/* Objetivo: Praticar a diferença de visibilidade em funções públicas (extern implícito) e funções privadas do módulo (static).
Instruções:
1. Crie o protótipo explícito de uma função utilitária pública usando extern:
 - extern void funcao_publica(void);
2. Crie uma função privada marcando-a como static:
 - static void funcao_privada(void) { printf("Acesso interno autorizado.\n"); }
3. Implemente a funcao_publica(void) chamando a funcao_privada() dentro dela.
4. No main, chame a funcao_publica(). */

#include <stdio.h>

extern void funcao_publica(void);

static void funcao_privada(void)

{

 printf("Acesso interno autorizado.\n");

}

void funcao_publica(void)

{

 funcao_privada();

}

int main(void)

{

 funcao_publica();

 return 0;

}