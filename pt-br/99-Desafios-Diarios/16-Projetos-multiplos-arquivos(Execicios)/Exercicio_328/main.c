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


#include <stdio.h>

extern int chave_secreta;

int main(void)
{
    printf("Chave: %d\n", chave_secreta);

    return 0;
}

/*
Reflexão:

A palavra-chave extern informa ao compilador que a variável
chave_secreta existe em algum outro lugar do programa.

Por isso, ao compilar este arquivo, o compilador aceita a declaração:

    extern int chave_secreta;

Porém, no arquivo 343-privado.c, a variável foi declarada com static:

    static int chave_secreta = 1234;

Quando static é usado em uma variável no escopo de arquivo,
ela possui ligação interna (internal linkage).

Isso significa que chave_secreta só pode ser acessada dentro
do próprio arquivo 343-privado.c.

Assim, quando o linker tenta juntar os arquivos para criar o
executável, ele não encontra uma variável externa chamada
chave_secreta disponível para 343-main.c.

Por isso ocorre o erro "undefined reference to 'chave_secreta'".
*/