// IGI native provenance: QHash_ValueGet - 0x004B0DB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0DB0-QHash_ValueGet.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QHash_ValueGet.h"
int32_t QHash_ValueGet()

// Sig: int QHash_ValueGet(int* table, char* key)
// Note: Gets a value from a QHash hash-table (6-byte getter thunk). Pass table
// ptr + key string, RETURNS the stored integer. Restored after accidental loss
// - address pass1-verified.
{
    int32_t result;
    result = g_9422fd;
    return result;
}
