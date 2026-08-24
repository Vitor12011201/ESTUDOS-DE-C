/* Objetivo: Demonstra como o Header Guard previne erros de compilação quando um arquivo .h é incluído mais de uma vez no mesmo arquivo fonte. */

#ifndef MATH_UTILS_H   // 1. Se MATH_UTILS_H não estiver definido...
#define MATH_UTILS_H   // 2. Define a macro para bloquear futuras inclusões

// Definição de tipo e protótipo de função
typedef struct {
    int x;
    int y;
} Ponto;

int somar_pontos(Ponto p1, Ponto p2);

#endif                 // 3. Fim do bloco protegido por #ifndef