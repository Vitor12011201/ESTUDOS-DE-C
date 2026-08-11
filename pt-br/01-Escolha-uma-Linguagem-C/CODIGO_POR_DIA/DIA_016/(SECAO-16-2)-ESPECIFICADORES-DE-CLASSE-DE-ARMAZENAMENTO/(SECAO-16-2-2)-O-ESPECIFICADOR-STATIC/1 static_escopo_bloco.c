#include <stdio.h>

/* OBJETIVO: Demonstrar a persistência de valor e a inicialização padrão (zero)
   de variáveis 'static' declaradas dentro de funções. */

void registrar_acesso(void) {
    // Inicializado uma única vez ao carregar o programa.
    // 'contador_padrao' é implicitamente 0.
    static int contador_padrao;
    static int contador_com_inicio = 100;

    contador_padrao++;
    contador_com_inicio += 5;

    printf("Acesso #%d | Contador offset: %d\n", contador_padrao, contador_com_inicio);
}

int main(void) {
    printf("--- Teste de static em Escopo de Bloco ---\n");
    registrar_acesso(); // Acesso #1 | Offset: 105
    registrar_acesso(); // Acesso #2 | Offset: 110
    registrar_acesso(); // Acesso #3 | Offset: 115

    return 0;
}