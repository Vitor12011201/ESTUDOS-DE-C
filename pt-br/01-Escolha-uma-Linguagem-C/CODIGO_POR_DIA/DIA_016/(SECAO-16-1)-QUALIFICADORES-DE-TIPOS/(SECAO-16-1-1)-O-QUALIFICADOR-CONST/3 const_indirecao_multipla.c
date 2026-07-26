#include <stdio.h>

/* OBJETIVO: Mapear o impacto do 'const' em ponteiros duplos (char **),
   simulando a proteção de tabelas de argumentos ou buffers de texto de redes. */

int main() {
    char arg1[] = "sunshine";
    char arg2[] = "moonlight";

    char *lista_str[] = {arg1, arg2};

    // --- CASO A: char **const p ---
    // 'p' é um PONTEIRO CONSTANTE para (ponteiro para char).
    // O endereço de 'p' é fixo, mas podemos modificar o ponteiro interno (*p).
    char **const p_const = lista_str;
    // p_const++;        // ERRO! 'p_const' é constante.
    (*p_const)++;        // VÁLIDO! Avança o ponteiro interno 'arg1' para "unshine".

    // Resetando para o próximo teste
    lista_str[0] = arg1;

    // --- CASO B: char *const *p ---
    // 'p' é um ponteiro para um (PONTEIRO CONSTANTE para char).
    // Podemos mover 'p', mas não podemos alterar o ponteiro interno (*p).
    char *const *p_interno_const = lista_str;
    p_interno_const++;   // VÁLIDO! Aponta agora para lista_str[1] ("moonlight").
    // (*p_interno_const)++; // ERRO! O ponteiro intermediário é constante.

    printf("--- Teste de Indireção Múltipla ---\n");
    printf("Ponteiro intermediário avançado via p_const: \"%s\"\n", *p_const);
    printf("Ponteiro duplo avançado via p_interno_const: \"%s\"\n", *p_interno_const);

    return 0;
}