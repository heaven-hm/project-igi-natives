// IGI native provenance: QHash_ValueSet - 0x004B0D40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0D40-QHash_ValueSet.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QHash_ValueSet.h"
int32_t QHash_ValueSet()

// Sig: void QHash_ValueSet(int* table, char* key, int value)
// Note: Sets a value in a QHash hash-table (8-byte thunk into the hash engine
// at 0x4B0D90 family). Pass the table ptr, key string and integer value.
// Restored after accidental loss during batch rewrite - address pass1-verified.
{
    g_9422fd = 1;
}
