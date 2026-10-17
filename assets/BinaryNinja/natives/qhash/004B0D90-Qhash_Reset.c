// Original IGI.EXE function: Qhash_Reset (VA 0x004B0D90; static CFG gate PASS, CFG score 1.000).
#include "Qhash_Reset.h"
void* Qhash_Reset()

// Sig: void Qhash_Reset(void)
// Note: Reset QTask type hash table.
{
    void* data_1 = g_a960e0;
    g_9422fd = *(data_1 + 0x9422e8);
    g_a960e0 = data_1 + 1;
    return data_1 + 1;
}
