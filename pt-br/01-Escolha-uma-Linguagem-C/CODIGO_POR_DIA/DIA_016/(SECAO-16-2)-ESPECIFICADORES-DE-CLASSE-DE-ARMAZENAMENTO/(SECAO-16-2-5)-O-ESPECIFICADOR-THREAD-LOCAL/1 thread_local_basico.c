/* OBJETIVO: Demonstrar que variaveis declaradas com '_Thread_local' possuem uma copia independente e isolada para cada thread executada. */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Variavel com _Thread_local: cada thread tera sua propria copia de 'contador_thread' na RAM
static _Thread_local int contador_thread = 0;

// Estrutura para passar dados de inicialização para cada thread
typedef struct {
    int id_thread;
    int incremento_max;
} DadosThread;

void *rotina_thread(void *arg) {
    // Conversao do ponteiro generico de argumentos
    DadosThread *dados = (DadosThread *)arg;

    // Cada thread modifica APENAS a sua copia local de 'contador_thread'
    for (int i = 0; i < dados->incremento_max; i++) {
        contador_thread++;
    }

    printf("[Thread %d] Finalizou contagem local. contador_thread = %d\n",
           dados->id_thread, contador_thread);

    return NULL;
}

int main(void) {
    printf("=== EXEMPLO 1: _Thread_local com Tipos Primitivos ===\n");

    size_t num_threads = 3;

    // Alocacao dinamica na Heap para os manipuladores das threads (pthreads)
    pthread_t *threads = malloc(num_threads * sizeof *threads);
    if (threads == NULL) {
        fprintf(stderr, "Erro ao alocar memoria para as threads.\n");
        return EXIT_FAILURE;
    }

    // Alocacao dinamica para os argumentos de cada thread
    DadosThread *args = malloc(num_threads * sizeof *args);
    if (args == NULL) {
        fprintf(stderr, "Erro ao alocar memoria para os argumentos.\n");
        free(threads);
        threads = NULL;
        return EXIT_FAILURE;
    }

    // Criacao das threads
    for (size_t i = 0; i < num_threads; i++) {
        args[i].id_thread = (int)(i + 1);
        args[i].incremento_max = (int)(i + 1) * 100;

        if (pthread_create(&threads[i], NULL, rotina_thread, &args[i]) != 0) {
            fprintf(stderr, "Erro ao criar a thread %zu\n", i + 1);
        }
    }

    // Aguardando a finalizacao de todas as threads
    for (size_t i = 0; i < num_threads; i++) {
        pthread_join(threads[i], NULL);
    }

    // Desalocacao segura de memoria da Heap
    free(args);
    args = NULL;

    free(threads);
    threads = NULL;

    printf("Todas as threads foram finalizadas e memorias liberadas.\n");

    return EXIT_SUCCESS;
}