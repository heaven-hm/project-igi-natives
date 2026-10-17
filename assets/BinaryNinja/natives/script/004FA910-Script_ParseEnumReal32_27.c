// Original IGI.EXE function: Script_ParseEnumReal32_27 (VA 0x004FA910; static CFG gate PASS, CFG score 0.889).
#include "Script_ParseEnumReal32_27.h"
int32_t Script_ParseEnumReal32_27(void* context, int32_t param_2)

{
    Sys_ResolveSymbol_4(*(context + 4));
    int32_t item_2c = 0x19;
    void item_1c;
    void* item_30 = &item_1c;
    int32_t* item_34 = *(context + 4);
    int32_t result = Resource_Unpack(item_34, item_30, item_2c);
    void item_1b;
    memcpy(param_2, &item_1b, 0x18);
    result = 1;
    return result;
}
