#include <stdio.h>

/* OBJETIVO: Demonstrar as variáveis de escopo local (auto e register)
   e a restrição fundamental de ponteiros sobre a classe 'register'. */

void demonstrar_auto_e_register(void) {
    // 'auto' é o comportamento padrão de variáveis locais.
    // Vive na Stack e é destruída ao sair da função.
    auto int contador_stack = 10;

    // 'register' solicita ao compilador que mantenha a variável no registrador da CPU.
    register int contador_cpu = 0;

    for (int i = 0; i < 1000; i++) {
        contador_cpu += i;
    }

    printf("--- auto vs register ---\n");
    printf("Valor em Stack (auto):       %d\n", contador_stack);
    printf("Acumulado em CPU (register): %d\n", contador_cpu);

    // REGRA DE OURO: Não é permitido obter o endereço de memória (&) de variáveis 'register',
    // pois registradores da CPU não possuem um endereço no barramento de memória RAM!
    // int *ptr = &contador_cpu; // ERRO DE COMPILAÇÃO!
}

int main(void) {
    demonstrar_auto_e_register();
    return 0;
}