/* Objective: Practice visibility restriction (Internal Linkage) of a file-scope variable.
Instructions:
1. Outside any function (in file scope), declare a static variable:
   - static int private_total_connections = 0;
2. Create two functions in the same file:
   - void connect_client(void) -> Increments private_total_connections.
   - void disconnect_client(void) -> Decrements private_total_connections.
3. Create a getter function int read_total_connections(void) that just returns the value of the static variable.
4. In main, call the connect and disconnect functions and display the total active connections. */

#include <stdio.h>

static int private_total_connections = 0;

void connect_client(void)
{
    private_total_connections++;
}

void disconnect_client(void)
{
    private_total_connections--;
}

int read_total_connections(void)
{
    return private_total_connections;
}

int main(void)
{
    connect_client();
    connect_client();
    connect_client();

    printf("Active connections: %d\n", read_total_connections());

    disconnect_client();

    printf("Active connections: %d\n", read_total_connections());

    return 0;
}