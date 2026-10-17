// IGI native provenance: Break_Script - 0x004B8C10 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B8C10-Break_Script.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Break_Script.h"
int32_t Break_Script(int32_t context)

// Sig: void Break_Script()
// Note: Breaks/aborts the currently-executing script at this point (70-byte
// function). Takes no args. Use as an early-exit inside .qsc scripts.
{
    g_a965a4 = 1;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
