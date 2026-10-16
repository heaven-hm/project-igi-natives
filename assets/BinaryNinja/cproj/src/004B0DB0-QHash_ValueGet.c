#include "gi_platform.h"
#include "004B0DB0-QHash_ValueGet.h"
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
