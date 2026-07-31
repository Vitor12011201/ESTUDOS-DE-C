#include <stdio.h>

/* OBJETIVO: Demonstrar o uso basico do 'restrict' em parâmetros de função
   e alertar sobre o Comportamento Indefinido (UB) se a regra for violada. */

void trocar_valores(int *restrict a, int *restrict b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    printf("--- Uso Correto do restrict ---\n");
    printf("Antes: x = %d, y = %d\n", x, y);

    // VÁLIDO: 'x' e 'y' moram em endereços de memória completamente diferentes
    trocar_valores(&x, &y);

    printf("Depois: x = %d, y = %d\n\n", x, y);

    // --- O PERIGO ---
    // VIOLAÇÃO DO CONTRATO: Passar o mesmo endereço para ambos os ponteiros 'restrict'
    // aciona Comportamento Indefinido (Undefined Behavior).

    // trocar_valores(&x, &x); // NUNCA FAÇA ISSO!

    return 0;
}