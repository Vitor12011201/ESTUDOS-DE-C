#include <stdio.h>
#include <pthread.h>
#include <stdatomic.h>

/* OBJETIVO: Demonstrar o risco de Race Condition com 'static' local em threads
   e a solução usando atomicidade ou exclusão mútua (mutex). */

void gerador_id_inseguro(void) {
    // PERIGO: Várias threads alterando a mesma memória sem proteção
    static int id_compartilhado = 0;
    id_compartilhado++;
}

void gerador_id_seguro(void) {
    // SOLUÇÃO: Usar atomicidade para operações de incremento simples em 'static'
    static atomic_int id_atomico = 0;
    atomic_fetch_add(&id_atomico, 1);
}

int main(void) {
    printf("--- Alerta de Concorrência com static ---\n");
    printf("Variáveis 'static' de bloco residem na RAM global (.data/.bss).\n");
    printf("Se utilizadas em funções reentrantes ou multithread, precisam de _Atomic ou Mutex.\n");

    return 0;
}