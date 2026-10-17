// Original IGI.EXE function: Script_ParseEnumString_27 (VA 0x004FA950; static CFG gate PASS, CFG score 0.889).
#include "Script_ParseEnumString_27.h"
uint32_t Script_ParseEnumString_27(void* context, int32_t param_2)

{
    Sys_ResolveSymbol_4(*(context + 4));
    void item_104;
    Resource_Unpack(*(context + 4), &item_104, 2);
    int32_t item_103;
    uint32_t result_1 = item_103;
    Sys_ResolveSymbol_4(*(context + 4));
    Resource_Unpack(*(context + 4), (&item_103 + 1), result_1);
    uint32_t result = result_1;
    int32_t source_1;
    int32_t dest_2;
    dest_2 = memcpy(param_2, (&item_103 + 1), result_1 & 0xfffffffc);
    int32_t count = result & 3;
    result = 1;
    memcpy(dest_2, source_1, count);
    return result;
}
