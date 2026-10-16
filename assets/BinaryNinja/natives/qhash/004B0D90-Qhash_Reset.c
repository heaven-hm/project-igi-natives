#include "Qhash_Reset.h"
void* Qhash_Reset()

// Sig: void Qhash_Reset(void)
// Note: Reset QTask type hash table.
{
    void* valA1 = g_a960e0;
    g_9422fd = *(valA1 + 0x9422e8);
    g_a960e0 = valA1 + 1;
    return valA1 + 1;
}
