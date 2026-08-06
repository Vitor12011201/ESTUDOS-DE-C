/* Objetivo: Praticar a declaração de tipos atômicos usando a <stdatomic.h> e verificar como realizar leituras e escritas diretas de forma segura.
Instruções:
1. Inclua as bibliotecas <stdio.h> e <stdatomic.h>.
2. No main, declare um placar usando a macro conveniente: atomic_int pontuacao = ATOMIC_VAR_INIT(0); (ou simplesmente atomic_int pontuacao = 0;).
3. Simule um ganho de pontos incrementando o placar em 100 usando o operador +=: pontuacao += 100;.
4. Crie uma variável local comum int copia_pontos = atomic_load(&pontuacao); para ler o valor atômico com segurança e imprima esse valor na tela com printf.
5. No comentário do código: Explique de forma simples por que usar atomic_int em vez de um int comum evita problemas quando duas partes do programa tentam atualizar os pontos ao mesmo tempo.*/

#include <stdio.h>
#include <stdatomic.h>

int main(void)
{
    atomic_int pontuacao = ATOMIC_VAR_INIT(0);
    /* Também poderia ser escrito como:
       atomic_int pontuacao = 0;
    */

    pontuacao += 100;

    int copia_pontos = atomic_load(&pontuacao);

    printf("Pontuação: %d\n", copia_pontos);

    /*
     * Um atomic_int realiza leituras e alterações de maneira atômica,
     * ou seja, a operação acontece sem que outra parte do programa
     * consiga interrompê-la pela metade.
     *
     * Se duas threads tentarem atualizar um int comum ao mesmo tempo,
     * uma alteração pode sobrescrever a outra, causando um resultado
     * incorreto. Com atomic_int, o acesso compartilhado ao placar é
     * feito de maneira segura, evitando essa condição de corrida.
     */

    return 0;
}