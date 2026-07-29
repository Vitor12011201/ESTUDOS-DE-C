/* Objetivo: Usar um ponteiro mutável que aponta para dados constantes para navegar por um array sem risco de alterar seus valores.
Instruções:
1. Declare um array int notas[] = {85, 90, 78, 92};.
2. Declare um ponteiro const int *ptr = notas;.
3. Use um loop para percorrer o array incrementando o ponteiro (ptr++) e imprimindo cada elemento com *ptr.
4. Tente fazer *ptr = 100; dentro do loop e observe a bronca do compilador.*/

#include <stdio.h>

int main(void)
{
    int notas[] = {85, 90, 78, 92};

    const int *ptr = notas;

    int quantidade = sizeof(notas) / sizeof(notas[0]);

    for (int i = 0; i < quantidade; i++)
    {
        printf("Nota: %d\n", *ptr);


        ptr++;
    }

    return 0;
}