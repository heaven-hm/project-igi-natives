// Original IGI.EXE function: Display_SwapBuffers_6 (VA 0x004922B0; static CFG gate FAIL, CFG score 0.733).
#include "Display_SwapBuffers_6.h"
int32_t __stdcall Display_SwapBuffers_6(char* context, int32_t* param_2 , int32_t* param_3)

{
    if (*param_3 == 1)
    {
        char* data_1 = param_3[2];
        char* dest_1 = context;
        char* data_2;
        int32_t data_3;

        if (data_1)
        {
            data_2 = Camera_UpdateViewCone_6(dest_1, data_1);
            data_3 = -(data_2);
        }

        if (!data_1 || -((data_3 - data_3)))
        {
            int32_t i = 0xffffffff;
            void* temp_2 = param_3[5] + *param_3[6] * 0x668;

            while (i)
            {
                bool flag_0_1 = 0 != *dest_1;
                dest_1 = &dest_1[1];
                i -= 1;

                if (!flag_0_1)
                    break;
            }

            int32_t entity_2 = ~i;
            int32_t source_2;
            int32_t dest_4;
            dest_4 = memcpy(temp_2 + 0x4f8, dest_1 - entity_2, entity_2 & 0xfffffffc);
            memcpy(dest_4, source_2, entity_2 & 3);
            memcpy(temp_2 + 0x578, param_2, 0xec);
            memcpy(temp_2, &param_3[9], 0x4f8);
            *(temp_2 + 0x664) = *param_2 >> 0x13 & 1;
            int32_t* data_12 = param_3[6];
            *data_12 += 1;

            if (param_3[2])
                return 0;
        }
    }

    return 1;
}
