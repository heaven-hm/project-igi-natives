// Original IGI.EXE function: Sys_PopStack_7 (VA 0x004B2070; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack_7.h"
int32_t Sys_PopStack_7(void* context, int32_t* param_2, int32_t param_3, int32_t param_4)

{
    int32_t entity_val;
    int32_t item_4 = entity_val;
    int32_t result = 0;
    int32_t result_2 = 0;
    int32_t* dest_val = Sys_ResolveSymbol_19(context);

    if (dest_val)
    {
        int32_t* flagP1 = param_2;

        while (result < param_3)
        {
            if (Sys_OpenFileStream_20(dest_val) == 0x48584554)
            {
                int32_t* data_2 = Sys_CheckHeap_19(dest_val, context);
                dest_val = Sys_PopStack_19(dest_val);

                if (!data_2 || !dest_val)
                    return 0;

                if (Sys_OpenFileStream_20(dest_val) != 0x59444f42)
                    return 0;

                if (!Sys_CheckHeap_19(dest_val, context))
                    return 0;

                void* data_6 = Sys_CheckHeap_19(dest_val, context);
                int32_t entity_1 = 0;
                entity_1 = data_2[3];
                int32_t data_8 = 0;
                data_8 = data_2[4];
                int32_t data_9 = 0;
                data_9 = *(data_2 + 0x16);
                int32_t temp_2 = 0;
                temp_2 = *(data_2 + 0x12);
                int32_t entity_2 = 0;
                entity_2 = *(data_2 + 0xe);
                int32_t data_11;
                int32_t temp_3;
                temp_3 = HIGHD(data_9 * temp_2);
                data_11 = LOWD(data_9 * temp_2);
                Sys_FreeMemory_8(flagP1, param_4, (data_11 + (temp_3 & 7)) >> 3, entity_2, data_8, *data_2, entity_1,
                    data_2[1], data_6);
                int32_t result_1 = result_2 + 1;
                flagP1 = &flagP1[9];
                result_2 = result_1;
                result = result_1;
            }

            dest_val = Sys_PopStack_19(dest_val);

            if (!dest_val)
                break;
        }
    }

    return result;
}
