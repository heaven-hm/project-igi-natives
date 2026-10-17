// Original IGI.EXE function: Sys_ResolveSymbol_22 (VA 0x004B86E0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_22.h"
char* Sys_ResolveSymbol_22(int32_t context)

{
    void item_850;
    void item_830;
    void item_800;
    Script_BufInit(&item_830, &item_850, &item_800, 0x800);
    int32_t i = 0xffffffff;
    int32_t dest_val = context;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    Sys_ResolveSymbol_30(&item_850, context, ~i - 1);
    int32_t item_878 = 0;
    char* result;

    if (!Sys_PopStack_24(&item_830, &result))
    {
        Sys_PopStack_30(&item_850);
        return 0;
    }

    Sys_PopStack_30(&item_850);
    return result;
}
