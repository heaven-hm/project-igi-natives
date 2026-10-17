// Original IGI.EXE function: GO_InRemap (VA 0x004037C0; static CFG gate PASS, CFG score 0.917).
#include "GO_InRemap.h"
int32_t GO_InRemap(int32_t context, float param_2 )

// Sig: int GO_InRemap(int key1, int key2, int action)
// Note: Adds one input binding (key remap) to the current profile. Params: key1
// = primary key code, key2 = secondary key code, action = in-game action id
// being bound. Use in input/config scripts, repeat once per binding. Returns 1.
{
    int32_t data_val = g_bc2380;
    int32_t entity_4 = data_val * 0x159;
    int32_t data_2 = data_val * 0x73 + *((entity_4 << 2) + &g_bc2358) - 0x73;
    int32_t data_4 = Script_GetArg(param_2, 0);
    int32_t item_30 = 1;
    *(data_2 * 0xc + &g_bc25bc) = data_4;
    *(data_2 * 0xc + 0xbc25c0) = Script_GetArg(param_2, item_30);
    *(data_2 * 0xc + 0xbc25c4) = Script_GetArg(param_2, 2) & 0x3fffffff;
    *((entity_4 << 2) + &g_bc2358) += 1;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
