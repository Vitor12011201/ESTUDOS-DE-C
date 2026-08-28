/* Demonstra como compartilhar uma variável global entre arquivos usando extern e como bloquear a visibilidade de uma variável com static.*/

#ifndef GLOBALS_H
#define GLOBALS_H

// Apenas declara que 'contador_global' existe em algum arquivo .c do projeto
extern int contador_global;

void incrementar_contador(void);

#endif // GLOBALS_H