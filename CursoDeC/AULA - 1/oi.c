#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("x = %d\n", x);
    printf("Endereco de x: %p\n", &x);
    printf("p guarda: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);

    *p = 20;

    printf("Novo x = %d\n", x);
    printf("Valor apontado por p: %d\n", *p);

    return 0;
}