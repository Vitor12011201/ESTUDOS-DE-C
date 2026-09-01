/* Objetivo: Praticar a geração manual de arquivos objeto (.o) usando a flag -c do GCC e unindo-os na etapa de linking.
Instruções:
1. Crie o arquivo calculadora.c com uma função simples:

C
int soma(int a, int b) {
    return a + b;
}

2. Crie o arquivo main.c chamando soma(10, 20) usando o protótipo int soma(int, int);.
3. Escreva nos comentários do arquivo 346-main.c a sequência exata de comandos do terminal para:
 - Compilar 346-calculadora.c para 346-calculadora.o
 - Compilar 346-main.c para 346-main.o
4. Fazer o linking de ambos para gerar o executável app*/

#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

