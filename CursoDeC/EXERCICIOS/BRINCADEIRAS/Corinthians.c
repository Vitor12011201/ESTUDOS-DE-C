#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int corinthians = 0;
    int vasco = 0;
    printf("Quantos Gols o Corinthians marcou: ");
    scanf("%d" , &corinthians);
    printf("Quantos Gols o Vasco marcou: ");
    scanf("%d" , &vasco);

    if (corinthians > vasco) {
        printf("O corinthians foi CAMPEAO \n");
    } else if (vasco > corinthians) {
        printf("O Vasco ganhou \n");
    } else {
        printf("O jogo ficou no empate e foi para os penaltis \n");
        srand(time(NULL));
        int chute = 0;
        int golsCorinthians = 0;
        int golsVasco = 0;
        while (chute < 5) {
            chute = chute + 1;
            int penaltiCorinthians = rand() % 2;
            if (penaltiCorinthians == 1) {
                printf("Penalti Corinthians: GOL!\n");
                golsCorinthians = golsCorinthians + 1;
            }else {
                printf("Penalti Corinthians: ERRO\n");
            }
            int penaltiVasco = rand() % 2;
            if (penaltiVasco == 1) {
                printf("Penalti Vasco: GOL!\n");
                golsVasco = golsVasco + 1;
            }else {
                printf("Penalti Vasco: ERRO\n");
            }
        }
        if (golsCorinthians > golsVasco) {
            printf("O CORINTHIANS E CAMPEAO \n");
        } else if (golsVasco > golsCorinthians){
            printf("O VASCO E CAMPEAO \n");
        } else {
            printf("Vamos para as cobranças alternadas \n");
            while (1) {

                int penaltiCorinthians = rand() % 2;
                int penaltiVasco = rand() % 2;

                if (penaltiCorinthians == 1) {
                    printf("Penalti Corinthians: GOL!\n");
                    golsCorinthians = golsCorinthians + 1;
                } else {
                    printf("Penalti Corinthians: ERRO\n");
                }

                if (penaltiVasco == 1) {
                    printf("Penalti Vasco: GOL!\n");
                    golsVasco = golsVasco + 1;
                } else {
                    printf("Penalti Vasco; ERRO\n");
                }

                if (penaltiCorinthians == 1 && penaltiVasco == 0) {
                    printf("O CORINTHIANS E CAMPEAO NAS ALTERNADAS \n");
                    break;
                } else if (penaltiVasco == 1 && penaltiCorinthians == 0) {
                    printf("O VASCO E CAMPEAO NAS ALTERNADAS \n");
                }else {
                    printf("As cobranças vão continuar");
                }
            }
        }
    }
    getchar();
    getchar();
    return 0;
}