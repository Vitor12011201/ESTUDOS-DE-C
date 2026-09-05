/* Objetivo: Compreender como o valor retornado pela função main (ou via exit()) comunica ao sistema operacional se o programa rodou com sucesso ou com falha.
Instruções:
1. Inclua a biblioteca <stdlib.h>.
2. No main, crie uma lógica simples: se uma constante MODO_ERRO for 0, retorne EXIT_SUCCESS (ou 0). Caso contrário, retorne EXIT_FAILURE (geralmente 1).
3. Teste alterar o valor da constante.
4. Reflexão no comentário: Explique como verificar o código de retorno da última execução no terminal da sua shell (por exemplo, usando echo $? no Linux/macOS ou echo %ERRORLEVEL% no Windows).*/

/*
Objetivo: Compreender como o valor retornado pela função main
(ou via exit()) comunica ao sistema operacional se o programa
rodou com sucesso ou com falha.

Para verificar o código de retorno da última execução:

Linux/macOS:
echo $?

Windows CMD:
echo %ERRORLEVEL%

Windows PowerShell:
echo $LASTEXITCODE

EXIT_SUCCESS representa uma execução bem-sucedida.
EXIT_FAILURE representa uma execução com falha.
*/

#include <stdlib.h>

#define MODO_ERRO 0

int main(void)
{
    if (MODO_ERRO == 0)
    {
        return EXIT_SUCCESS;
    }
    else
    {
        return EXIT_FAILURE;
    }
}