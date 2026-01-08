#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
printf("Teste rand sem srand: \n");

    srand(time(NULL));

    printf("%d\n" ,rand());
    printf("%d\n", rand());
    printf("%d\n", rand());

    return 0;
}