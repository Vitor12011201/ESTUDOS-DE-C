/* Objetivo: Entender o perigo clássico de tentar retornar o endereço de uma variável auto de dentro de uma função.
Instruções:
1. Crie uma função int* cria_valor(void) que declara uma variável local int resultado = 42; e tenta retornar o endereço dela: return &resultado;.
2. No main, chame essa função guardando o retorno em um ponteiro: int *ptr = cria_valor();.
3. Tente imprimir *ptr usando printf e ative os avisos do compilador (-Wall).
4. O Desafio: O compilador vai emitir um warning gravíssimo (function returns address of local variable). Explique nos comentários do arquivo por que desreferenciar ptr é extremamente perigoso, já que a memória da variável resultado foi destruída no momento em que a função cria_valor terminou.*/

#include <stdio.h>

/*
 *
 * A variável 'resultado' possui duração de armazenamento automática.
 * Isso significa que ela existe apenas durante a execução da função
 * cria_valor().
 *
 * Quando a função termina, o tempo de vida de 'resultado' também termina.
 *
 * Portanto, retornar:
 *
 *     &resultado
 *
 * devolve um endereço que apontava para um objeto que já deixou de existir.
 *
 * O ponteiro recebido pelo main NÃO pode ser usado para acessar
 * 'resultado'. Desreferenciar esse ponteiro causa comportamento indefinido.
 *
 * A região de memória pode ser reutilizada posteriormente por outras
 * funções, variáveis ou operações do programa. Por isso, mesmo que em
 * alguma execução pareça funcionar e imprima 42, não existe nenhuma
 * garantia de que isso continuará acontecendo.
 *
 * O programa pode:
 *
 * - aparentemente imprimir 42;
 * - imprimir outro valor;
 * - falhar;
 * - comportar-se de maneiras diferentes dependendo da otimização;
 * - apresentar qualquer outro comportamento permitido por um
 *   comportamento indefinido.
 *
 * Em termos mais precisos, não é que a memória física simplesmente
 * "desapareça". O que termina é o TEMPO DE VIDA do objeto 'resultado'.
 * A partir desse momento, aquela região não pertence mais validamente
 * àquela variável.
 */
int *cria_valor(void)
{
    int resultado = 42;

    return &resultado;
}

int main(void)
{
    int *ptr = cria_valor();

    /*
     * PERIGOSO:
     *
     * 'resultado' já deixou de existir quando cria_valor() retornou.
     * Portanto, tentar acessar o objeto através de '*ptr' resulta em
     * comportamento indefinido.
     */
    printf("%d\n", *ptr);

    return 0;
}