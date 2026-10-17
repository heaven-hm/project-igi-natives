// Original IGI.EXE function: Camera_SetFieldOfView_2 (VA 0x004A2720; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_2.h"
int32_t Camera_SetFieldOfView_2(uint32_t context)

{
    int32_t result = context;
    int32_t i_1 = *(result + 0x24) * 256.0f;

    if (i_1 > 0)
    {
        int32_t i;

        do
        {
            void** source_1 = 0x935c10 - ((Sys_AllocateMemory_14(0x935bf0) * -256.0f) << 2);
            int32_t data_1 = *source_1 >> 8;
            uint32_t temp_2 = *source_1;
            *source_1 = data_1;
            int32_t data_2 = data_1 >> 8;
            *source_1 = data_2;
            int32_t data_3 = data_2 >> 8;
            *source_1 = data_3;
            void* item_8_1 = data_3 & 0xff;
            long double fp0_2 = Sys_AllocateMemory_14(0x935bf0);
            result = (((((data_2 * fp0_2) << 8) + data_1 * fp0_2) << 8) + temp_2 * fp0_2) << 8;
            i = i_1;
            i_1 -= 1;
            *source_1 = result;
        } while (i != 1);
    }

    return result;
}
