#include <stdio.h>
#include <signal.h>
#include <unistd.h>

/* OBJETIVO: Utilizar 'volatile sig_atomic_t' para criar uma flag de encerramento
   segura modificada por uma interrupção de sinal do sistema operacional (SIGINT). */

// 'sig_atomic_t': Garante leitura/escrita atômica em 1 instrução de CPU.
// 'volatile': Garante que o laço principal releia o valor na RAM a cada iteração.
volatile sig_atomic_t servidor_ativo = 1;

void capturar_sigint(int sinal) {
    (void)sinal;
    servidor_ativo = 0; // Alterado de forma assíncrona pelo Kernel
}

int main() {
    // Registra o manipulador para a interrupção SIGINT (Ctrl+C)
    signal(SIGINT, capturar_sigint);

    printf("--- Servidor de Rede Ativo (Pressione Ctrl+C para desligar) ---\n");

    int ciclos = 0;
    while (servidor_ativo) {
        printf("Aguardando pacotes de conexao... [%d]\n", ++ciclos);
        sleep(1); // Simula atraso na rede
    }

    printf("\n[SINAL CAPTURADO] Encerrando recursos e fechando sockets de forma limpa.\n");
    return 0;
}