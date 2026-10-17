// Original IGI.EXE function: Script_ParseEnumInt32_21 (VA 0x004F8140; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_21.h"
void* Script_ParseEnumInt32_21(int32_t context, int32_t param_2, int32_t* param_3)

{
    *param_3 = 0;
    void* result;

    for (int32_t* i = &g_a76ca4; i < &g_a76cc4; i = &i[1])
    {
        result = *i;

        if (result)
        {
            *(context + (*param_3 << 2)) = result + 0x2d18;
            *(param_2 + (*param_3 << 2)) = *(result + 0x4288);
            result = *param_3 + 1;
            *param_3 = result;
        }
    }

    return result;
}
