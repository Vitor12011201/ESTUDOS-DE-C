/* Objetivo: Compreender a sintaxe de um ponteiro volatile apontando para um endereço de memória de hardware.
Instruções:
1. Simule um registrador de hardware criando uma variável unsigned int timer_hardware = 0;.
2. Crie um ponteiro que aponta para ela dizendo ao C que esse valor pode mudar a qualquer instante por causa do hardware:
3. volatile unsigned int *reg_timer = &timer_hardware;
4. Crie uma função simples void exibe_tempo(volatile unsigned int *p_timer) que apenas lê o valor através de *p_timer e imprime no console.
5. No main, simule o hardware alterando timer_hardware = 1000; e chame a função. */

#include <stdio.h>

void exibe_tempo(volatile unsigned int *p_timer)
{
    unsigned int tempo_atual = *p_timer;

    printf("Tempo atual: %u\n", tempo_atual);
}

int main(void)
{

    unsigned int timer_hardware = 0;

    volatile unsigned int *reg_timer = &timer_hardware;

    timer_hardware = 1000;

    exibe_tempo(reg_timer);

    return 0;
}