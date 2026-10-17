// Original IGI.EXE function: DynObj_RemoveSymbol_3 (VA 0x004C1270; static CFG gate PASS, CFG score 1.000).
#include "DynObj_RemoveSymbol_3.h"
int32_t DynObj_RemoveSymbol_3(float context, int32_t* param_2)

{
    int32_t* source_val = context;
    double item_30 = *(*param_2 + source_val[2] + 1);
    void item_20;
    Game_DataSymbolLoad(&item_20, "%f\r\n");
    void* dest_val = &item_20;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    Sys_CloseFileStream_4(*source_val, &item_20, ~i - 1);
    int32_t result = source_val[2] + 5;
    source_val[2] = result;
    return result;
}
