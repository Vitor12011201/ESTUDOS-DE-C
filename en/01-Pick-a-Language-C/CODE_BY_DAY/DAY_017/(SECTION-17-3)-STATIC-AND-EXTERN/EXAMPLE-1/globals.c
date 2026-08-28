#include "globals.h"

// Actual definition and allocation of the global variable (External Linkage)
int global_counter = 100;

// Static file-scope variable (Internal Linkage): UNACCESSIBLE outside this .c!
static int module_secret = 42;

void increment_counter(void) {
    global_counter += module_secret;
}