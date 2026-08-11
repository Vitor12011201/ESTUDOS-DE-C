#include <stdio.h>
#include <pthread.h>
#include <stdatomic.h>

/* OBJECTIVE: Demonstrate the risk of Race Condition with local 'static' in threads
   and the solution using atomicity or mutual exclusion (mutex). */

void unsafe_id_generator(void) {
    // DANGER: Multiple threads modifying the same memory without protection
    static int shared_id = 0;
    shared_id++;
}

void safe_id_generator(void) {
    // SOLUTION: Use atomicity for simple increment operations on 'static'
    static atomic_int atomic_id = 0;
    atomic_fetch_add(&atomic_id, 1);
}

int main(void) {
    printf("--- Concurrency Alert with static ---\n");
    printf("Block-scope 'static' variables reside in global RAM (.data/.bss).\n");
    printf("If used in reentrant or multithreaded functions, they need _Atomic or a Mutex.\n");

    return 0;
}