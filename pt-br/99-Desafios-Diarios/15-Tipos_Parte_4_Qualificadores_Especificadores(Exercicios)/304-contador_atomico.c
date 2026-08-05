/* Objetivo: Conhecer a sintaxe básica do qualificador _Atomic e da biblioteca <stdatomic.h>.
Instruções:
1. Inclua a biblioteca <stdatomic.h>.
2. Declare um contador atômico usando a sintaxe clássica do qualificador: _Atomic int contador = 0; (ou a macro facilitadora atomic_int contador = 0;).
3. Crie uma função simples que faz um incremento básico contador++;.
4. No main, imprima o valor final.
- Reflexão no comentário: Explique por que, apesar de no código C a escrita contador++ ser idêntica a de uma variável comum, o compilador gera um código assembly totalmente diferente com instruções de trava (lock).*/

#include <stdio.h>
#include <stdatomic.h>

_Atomic int contador = 0;

void incrementar_contador(void)
{
    contador++;
}

int main(void)
{
    incrementar_contador();

    printf("Valor final do contador: %d\n", contador);

    /*
     * Embora a expressão contador++ tenha a mesma aparência usada com uma
     * variável int comum, o tipo de contador é atômico.
     *
     * Por isso, o compilador deve transformar o incremento em uma operação
     * atômica de leitura, modificação e escrita. Isso impede que outra thread
     * observe ou interfira em um estado intermediário da operação.
     *
     * Em processadores x86, o compilador pode gerar instruções com o prefixo
     * "lock", como lock add ou lock xadd. Em outras arquiteturas, ele pode
     * utilizar pares de instruções exclusivas, chamadas de runtime ou outros
     * mecanismos equivalentes.
     *
     * Portanto, a sintaxe em C é simples, mas o código de máquina gerado é
     * diferente porque precisa garantir atomicidade e sincronização entre
     * múltiplas threads.
     */

    return 0;
}