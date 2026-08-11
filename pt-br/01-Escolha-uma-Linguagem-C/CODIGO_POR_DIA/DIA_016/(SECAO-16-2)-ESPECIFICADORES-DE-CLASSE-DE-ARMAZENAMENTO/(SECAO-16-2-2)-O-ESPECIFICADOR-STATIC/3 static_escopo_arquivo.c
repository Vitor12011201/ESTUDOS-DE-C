#include <stdio.h>

/* OBJETIVO: Simular o encapsulamento de estado de rede/encoder usando
   variáveis e funções 'static' no nível do arquivo (Internal Linkage). */

// --- VARIÁVEIS DE ESCOPO DE ARQUIVO (PRIVADAS AO MÓDULO) ---
// Nenhum outro arquivo .c consegue acessar estas variáveis usando 'extern'
static int porta_servidor_interna = 47989;
static int total_clientes_conectados = 0;

// --- FUNÇÃO PRIVADA DO MÓDULO (INTERNAL LINKAGE) ---
// Visível apenas para chamadas dentro deste arquivo .c
static void log_interno(const char *mensagem) {
    printf("[MÓDULO STREAMING - PORTA %d] %s\n", porta_servidor_interna, mensagem);
}

// --- FUNÇÕES PÚBLICAS DO MÓDULO (EXTERNAL LINKAGE) ---
void adicionar_cliente(void) {
    total_clientes_conectados++;
    log_interno("Novo cliente conectado com sucesso.");
}

int obter_total_clientes(void) {
    return total_clientes_conectados;
}

int main(void) {
    printf("--- Encapsulamento em C via static (File Scope) ---\n");
    adicionar_cliente();
    adicionar_cliente();

    printf("Total de clientes visível externamente: %d\n", obter_total_clientes());

    return 0;
}