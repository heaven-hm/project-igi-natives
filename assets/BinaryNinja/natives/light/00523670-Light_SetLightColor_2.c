// Original IGI.EXE function: Light_SetLightColor_2 (VA 0x00523670; static CFG gate PASS, CFG score 1.000).
#include "Light_SetLightColor_2.h"
int32_t Light_SetLightColor_2(int32_t* context)

{
    int32_t i = 0;

    if (*context > 0)
    {
        int32_t* source_1 = &context[1];

        do
        {
            void* data_1 = *source_1;

            if (data_1)
            {
                Sys_ExecuteBytecode_2(data_1);
                *source_1 = 0;
                Sys_ExecuteBytecode_2(source_1[1]);
                source_1[1] = 0;
            }

            i += 1;
            source_1 = &source_1[3];
        } while (i < *context);
    }

    return Sys_ExecuteBytecode_2(context);
}
