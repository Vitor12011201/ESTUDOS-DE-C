/*
Objetivo: validar numeros inteiros recebidos pela linha de comando sem usar atoi.

Teste de sucesso:
    ./app 12 -7

Teste de erro:
    ./app 12 abc

Use "echo $?" apos cada execucao no Linux para conferir o codigo de retorno.
*/

#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

static int converter_para_int(const char *texto, int *resultado)
{
    char *fim = NULL;
    long valor;

    errno = 0;
    valor = strtol(texto, &fim, 10);

    if (texto[0] == '\0' || *fim != '\0' || errno == ERANGE ||
        valor < INT_MIN || valor > INT_MAX) {
        return 0;
    }

    *resultado = (int)valor;
    return 1;
}

int main(int argc, char *argv[])
{
    int primeiro_numero;
    int segundo_numero;

    if (argc != 3) {
        fprintf(stderr, "Uso: %s <inteiro1> <inteiro2>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_int(argv[1], &primeiro_numero) ||
        !converter_para_int(argv[2], &segundo_numero)) {
        fprintf(stderr, "Erro: os dois argumentos devem ser inteiros validos.\n");
        return EXIT_FAILURE;
    }

    printf("Soma: %ld\n", (long)primeiro_numero + segundo_numero);

    return EXIT_SUCCESS;
}
