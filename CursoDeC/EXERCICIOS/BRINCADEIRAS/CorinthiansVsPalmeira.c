#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chutesPenalti;
    int golsCorinthians;
    int golsPalmeiras;
    printf("COMECA O JOGO: \n");
    printf("O Corinthians fez: ");
    scanf("%d", &golsCorinthians);
    printf("O Palmeira fez: ");
    scanf("%d" , &golsPalmeiras);

    if (golsCorinthians > golsPalmeiras) {
        printf("CORINTHIANS ESTA CLASSIFICADO PARA A PROXIMA FASE DA COPA DO BRASIL \n");
    } else if (golsPalmeiras > golsCorinthians) {
        printf("PALMEIRAS ESTA CLASSIFICADO PARA A PROXIMA FASE DA COPA DO BRASIL \n");
    } else {
        printf("O  JOGO DEU EMPATE, VAMOS PARA OS PENALTIS \n");
        srand(time(NULL));
        while (chutesPenalti < 5) {
            int PenaltisCorinthians = 0;
            int PenaltisPalmeiras = 0;
            int golsCorinthians = rand() % 2;
            int golsPalmeiras = rand() % 2;
            chutesPenalti ++;
            printf("O Corinthians vai bater o penalti e: ");
            if (golsCorinthians == 1) {
                printf("Gol do Corinthians \n");
                PenaltisCorinthians ++;
            }else {
                printf("O Corinthians perdeu o Penalti \n");
            }
            printf("O Palmeiras vai bater o Penalti e: ");
            if (golsPalmeiras == 1) {
                printf("Gol do Palmeiras \n");
            } else {
                printf("O Palmeiras perdeu o penalti \n");
            }
        }
    }
    }