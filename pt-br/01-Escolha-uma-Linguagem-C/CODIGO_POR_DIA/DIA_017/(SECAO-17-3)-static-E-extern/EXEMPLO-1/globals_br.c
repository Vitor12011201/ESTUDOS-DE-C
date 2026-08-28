#include "globals_br.h"

// Definição REAL e alocação da variável global (Linkage Externa)
int contador_global = 100;

// Variável estática de escopo de arquivo (Linkage Interna): INACESSÍVEL fora deste .c!
static int segredo_modulo = 42;

void incrementar_contador(void) {
    contador_global += segredo_modulo;
}