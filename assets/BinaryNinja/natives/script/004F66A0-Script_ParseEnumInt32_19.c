// Original IGI.EXE function: Script_ParseEnumInt32_19 (VA 0x004F66A0; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_19.h"
int32_t Script_ParseEnumInt32_19(void* context, int32_t* param_2, int32_t* param_3)

{
    int32_t result = *(context + 0x2ca8);
    int32_t* source_val = *(context + (result << 2) + 0x2b4c);

    if (result < 0x14)
    {
        *source_val = *param_2;
        source_val[1] = param_2[1];
        source_val[2] = param_2[2];
        source_val[3] = *param_3;
        source_val[4] = param_3[1];
        source_val[5] = param_3[2];
        source_val[6] = *param_3;
        source_val[7] = param_3[1];
        source_val[8] = param_3[2];
        source_val[6] = *(context + 0x2c80) * source_val[6];
        source_val[7] = *(context + 0x2c80) * source_val[7];
        source_val[8] = *(context + 0x2c80) * source_val[8];
        long double fp0_1;
        fp0_1 = Sys_AllocateMemory_14(0xa76c90);
        source_val[9] = fp0_1 * 0.300000012f + 0.699999988f;
        *(context + 0x2ca8) += 1;
    }

    return result;
}
