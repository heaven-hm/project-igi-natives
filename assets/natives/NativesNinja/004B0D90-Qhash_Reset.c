#include "004B0D90-Qhash_Reset.h"
/* 0x004b0d90 Qhash_Reset full linked: callers=44 callees=0 */
void* Qhash_Reset()

// Sig: void Qhash_Reset(void)
// Note: Reset QTask type hash table.
{
    void* eax_1 = g_a960e0;
    g_9422fd = *(eax_1 + 0x9422e8);
    g_a960e0 = eax_1 + 1;
    return eax_1 + 1;
}
