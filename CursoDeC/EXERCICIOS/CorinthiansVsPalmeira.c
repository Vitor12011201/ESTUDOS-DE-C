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
            int golsCorinthians;
            int golsPalmeira;
            chutesPenalti ++;
            if (golsCorinthians = srand() % 2)) {
                printf("Gol do Corinthians");
                golsCorinthians ++;
            }else{
                printf("O Corinthians perdeu o Penalti");
            }
        }
    }
    }