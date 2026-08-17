/* OBJETIVO: Utilizar '_Thread_local' em um ponteiro para alocar memoria dinamicamente na Heap de forma isolada por thread, garantindo a verificacao de NULL e a desalocacao com free(). */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Cada thread possui seu proprio ponteiro privado apontando para seu bloco na Heap
static _Thread_local int *tl_buffer_local = NULL;
static _Thread_local size_t tl_tamanho_local = 0;

void *trabalhador(void *arg) {
    int id = *(int *)arg;
    tl_tamanho_local = 4;

    // Alocacao dinamica na Heap exclusiva para esta thread usando 'sizeof *ponteiro'
    tl_buffer_local = malloc(tl_tamanho_local * sizeof *tl_buffer_local);
    if (tl_buffer_local == NULL) {
        fprintf(stderr, "[Thread %d] Erro critico: Falha ao alocar buffer local.\n", id);
        pthread_exit(NULL);
    }

    // Preenchendo o buffer exclusivo da thread
    for (size_t i = 0; i < tl_tamanho_local; i++) {
        tl_buffer_local[i] = (id * 1000) + (int)(i + 1);
    }

    // Exibindo os dados contidos no buffer local
    printf("[Thread %d] Buffer local alocado na Heap:\n", id);
    for (size_t i = 0; i < tl_tamanho_local; i++) {
        printf("  -> tl_buffer_local[%zu] = %d\n", i, tl_buffer_local[i]);
    }

    // Limpeza de memoria no contexto da propria thread
    free(tl_buffer_local);
    tl_buffer_local = NULL;
    tl_tamanho_local = 0;

    printf("[Thread %d] Memoria do buffer local liberada e ponteiro resetado.\n", id);

    return NULL;
}

int main(void) {
    printf("=== EXEMPLO 2: Ponteiro _Thread_local Alocado na Heap ===\n");

    size_t qtd_threads = 2;

    pthread_t *h_threads = malloc(qtd_threads * sizeof *h_threads);
    if (h_threads == NULL) {
        fprintf(stderr, "Erro ao alocar vetor de pthreads.\n");
        return EXIT_FAILURE;
    }

    int *ids = malloc(qtd_threads * sizeof *ids);
    if (ids == NULL) {
        fprintf(stderr, "Erro ao alocar vetor de IDs.\n");
        free(h_threads);
        h_threads = NULL;
        return EXIT_FAILURE;
    }

    // Disparando as threads
    for (size_t i = 0; i < qtd_threads; i++) {
        ids[i] = (int)(i + 1);
        if (pthread_create(&h_threads[i], NULL, trabalhador, &ids[i]) != 0) {
            fprintf(stderr, "Falha ao criar thread %zu\n", i + 1);
        }
    }

    // Aguardando finalizacao
    for (size_t i = 0; i < qtd_threads; i++) {
        pthread_join(h_threads[i], NULL);
    }

    // Liberando recursos do main
    free(ids);
    ids = NULL;

    free(h_threads);
    h_threads = NULL;

    printf("Processo concluido com sucesso.\n");

    return EXIT_SUCCESS;
}