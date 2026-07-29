/* Objetivo: Dominar a leitura da direita para a esquerda em ponteiros para ponteiros com const em posições diferentes.
Instruções:
1. Declare char *mensagem1 = "Hello"; e char *mensagem2 = "World";.
2. Crie um ponteiro para ponteiro onde a segunda camada é constante: char *const *pp = &mensagem1;.
3. Faça o teste prático:
 - Tente avançar o ponteiro principal: pp++; (Deve funcionar? Sim/Não).
 - Tente alterar a mensagem apontada: *pp = mensagem2; (Deve dar erro? Sim/Não).
4. Escreva no comentário do arquivo a leitura de trás para frente dessa declaração char *const *pp explicando exatamente por que o compilador aceitou um e negou o outro.*/

#include <stdio.h>

int main(void)
{
 char *mensagem1 = "Hello";
 char *mensagem2 = "World";

 /*
  * Leitura de trás para frente:
  *
  * char *const *pp
  *
  * pp é um ponteiro
  * para um ponteiro constante
  * para char.
  *
  * O ponteiro principal, pp, não é constante e pode mudar.
  * Já o ponteiro acessado por *pp é constante e não pode
  * receber outro endereço.
  */
 char *const *pp = &mensagem1;

 printf("Mensagem: %s\n", *pp);

 /*
  * SIM, compila:
  *
  * pp não é constante, então pode avançar para outro endereço.
  *
  * Porém, como pp aponta inicialmente para uma variável isolada,
  * e não para um array de ponteiros, não devemos dereferenciá-lo
  * depois do incremento.
  */
 pp++;

 /*
  * Para testar a próxima operação corretamente, voltamos pp
  * ao endereço original.
  */
 pp--;

 /*
  * NÃO compila:
  *
  * *pp é um ponteiro constante para char.
  * Portanto, ele não pode passar a apontar para mensagem2.
  */
 // *pp = mensagem2;

 return 0;
}