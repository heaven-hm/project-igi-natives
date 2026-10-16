#include "gi_platform.h"
#include "004C0200-Script_BufInit.h"
int32_t* Script_BufInit(int32_t* a1, int32_t a2, int32_t a3, int32_t a4)

// Sig: void Script_BufInit(int* outBuf1, int buf2, int buf3, int bufSize)
// Note: Initialises the four header fields of a SCRIPT BUFFER structure
// (verified field-by-field stores: *out=buf2, then buf3, bufSize...). Params:
// outBuf1 = buffer struct to init, buf2/buf3 = buffer pointers/ids, bufSize =
// size field. Call before handing a buffer to the QVM assembler/parsers.
{
    *a1 = a2;
    a1[7] = a3;
    a1[0xb] = a4;
    a1[4] = &a1[2];
    a1[2] = &a1[3];
    a1[3] = 0;
    return a1;
}
