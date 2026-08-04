#include <stdio.h>
#include <stdatomic.h> // Cabecalho obrigatorio para tipos atomicos no C11

/* OBJETIVO: Demonstrar as duas sintaxes de declaracao atomica em C11
   e o uso de funcoes de leitura e modificacao indivisivel. */

int main() {
    // Sintaxe 1: Usando o qualificador _Atomic diretamente
    _Atomic int contador_a = 0;

    // Sintaxe 2: Usando o alias conveniente de <stdatomic.h>
    atomic_int contador_b = ATOMIC_VAR_INIT(100);

    printf("--- Operacoes Atomicas Basicas (C11) ---\n");

    // Modificacoes atomicas garantidas pelo hardware
    atomic_fetch_add(&contador_a, 5);  // contador_a += 5 (indivisivel)
    atomic_fetch_sub(&contador_b, 10); // contador_b -= 10 (indivisivel)

    // Leitura atomica garantida (impede leituras parciais/corrompidas)
    int val_a = atomic_load(&contador_a);
    int val_b = atomic_load(&contador_b);

    printf("Valor final de contador_a: %d\n", val_a);
    printf("Valor final de contador_b: %d\n", val_b);

    return 0;
}