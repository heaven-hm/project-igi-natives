// IGI native provenance: Qhash_Reset - 0x004B0D90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0D90-Qhash_Reset.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
