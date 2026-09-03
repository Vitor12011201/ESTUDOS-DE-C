#include "330-estatisticas.h"

double calcular_media(const int valores[], size_t quantidade)
{
    long soma = 0;

    for (size_t indice = 0; indice < quantidade; indice++) {
        soma += valores[indice];
    }

    return quantidade == 0 ? 0.0 : (double)soma / quantidade;
}

int encontrar_maior(const int valores[], size_t quantidade)
{
    int maior = 0;

    if (quantidade == 0) {
        return maior;
    }

    maior = valores[0];

    for (size_t indice = 1; indice < quantidade; indice++) {
        if (valores[indice] > maior) {
            maior = valores[indice];
        }
    }

    return maior;
}
