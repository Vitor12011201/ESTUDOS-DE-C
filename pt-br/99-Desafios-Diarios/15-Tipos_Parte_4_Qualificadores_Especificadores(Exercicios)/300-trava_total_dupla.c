/* Objetivo: Praticar a declaração de um ponteiro constante para um ponteiro constante para um dado constante (const char *const *const) e testar todas as camadas de proteção no compilador.
Instruções:
1. Declare duas strings: char *s1 = "Alpha"; e char *s2 = "Beta";.
2. Declare um ponteiro inicial char *p = s1;.
3. Agora, crie a trava total em ponteiro duplo:
 - const char *const *const pp = &p;
4. Faça os três testes de modificação no código (um de cada vez) e comente as linhas que geram erro para o código compilar:
 - Teste 1 (Camada Externa): Tente mudar o ponteiro duplo: pp = NULL;
 - Teste 2 (Camada Intermediária): Tente mudar para onde *pp aponta: *pp = s2;
 - Teste 3 (Camada Interna): Tente mudar o caractere do dado: **pp = 'X';
5. O Desafio: Escreva nos comentários do arquivo a tradução do tipo const char *const *const pp lendo estritamente da direita para a esquerda, explicando o motivo pelo qual todas as 3 operações acima foram bloqueadas pelo compilador.*/

#include <stdio.h>
#include <stddef.h>

int main(void)
{
 const char *s1 = "Alpha";
 const char *s2 = "Beta";

 /*
  * p é um ponteiro para char constante.
  *
  * p ainda pode ser redirecionado diretamente:
  * p = s2;
  */
 const char *p = s1;

 /*
  * Leitura estritamente da direita para a esquerda:
  *
  * const char *const *const pp
  *
  * pp é:
  * - um ponteiro constante
  * - para um ponteiro constante
  * - para char constante
  *
  * Em uma frase:
  * "pp é um ponteiro constante para um ponteiro constante
  * para char constante."
  */
 const char *const *const pp = &p;

 /*
  * TESTE 1 — CAMADA EXTERNA
  *
  * pp é um ponteiro constante, portanto não pode receber
  * outro endereço depois da inicialização.
  */
 // pp = NULL;  // ERRO: assignment of read-only variable 'pp'

 /*
  * TESTE 2 — CAMADA INTERMEDIÁRIA
  *
  * *pp é um ponteiro constante, portanto não pode ser
  * redirecionado para s2 por meio de pp.
  */
 // *pp = s2;   // ERRO: assignment of read-only location '*pp'

 /*
  * TESTE 3 — CAMADA INTERNA
  *
  * **pp é um char constante, portanto seu valor não pode
  * ser alterado por meio de pp.
  */
 // **pp = 'X'; // ERRO: assignment of read-only location '**pp'

 printf("String: %s\n", *pp);
 printf("Primeiro caractere: %c\n", **pp);

 return 0;
}
