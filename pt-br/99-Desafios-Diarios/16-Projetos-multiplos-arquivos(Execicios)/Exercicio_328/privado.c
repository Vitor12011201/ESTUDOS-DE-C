/* Objetivo: Observar na prática como a palavra-chave static impede que uma variável no escopo de arquivo seja acessada por outro arquivo via extern.
Instruções:
1. Crie o arquivo 343-privado.c contendo uma variável estática no escopo de arquivo:
 - static int chave_secreta = 1234;
2. Crie o arquivo 343-main.c tentando acessar essa variável via extern:

C
#include <stdio.h>
extern int chave_secreta;
int main(void) {
    printf("Chave: %d\n", chave_secreta);
    return 0;
}

3. Tente compilar ambos os arquivos juntos no terminal (gcc -o app 343-privado.c 343-main.c).
4. Observe o erro de ligação (linker error: undefined reference to 'chave_secreta').
5. Reflexão no comentário: Explique no arquivo 343-main.c por que o compilador aceita a sintaxe extern, mas o linker falha ao montar o executável final.*/

static int chave_secreta = 1234;