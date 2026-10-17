// Original IGI.EXE function: DynObj_UpdateDynTree_7 (VA 0x004C6160; static CFG gate PASS, CFG score 1.000).
#include "DynObj_UpdateDynTree_7.h"
int32_t DynObj_UpdateDynTree_7(void* context)

{
    int32_t* source_val = context + 0xe00;
    int32_t i = 0xffffffff;
    int32_t* dest_val = source_val;
    int32_t result = 0;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    if (~i != 1)
    {
        void* entity_2;
        int32_t temp_1;
        result = Sys_AllocateMemory_16(source_val);

        if (result)
        {
            int32_t* item_20_1 = source_val;
            int32_t item_8;
            int32_t* data_1;
            int32_t entity_3;
            data_1 = Resource_Load(&item_8, temp_1, entity_2, &item_8);
            int32_t* dest_1 = data_1;
            *(context + 0xdf8) = dest_1;

            if (dest_1)
            {
                int32_t flagP1 = 0;

                if (item_8 > 0)
                {
                    int32_t* context_1 = &g_b81b20;

                    do
                    {
                        int32_t source_1 = *dest_1;

                        if (source_1)
                        {
                            if (Sys_PushStack_8(entity_3) > 1)
                                Sys_ExecuteBytecode_8(1);

                            int32_t data_5;
                            data_5 = Sys_PushStack_8(Sys_OpenFileStream_8(&context_1[2], *(context + 0xdf4), source_1, source_1,
                                source_1, 1, &dest_1[1]));

                            if (data_5 > 1)
                                entity_3 = Sys_ExecuteBytecode_8(0xffffffff);

                            *context_1 = source_1;
                            context_1[1] = &dest_1[1];
                        }

                        context_1 = &context_1[0xb];
                        int32_t data_7 = source_1 * source_1;
                        dest_1 = &dest_1[1] + data_7;
                        flagP1 = flagP1 + 4 + data_7;
                    } while (flagP1 < item_8);
                }
            }

            return Resource_Unload(source_val);
        }
    }

    return result;
}
