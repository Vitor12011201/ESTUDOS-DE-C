/* Objetivo: Praticar o uso de um int *const onde a variável apontada pode mudar de valor, mas o ponteiro fica "travado" naquele endereço para sempre.
Instruções:
1. Declare int saldo_banco = 1000; e int outro_saldo = 5000;.
2. Crie um ponteiro constante para o saldo: int *const ptr_conta = &saldo_banco;.
3. Altere o valor do saldo através do ponteiro: *ptr_conta = 1200; (Verifique se funciona!).
4. Tente apontar para outra conta: ptr_conta = &outro_saldo; e comente o erro gerado pelo compilador. */

#include <stdio.h>

int main(void)
{
    int saldo_banco = 1000;
    int outro_saldo = 5000;

    // Ponteiro constante para um int mutável
    int *const ptr_conta = &saldo_banco;

    printf("Saldo inicial: R$ %d\n", *ptr_conta);

    // Permitido: altera o valor armazenado no endereço
    *ptr_conta = 1200;

    printf("Saldo atualizado: R$ %d\n", saldo_banco);

    // Não permitido: tenta mudar o endereço guardado pelo ponteiro
    // ptr_conta = &outro_saldo;

    return 0;
}