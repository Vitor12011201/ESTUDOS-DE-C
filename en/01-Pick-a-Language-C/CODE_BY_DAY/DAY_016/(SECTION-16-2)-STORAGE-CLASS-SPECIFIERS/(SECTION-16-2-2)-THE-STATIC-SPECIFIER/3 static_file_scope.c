#include <stdio.h>

/* OBJECTIVE: Simulate network/encoder state encapsulation using
   'static' variables and functions at the file level (Internal Linkage). */

// --- FILE-SCOPE VARIABLES (PRIVATE TO THE MODULE) ---
// No other .c file can access these variables using 'extern'
static int internal_server_port = 47989;
static int total_connected_clients = 0;

// --- PRIVATE MODULE FUNCTION (INTERNAL LINKAGE) ---
// Visible only for calls within this .c file
static void internal_log(const char *message) {
    printf("[STREAMING MODULE - PORT %d] %s\n", internal_server_port, message);
}

// --- PUBLIC MODULE FUNCTIONS (EXTERNAL LINKAGE) ---
void add_client(void) {
    total_connected_clients++;
    internal_log("New client successfully connected.");
}

int get_total_clients(void) {
    return total_connected_clients;
}

int main(void) {
    printf("--- Encapsulation in C via static (File Scope) ---\n");
    add_client();
    add_client();
    
    printf("Total clients externally visible: %d\n", get_total_clients());

    return 0;
}