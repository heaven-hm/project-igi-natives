#include "Qhash_Init.h"
void* Qhash_Init(char a1)

// Sig: void Qhash_Init(char hash_val)
// Note: Init hash table value, Params: hash value 0 or 1.
{
    char objC = g_9422fd;
    void* result = g_a960e0 - 1;
    g_a960e0 = result;
    g_9422fd = a1;
    *(result + 0x9422e8) = objC;
    return result;
}
