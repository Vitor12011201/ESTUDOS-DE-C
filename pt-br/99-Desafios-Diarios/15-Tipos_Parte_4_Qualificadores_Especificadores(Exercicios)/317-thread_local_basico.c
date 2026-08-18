/* Objetivo: Conhecer a sintaxe do _Thread_local em escopo de bloco e entender por que ele exige a combinação com static.
Instruções:
1. Inclua as bibliotecas <stdio.h> e <threads.h> (ou apenas use _Thread_local diretamente caso o compilador não tenha <threads.h>).
2. Crie uma função chamada void registra_sessao(int id_thread).
3.  da função, declare uma variável de Thread-Local Storage:
 - static _Thread_local int id_sessao = 0; (ou static thread_local int id_sessao = 0;).
4. Atribua o valor id_thread recebido à variável id_sessao e imprima-o.
5. No main, chame a função duas vezes simulando a execução sequencial.*/

#include <stdio.h>
#include <threads.h>

void registra_sessao(int id_thread) {
 static _Thread_local int id_sessao = 0;

 id_sessao = id_thread;

 printf("ID da sessao: %d\n", id_sessao);
}

int main(void) {
 registra_sessao(1);
 registra_sessao(2);

 return 0;
}