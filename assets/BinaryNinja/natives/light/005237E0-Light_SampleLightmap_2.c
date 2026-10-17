// Original IGI.EXE function: Light_SampleLightmap_2 (VA 0x005237E0; static CFG gate PASS, CFG score 0.976).
#include "Light_SampleLightmap_2.h"
int32_t Light_SampleLightmap_2(void* context)

{
    void* dest_val = context;

    if (*(dest_val + 0x38))
    {
        int32_t i = 0;

        if (*(dest_val + 0x2c) > 0)
        {
            context = nullptr;

            do
            {
                int32_t* source_2 = context + *(dest_val + 0x38);
                Sys_ExecuteBytecode_2(source_2[6]);
                Sys_ExecuteBytecode_2(source_2[5]);
                Sys_ExecuteBytecode_2(source_2[1]);
                Sys_ExecuteBytecode_2(*source_2);
                void* entity_2 = source_2[9];
                memset(source_2, 0, 0x1c);
                Sys_ExecuteBytecode_2(entity_2);
                void* temp_3 = source_2[4];
                source_2[9] = 0;
                Sys_ExecuteBytecode_2(temp_3);
                Sys_ExecuteBytecode_2(source_2[3]);
                Sys_ExecuteBytecode_2(source_2[2]);
                i += 1;
                context += 0x28;
            } while (i < *(dest_val + 0x2c));
        }

        Sys_ExecuteBytecode_2(*(dest_val + 0x38));
        *(dest_val + 0x38) = 0;
    }

    int32_t i_1 = 0;

    if (*(dest_val + 0x2c) > 0)
    {
        int32_t* flagP1 = dest_val + 0x3c;

        do
        {
            Light_ComputeDirectionalLight_3(flagP1);
            i_1 += 1;
            flagP1 = &flagP1[0xb];
        } while (i_1 < *(dest_val + 0x2c));
    }

    if (*(dest_val + 0x24))
        return Resource_Flush(dest_val);

    int32_t i_2 = 0;

    if (*(dest_val + 0x2c) > 0)
    {
        int32_t* source_3 = dest_val + 0x60;

        do
        {
            Sys_ExecuteBytecode_2(*source_3);
            *source_3 = 0;
            i_2 += 1;
            source_3 = &source_3[0xb];
        } while (i_2 < *(dest_val + 0x2c));
    }

    return Sys_ExecuteBytecode_2(dest_val);
}
