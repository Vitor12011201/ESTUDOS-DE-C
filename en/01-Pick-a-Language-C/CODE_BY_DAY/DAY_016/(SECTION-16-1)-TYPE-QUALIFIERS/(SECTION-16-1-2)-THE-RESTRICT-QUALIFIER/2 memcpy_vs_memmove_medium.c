#include <stdio.h>
#include <string.h>

/* OBJECTIVE: Explain why memcpy() uses 'restrict' for maximum speed,
   while memmove() must be used when buffers overlap. */

int main() {
    char buffer1[30] = "Sunshine Game Streaming";
    char buffer2[30] = "Sunshine Game Streaming";

    printf("--- memcpy vs memmove ---\n");

    /* Signature of memcpy:
       void *memcpy(void *restrict dest, const void *restrict src, size_t n);
       It assumes that dest and src do NOT overlap. That's why it's ultra-fast. */
    memcpy(buffer1 + 9, buffer1, 8); // Copies "Sunshine" forward in the same buffer
    printf("Unpredictable result with memcpy on overlap: \"%s\"\n", buffer1);

    /* Signature of memmove:
       void *memmove(void *dest, const void *src, size_t n);
       Does NOT use 'restrict'. It handles overlap safely (but is slightly slower). */
    memmove(buffer2 + 9, buffer2, 8);
    printf("Correct and safe result with memmove:          \"%s\"\n", buffer2);

    return 0;
}