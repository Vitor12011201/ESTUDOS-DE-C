/* Demonstrates how to share a global variable between files using extern and how to block the visibility of a variable with static. */

#ifndef GLOBALS_H
#define GLOBALS_H

// Only declares that 'global_counter' exists in some .c file of the project
extern int global_counter;

void increment_counter(void);

#endif // GLOBALS_H