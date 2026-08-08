#include <stdio.h>

/* OBJECTIVE: Compare the reset behavior of an 'auto' variable
   with the state preservation of a 'static' variable. */

void process_frame(void) {
    auto int auto_counter = 0;       // Reinitialized on EACH function call
    static int static_counter = 0;   // Initialized ONLY ONCE at program startup

    auto_counter++;
    static_counter++;

    printf("Frame processed -> auto: %d | static (total accumulated): %d\n",
           auto_counter, static_counter);
}

int main(void) {
    printf("--- Frame Processing Simulation ---\n");
    process_frame(); // auto: 1, static: 1
    process_frame(); // auto: 1, static: 2
    process_frame(); // auto: 1, static: 3

    return 0;
}