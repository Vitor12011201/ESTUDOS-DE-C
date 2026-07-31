#include <stdio.h>
#include <string.h>

/* OBJETIVO: Explicar por que memcpy() usa 'restrict' para velocidade máxima,
   enquanto memmove() deve ser usada quando há sobreposição de buffers. */

int main() {
    char buffer1[30] = "Sunshine Game Streaming";
    char buffer2[30] = "Sunshine Game Streaming";

    printf("--- memcpy vs memmove ---\n");

    /* Assinatura do memcpy:
       void *memcpy(void *restrict dest, const void *restrict src, size_t n);
       Ele assume que dest e src NÃO se sobrepõem. Por isso é ultrarrápido. */
    memcpy(buffer1 + 9, buffer1, 8); // Copia "Sunshine" para frente no mesmo buffer
    printf("Resultado imprevisivel com memcpy em sobreposição: \"%s\"\n", buffer1);

    /* Assinatura do memmove:
       void *memmove(void *dest, const void *src, size_t n);
       NÃO usa 'restrict'. Ele lida com sobreposição de forma segura (mas é ligeiramente mais lento). */
    memmove(buffer2 + 9, buffer2, 8);
    printf("Resultado correto e seguro com memmove:          \"%s\"\n", buffer2);

    return 0;
}