/* Objetivo: Compreender a sintaxe clássica do register em variáveis de controle de loops.
Instruções:
1. Crie uma variável de controle de loop com o especificador: register int i;.
2. Monte um loop for (i = 0; i < 5; i++) imprimindo o valor de i.
3. Em seguida, tente obter o endereço de memória de i: int *p = &i;.
4. Observe o erro de compilação gerado pelo C, comente a linha incorreta para que o código volte a compilar e explique a razão nos comentários. */

#include <stdio.h>

int main(void) {
    register int i;

    for (i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }

    /*
    int *p = &i;

    ERRO:
    Uma variável declarada com "register" não pode ter seu endereço
    obtido utilizando o operador &.

    O especificador register indica que a variável será muito utilizada
    e sugere ao compilador que ela possa ser mantida em um registrador
    do processador em vez da memória.

    Por isso, a linguagem C proíbe explicitamente usar &i quando i foi
    declarado como register.

    A linha foi comentada para permitir que o programa compile.
    */

    return 0;
}