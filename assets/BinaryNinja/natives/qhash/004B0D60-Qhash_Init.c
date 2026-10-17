// IGI native provenance: Qhash_Init - 0x004B0D60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0D60-Qhash_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qhash_Init.h"
void* Qhash_Init(char context)

// Sig: void Qhash_Init(char hash_val)
// Note: Init hash table value, Params: hash value 0 or 1.
{
    char entity_val = g_9422fd;
    void* result = g_a960e0 - 1;
    g_a960e0 = result;
    g_9422fd = context;
    *(result + 0x9422e8) = entity_val;
    return result;
}
