/* Objective: Learn the syntax of _Thread_local in block scope and understand why it requires combination with static.
Instructions:
1. Include the <stdio.h> and <threads.h> libraries (or just use _Thread_local directly if the compiler does not have <threads.h>).
2. Create a function called void register_session(int thread_id).
3. Inside the function, declare a Thread-Local Storage variable:
   - static _Thread_local int session_id = 0; (or static thread_local int session_id = 0;).
4. Assign the received thread_id value to the session_id variable and print it.
5. In main, call the function twice simulating sequential execution. */

#include <stdio.h>
#include <threads.h>

void register_session(int thread_id) {
    static _Thread_local int session_id = 0;

    session_id = thread_id;

    printf("Session ID: %d\n", session_id);
}

int main(void) {
    register_session(1);
    register_session(2);

    return 0;
}