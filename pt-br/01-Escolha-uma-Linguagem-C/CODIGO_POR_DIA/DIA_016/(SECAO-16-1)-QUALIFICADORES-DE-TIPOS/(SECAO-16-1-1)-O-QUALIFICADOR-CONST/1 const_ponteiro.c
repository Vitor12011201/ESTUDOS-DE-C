#include <stdio.h>

/* OBJETIVO: Demonstrar as duas posições fundamentais do 'const' com um único asterisco.
   - const int *p  -> 'p' é um ponteiro para um 'int' constante (dado é read-only).
   - int *const p  -> 'p' é um ponteiro constante para um 'int' (endereço é read-only). */

int main() {
    int valor1 = 10;
    int valor2 = 20;

    // 1. Ponteiro para dado constante (const vem ANTES do *)
    // Lendo da direita pra esquerda: ptr1 é um ponteiro para int que é constante.
    const int *ptr_dado_const = &valor1;
    ptr_dado_const = &valor2; // VÁLIDO: O ponteiro pode mudar de endereço.
    // *ptr_dado_const = 30;  // ERRO DE COMPILAÇÃO! Não pode alterar o valor no destino.

    // 2. Ponteiro constante (const vem DEPOIS do *)
    // Lendo da direita pra esquerda: ptr2 é um ponteiro constante para um int.
    int *const ptr_endereco_const = &valor1;
    *ptr_endereco_const = 30;  // VÁLIDO: Pode alterar o valor no destino.
    // ptr_endereco_const = &valor2; // ERRO DE COMPILAÇÃO! Não pode mudar o endereço.

    printf("--- Teste de Posição do const ---\n");
    printf("Valor1 alterado via ptr_endereco_const: %d\n", valor1);
    printf("Valor apontado por ptr_dado_const:       %d\n", *ptr_dado_const);

    return 0;
}