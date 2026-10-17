// IGI native provenance: Qvm_GetContext_4C1210 - 0x004C1210 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C1210-Qvm_GetContext_4C1210.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qvm_GetContext_4C1210.h"

int32_t Qvm_GetContext_4C1210(int32_t* arg1, int32_t* arg2)

{
    int32_t var_2c = *(*arg2 + arg1[2] + 1);
    void var_20;
    Game_DataSymbolLoad(&var_20, "%d\r\n");
    void* dest_ptr = &var_20;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *dest_ptr;
        dest_ptr += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    Sys_CloseFileStream_4(*arg1, &var_20, ~i - 1);
    int32_t result = arg1[2] + 5;
    arg1[2] = result;
    return result;
}
