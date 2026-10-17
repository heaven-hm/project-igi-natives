// IGI native provenance: Sys_OpenFileStream_24 - 0x004B9040 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B9040-Sys_OpenFileStream_24.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream_24.h"
int32_t Sys_OpenFileStream_24(long double context , char* param_2, void* param_3)

{
    int32_t data_val = *(param_3 + 4);
    int32_t data_3;

    if (data_val == 1)
    {
        int32_t data_11 = *(param_3 + 0xc);

        if (data_11 != 1)
        {
            if (data_11 == 2)
            {
                int32_t data_15 = Sys_ReadFileBlock_24(param_2);
                **(param_3 + 0x18) = data_15;
                return data_15;
            }

            int32_t data_14 = Sys_ReadFileBlock_24(param_2);
            **(param_3 + 0x18) = data_14;
            return data_14;
        }

        data_3 = Sys_ReadFileBlock_24(param_2);
        **(param_3 + 0x18) = data_3;
    }
    else
    {
        if (data_val == 2)
        {
            long double fpu0;
            long double fpu1;
            int32_t data_10 = Sys_DispatchOpcode_24(fpu0, fpu1, param_2);
            **(param_3 + 0x18) = context;
            return data_10;
        }

        data_3 = data_val - 3;

        if (data_val == 3)
        {
            int32_t data_5 = *(param_3 + 0xc) - 1;
            void item_800;
            char* data_6 = Sys_SyntaxErrorInStringE(param_2, &item_800, 0x800);
            char* data_8 = Camera_ApplyLineFilter_5(*(param_3 + 0x18), data_6, data_5);
            *(*(param_3 + 0x18) + *(param_3 + 0xc) - 1) = 0;
            return data_8;
        }
    }

    return data_3;
}
