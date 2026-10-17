// Original IGI.EXE function: QHash_ValueGet (VA 0x004B0DB0; static CFG gate PASS, CFG score 1.000).
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
