// Original IGI.EXE function: Sys_FreeMemory_4 (VA 0x004B12F0; static CFG gate FAIL, CFG score 0.778).
#include "Sys_FreeMemory_4.h"
int32_t Script_RegisterNamespace(char* context, void* param_2)

{
    int32_t data_val = QFile_DeviceIndex(param_2);
    int32_t context_val = data_val;

    if (context_val)
    {
        char* dest_1 = context;
        Sys_OpenFileStream_4(dest_1);
        int32_t data_1 = 0;
        int32_t* entity_1 = &g_9423c0;

        while (*entity_1)
        {
            entity_1 = &entity_1[0x25];
            data_1 += 1;

            if (entity_1 >= 0x943640)
                return data_1;
        }

        int32_t i = 0xffffffff;
        int32_t temp_2 = data_1 * 0x94;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_1;
            dest_1 = &dest_1[1];
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_3 = ~i;
        int32_t source_3;
        int32_t dest_4;
        dest_4 = memcpy(temp_2 + &g_942330, dest_1 - entity_3, entity_3 & 0xfffffffc);
        memcpy(dest_4, source_3, entity_3 & 3);
        void* dest_5 = param_2;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool flag_1_1 = 0 != *dest_5;
            dest_5 += 1;
            i_1 -= 1;

            if (!flag_1_1)
                break;
        }

        int32_t entity_7 = ~i_1;
        data_val = entity_7;
        int32_t source_6;
        int32_t dest_8;
        dest_8 = memcpy(temp_2 + &g_942340, dest_5 - entity_7, entity_7 & 0xfffffffc);
        memcpy(dest_8, source_6, data_val & 3);
        *(temp_2 + &g_9423c0) = context_val;
    }

    return data_val;
}
