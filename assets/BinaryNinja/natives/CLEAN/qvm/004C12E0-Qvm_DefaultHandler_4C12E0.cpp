// IGI native provenance: Qvm_DefaultHandler_4C12E0 - 0x004C12E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C12E0-Qvm_DefaultHandler_4C12E0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qvm_DefaultHandler_4C12E0.h"

int32_t Qvm_DefaultHandler_4C12E0(int32_t* arg1, int32_t* arg2)

{
    int32_t result_val = arg1[2];
    int32_t var_2c = result_val + *(*arg2 + result_val + 1) + 5;
    void var_20;
    Game_DataSymbolLoad(&var_20, "@%08X\r\n");
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
