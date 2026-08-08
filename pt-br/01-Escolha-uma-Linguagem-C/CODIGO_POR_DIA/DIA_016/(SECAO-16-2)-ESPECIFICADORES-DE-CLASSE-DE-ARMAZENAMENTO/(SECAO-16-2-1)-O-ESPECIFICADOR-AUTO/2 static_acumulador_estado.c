#include <stdio.h>

/* OBJETIVO: Comparar o comportamento de reinicializacao de uma variavel 'auto'
   com a preservacao de estado de uma variavel 'static'. */

void processar_frame(void) {
    auto int contador_auto = 0;       // Reinicializada a CADA chamada da funcao
    static int contador_static = 0;   // Inicializada APENAS UMA VEZ no inicio do programa

    contador_auto++;
    contador_static++;

    printf("Frame processado -> auto: %d | static (total acumulado): %d\n",
           contador_auto, contador_static);
}

int main(void) {
    printf("--- Simulacao de Processamento de Frames ---\n");
    processar_frame(); // auto: 1, static: 1
    processar_frame(); // auto: 1, static: 2
    processar_frame(); // auto: 1, static: 3

    return 0;
}