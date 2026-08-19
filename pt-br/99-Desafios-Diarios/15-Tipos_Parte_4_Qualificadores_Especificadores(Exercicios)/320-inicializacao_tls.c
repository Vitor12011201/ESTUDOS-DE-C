/* Objetivo: Praticar as restrições impostas pelo compilador para a inicialização de variáveis com tempo de vida de thread.
Instruções:
1. Lembre-se de que variáveis globais ou estáticas marcadas com _Thread_local só podem ser inicializadas com expressões constantes (conhecidas em tempo de compilação).
2. No escopo de arquivo, tente inicializar uma variável TLS usando o retorno de uma função ou uma variável comum:
 - C
 - int valor_dinamico = 50;
 - // _Thread_local int limite = valor_dinamico; // Gera erro!
3. Corrija o código inicializando a variável TLS apenas com uma constante válida:
 - _Thread_local int limite = 100;
4. No main, imprima o valor de limite. */

#include <stdio.h>

int valor_dinamico = 50;

/*
 * ERRO:
 *
 * _Thread_local int limite = valor_dinamico;
 *
 * Uma variável com duração de armazenamento de thread declarada
 * no escopo de arquivo precisa ser inicializada com uma expressão
 * constante.
 *
 * Mesmo valor_dinamico tendo sido inicializado com 50, ele continua
 * sendo uma variável, e não uma constante conhecida como expressão
 * constante pela linguagem C.
 */

/* Inicialização válida */
_Thread_local int limite = 100;

int main(void) {
 printf("limite = %d\n", limite);

 return 0;
}