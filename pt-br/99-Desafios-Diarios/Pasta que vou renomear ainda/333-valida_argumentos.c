/* Objetivo: Combinar argc, argv, conversão de tipos com atoi e códigos de retorno do sistema (EXIT_SUCCESS / EXIT_FAILURE).
Instruções:
1. Inclua <stdio.h> e <stdlib.h>.
2. a assinatura da função main para receber argc e argv.
3. O seu programa deve esperar obrigatoriamente 2 argumentos numéricos passados pela linha de comando (além do próprio nome do programa em argv[0], totalizando argc == 3).
4.  de Erro: Se o usuário não passar exatamente 2 argumentos (ex: digitar apenas ./app 10 ou ./app sem nada), imprima uma mensagem de uso correto no stderr (fprintf(stderr, "Uso: %s <num1> <num2>\n", argv[0]);) e encerre o programa imediatamente retornando EXIT_FAILURE.
5. Execução Sucesso: Caso receba os 2 argumentos, converta-os para inteiro usando atoi(argv[1]) e atoi(argv[2]), imprima a soma dos dois números no stdout e encerre o programa retornando EXIT_SUCCESS.
 - No comentário do código: Explique como você testaria os dois cenários de saída no seu terminal (um gerando erro e outro gerando sucesso) e como inspecionaria o código de retorno do sistema operacional após a execução.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /*
     * Teste de erro:
     * ./app 10
     * echo $?
     * O programa deve mostrar a mensagem de uso e retornar EXIT_FAILURE.
     *
     * Teste de sucesso:
     * ./app 10 20
     * echo $?
     * O programa deve imprimir 30 e retornar EXIT_SUCCESS.
     *
     * No Linux, o comando "echo $?" mostra o código de retorno
     * do último programa executado.
     */

    if (argc != 3)
    {
        fprintf(stderr, "Uso: %s <num1> <num2>\n", argv[0]);
        return EXIT_FAILURE;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    printf("Soma: %d\n", num1 + num2);

    return EXIT_SUCCESS;
}