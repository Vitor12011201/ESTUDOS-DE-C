/* Objetivo: Explorar a assinatura completa da função main(int argc, char *argv[]) para capturar parâmetros passados pelo terminal.
Instruções:
1. Declare a função main com parâmetros: int main(int argc, char *argv[]).
2. Imprima a quantidade total de argumentos passados (argc).
3. Use um loop para listar todos os argumentos contidos no vetor argv.
4. Execute o programa no terminal passando parâmetros extras (ex: ./app argumento1 teste 123).*/

/*
Objetivo: Explorar a assinatura completa da função main(int argc, char *argv[])
para capturar parâmetros passados pelo terminal.

argc = quantidade total de argumentos recebidos.
argv = vetor de strings contendo cada argumento.

Importante:
argv[0] normalmente contém o nome/caminho usado para executar o programa.
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Quantidade de argumentos: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}