// Original IGI.EXE function: Script_ParseEnumString_26 (VA 0x004FA730; static CFG gate FAIL, CFG score 0.833).
#include "Script_ParseEnumString_26.h"
int32_t Script_ParseEnumString_26(void* context, int32_t param_2)

{
    int32_t dest_val = param_2;
    int32_t i = 0xffffffff;
    char item_104 = 9;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    char item_103 = ~i;
    void item_102;
    int32_t source_1;
    int32_t dest_1;
    dest_1 = memcpy(&item_102, param_2, ~i & 0xfffffffc);
    memcpy(dest_1, source_1, ~i & 3);
    Sys_ResolveSymbol_4(*(context + 4));
    int32_t result = Sys_CloseFileStream_4(*(context + 4), &item_104, ~i + 2);
    result = 1;
    return result;
}
