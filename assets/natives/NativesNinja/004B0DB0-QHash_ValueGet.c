#include "004B0DB0-QHash_ValueGet.h"
/* 0x004b0db0 QHash_ValueGet full linked: callers=28 callees=0 */
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
