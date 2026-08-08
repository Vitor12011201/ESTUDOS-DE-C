#include <stdio.h>

/* OBJETIVO: Demonstrar o erro de Undefined Behavior ao retornar ponteiro para
   variavel 'auto' e a solucao segura usando 'static'. */

// ERRO GRAVE: Retorna ponteiro para memoria que sera destruida ao sair da funcao!
char* criar_msg_perigosa(void) {
    char buffer_auto[] = "Conexao estabelecida";
    return buffer_auto; // AVISO DO COMPILADOR: Dangling Pointer / Undefined Behavior!
}

// CORRETO: O buffer vive na memoria estatica e permanece valido apos o retorno
const char* criar_msg_segura(void) {
    static char buffer_static[] = "Conexao de rede ativa (Porta 47989)";
    return buffer_static; // SEGURO: Memoria persiste durante todo o programa
}

int main(void) {
    printf("--- Retorno de Ponteiros e Tempo de Vida ---\n");

    // Tentativa com static (Seguro)
    const char *msg = criar_msg_segura();
    printf("[SUCESSO] Mensagem estatica recebida: \"%s\"\n", msg);

    // Descomentar a linha abaixo causaria comportamento imprevisivel ou SegFault:
    // printf("[PERIGO] %s\n", criar_msg_perigosa());

    return 0;
}