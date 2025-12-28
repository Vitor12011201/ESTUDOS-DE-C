#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int golsFlamengo;
    int golsCorinthians;
    srand(time(NULL));

    char *jogadoresFlamengo[] = {
        "Varela",
        "Danilo",
        "Leo Pereira",
        "Alex Sandro",
        "Pulgar",
        "Jorguinho",
        "Carrascal",
        "Samuel Lino",
        "Arrascaeta",
        "Bruno Henrique"
    };

    char *jogadoresCorinthians[] = {
        "Gustavo Henquique",
        "Andre Ramalho",
        "Matheus Bidu",
        "Mateuzinho",
        "Raniele",
        "Breno Bidon",
        "Carillo",
        "Rodrigo Garro",
        "Memphis Depay",
        "Yuri Alberto"
    };

    golsFlamengo = rand() % 6;
    golsCorinthians = rand() % 6;
    printf("\n");
    printf("Vai Comecar a decisao da Super-Copa do Brasil \n");
    printf("\n");
    printf("Hoje vao se encontrar em campo o Flamengo Campeao do Brasileirao \n");
    printf("\n");
    printf("E temos o Corinthians Campeao da Copa do Brasil \n");
    printf("-----------------------------------------------------------");
    printf("\n");
    printf("Fim de Jogo o Placar final e de Corinthians %d x %d Flamengo \n", golsCorinthians, golsFlamengo);
    printf("\n");
    for (int i = 0; i < golsFlamengo; i++ ) {
        int autor = rand() % 10;
        printf("Com Gol(s) Flamengo: %s \n" , jogadoresFlamengo[autor]);
    }

    for (int i = 0; i < golsCorinthians; i++ ) {
        int autor = rand() % 10;
        printf("Com Gols(s) Corinthians: %s \n" ,jogadoresCorinthians[autor]);
    }
    if (golsFlamengo > golsCorinthians) {
        printf("\n");
        printf("O Flamengo e campeao da Super Copa do Brasil \n");
    } else if (golsFlamengo < golsCorinthians) {
        printf("\n");
        printf("O Corinthians e campeao da Super Copa do Brasil \n");
    } else {
        printf("A Partida empatou vamos para os Penaltis \n");
        printf("\n");

        int golsPenCorinthians = 0;
        int golsPenFlamengo = 0;

        printf("A Disputa de penaltis vai comecar \n");

        int ordemFlamengo[10];
        int ordemCorinthians[10];

        for (int i = 0; i < 10; i++) {
            ordemFlamengo[i] = i;
            ordemCorinthians[i] = i;
        }

        for (int i = 9; i > 0; i--) {
            int j = rand() % (i + 1);

            int temp = ordemFlamengo[i];
            ordemFlamengo[i] = ordemFlamengo[j];
            ordemFlamengo[j] = temp;

            temp = ordemCorinthians[i];
            ordemCorinthians[i] = ordemCorinthians[j];
            ordemCorinthians[j] = temp;
        }


        for (int i = 0; i <= 4; i++) {

            int batedorFlamengo = ordemFlamengo[i];
            int batedorCorinthians = ordemCorinthians[i];

            int batidaFlamengo = rand() % 2;
            int batidaCorinthians = rand() % 2;

            if (batidaFlamengo == 1) {
                golsPenFlamengo++;
                printf("\n");
                printf("BATIDA NUMERO %d PARA O FLAMENGO: BATEU COM O JOGADOR (%s) E FEZ O GOL DE PENALTI: PLACAR FLAMENGO %d x %d CORINTHIANS \n" , i + 1, jogadoresFlamengo[batedorFlamengo] ,golsPenFlamengo , golsPenCorinthians);
                printf("\n");
            } else {
                printf("\n");
                printf("BATIDA NUMERO %d PARA O FLAMENGO: BATEU COM O JOGADOR (%s) E PERDEU O GOL DE PENALTI: PLACAR FLAMENGO %d x %d CORINTHIANS \n" , i + 1 , jogadoresFlamengo[batedorFlamengo] , golsPenFlamengo , golsPenCorinthians);
                printf("\n");
            }
            if (batidaCorinthians == 1) {
                golsPenCorinthians++;
                printf("\n");
                printf("BATIDA NUMERO %d PARA O CORINTHIANS: BATEU COM O JOGADOR (%s) E FEZ O GOL DE PENALTI: PLACAR FLAMENGO %d x %d CORINTHIANS \n" , i + 1, jogadoresCorinthians[batedorCorinthians] , golsPenFlamengo , golsPenCorinthians);
                printf("\n");
            } else {
                printf("\n");
                printf("BATIDA NUMERO %d PARA O CORINTHIANS: BATEU COM O JOGADOR (%s) E PERDEU O GOL DE PENALTI: PLACAR FLAMENGO %d x %d CORINTHIANS \n" , i + 1, jogadoresCorinthians[batedorCorinthians] , golsPenFlamengo , golsPenCorinthians);
                printf("\n");
            }
        }
            printf("\n");
            printf("O Placar nos Penaltis ficou: Corinthians %d x %d Flamengo \n" , golsPenCorinthians , golsPenFlamengo);
            printf("\n");

            if (golsPenFlamengo > golsPenCorinthians) {
                printf("FLAMENGO CAMPEAO DA SUPER COPA DO BRASIL \n");
            } else if (golsPenFlamengo < golsPenCorinthians) {
                printf("CORINTHIANS CAMPEAO DA SUPER COPA DO BRASIL \n");
            } else {
                printf("JOGO EMPATADO, VAMOS PARA MORTE SUBITA");
                printf("\n");

                int indiceMorteSubita = 5;

                printf("\nINICIO DA MORTE SUBITA! \n");
                printf("\n");

                while (1) {
                    int batedorFlamengo = ordemFlamengo[indiceMorteSubita];
                    int batedorCorinthians= ordemCorinthians[indiceMorteSubita];

                    int batidaFlamengo = rand() % 2;
                    int batidaCorinthians = rand() % 2;

                    printf("\nFLAMENGO BATEU COM %s... \n", jogadoresFlamengo[batedorFlamengo]);
                    if (batidaFlamengo) {
                        printf("\n");
                        printf("GOL DO FLAMENGO \n");
                        printf("\n");
                    } else {
                        printf("\n");
                        printf("FLAMENGO PERDEU \n");
                        printf("\n");
                    }

                    printf("CORINTHIANS BATEU COM %s ... \n", jogadoresCorinthians[batedorCorinthians]);
                    if (batidaCorinthians) {
                        printf("\n");
                        printf("GOL DO CORINTHIANS \n");
                        printf("\n");
                    } else {
                        printf("\n");
                        printf("CORINTHIANS PERDEU \n");
                        printf("\n");
                    }

                    if (batidaFlamengo != batidaCorinthians) {
                        if (batidaFlamengo > batidaCorinthians) {
                            printf("\nFLAMENGO CAMPEAO MORTE SUBITA \n");
                        } else {
                            printf("\nCORINTHIANS CAMPEAO MORTE SUBITA \n");
                        }
                        break;
                    }

                    indiceMorteSubita--;

                    if (indiceMorteSubita >= 10) {
                        printf("ACABARAM OS JOGADORES! MORTE SUBITA ETERNA \n");
                        break;
                    }
                }
            }
    }
}