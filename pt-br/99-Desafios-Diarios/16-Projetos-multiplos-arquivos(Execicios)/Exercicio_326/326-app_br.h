/* Objetivo: Observar como os Include Guards impedem erros de compilação por redefinição de tipos/estruturas.
Instruções:
1. Crie o arquivo 341-dados.h contendo uma struct Registro e proteja o arquivo com DADOS_H.
2. No arquivo 341-app.c, faça a inclusão dupla de forma proposital:
C
 - #include "341-dados.h"
 - #include "341-dados.h" // A segunda inclusao sera ignorada pelo pre-processador
3. Crie o main declarando uma variável do tipo struct Registro.*/

#include "341-dados.h"
#include "341-dados.h" // A segunda inclusao sera ignorada pelo pre-processador

int main(void)
{
 struct Registro registro;

 registro.id = 1;

 return 0;
}