// IGI native provenance: Script_BufInit - 0x004C0200 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C0200-Script_BufInit.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_BufInit.h"
int32_t* Script_BufInit(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4)

// Sig: void Script_BufInit(int* outBuf1, int buf2, int buf3, int bufSize)
// Note: Initialises the four header fields of a SCRIPT BUFFER structure
// (verified field-by-field stores: *out=buf2, then buf3, bufSize...). Params:
// outBuf1 = buffer struct to init, buf2/buf3 = buffer pointers/ids, bufSize =
// size field. Call before handing a buffer to the QVM assembler/parsers.
{
    *context = param_2;
    context[7] = param_3;
    context[0xb] = param_4;
    context[4] = &context[2];
    context[2] = &context[3];
    context[3] = 0;
    return context;
}
