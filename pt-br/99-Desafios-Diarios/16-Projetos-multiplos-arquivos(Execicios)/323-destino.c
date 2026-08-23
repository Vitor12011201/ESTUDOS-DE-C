/* Objetivo: Observar o erro de declaração implícita de função ao chamar uma função em outro arquivo .c e corrigi-lo com um protótipo local.
Instruções:
1. Crie o arquivo 337-origem.c com a função:

C
int multiplica(int a, int b) {
    return a * b;
}

2. Crie o arquivo 337-destino.c com o main chamando multiplica(4, 5) sem nenhum protótipo ou #include.
3. Tente compilar ambos juntos no terminal (gcc -o app 337-origem.c 337-destino.c) para ver o aviso/erro do compilador.
4. Em seguida, adicione o protótipo int multiplica(int, int); no topo do 337-destino.c e compile novamente sem erros. */

#include <stdio.h>

/* Protótipo da função implementada em 323-origem.c */
int multiplica(int, int);

int main(void) {
    int resultado = multiplica(4, 5);

    printf("Resultado: %d\n", resultado);

    return 0;
}