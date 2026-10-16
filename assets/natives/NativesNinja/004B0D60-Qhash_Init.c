#include "004B0D60-Qhash_Init.h"
/* 0x004b0d60 Qhash_Init full linked: callers=43 callees=0 */
void* Qhash_Init(char a1)

// Sig: void Qhash_Init(char hash_val)
// Note: Init hash table value, Params: hash value 0 or 1.
{
    char ecx = g_9422fd;
    void* result = g_a960e0 - 1;
    g_a960e0 = result;
    g_9422fd = a1;
    *(result + 0x9422e8) = ecx;
    return result;
}
