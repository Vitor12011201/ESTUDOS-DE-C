/* Instruções:
1. Declare no escopo de arquivo duas variáveis:
 - int contador_global = 0; (compartilhada por todo o programa)
 - _Thread_local int contador_local = 0; (cópia única por thread)
2. Crie uma função void incrementa_ambos(int valor) que soma valor nas duas variáveis.
3. No main, chame a função duas vezes com valores diferentes e imprima o valor das duas variáveis após cada chamada.*/

#include <stdio.h>

/* Variavel global compartilhada por todo o programa */
int contador_global = 0;

/* Cada thread possui sua propria copia */
_Thread_local int contador_local = 0;

void incrementa_ambos(int valor) {
 contador_global += valor;
 contador_local += valor;
}

int main(void) {
 incrementa_ambos(5);

 printf("Apos somar 5:\n");
 printf("contador_global = %d\n", contador_global);
 printf("contador_local  = %d\n\n", contador_local);

 incrementa_ambos(10);

 printf("Apos somar 10:\n");
 printf("contador_global = %d\n", contador_global);
 printf("contador_local  = %d\n", contador_local);

 return 0;
}