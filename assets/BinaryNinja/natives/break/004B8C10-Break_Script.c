// Original IGI.EXE function: Break_Script (VA 0x004B8C10; static CFG gate FAIL, CFG score 0.667).
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
