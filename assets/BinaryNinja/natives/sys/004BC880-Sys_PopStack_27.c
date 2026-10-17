// IGI native provenance: Sys_PopStack_27 - 0x004BC880 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BC880-Sys_PopStack_27.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PopStack_27.h"
int32_t Sys_PopStack_27(int32_t* context, int32_t param_2)

{
    int32_t item_108 = param_2;
    void item_100;
    Game_DataSymbolLoad(&item_100, "%d");
    void* dest_val = &item_100;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    return Sys_CloseFileStream_4(context, &item_100, ~i - 1);
}
