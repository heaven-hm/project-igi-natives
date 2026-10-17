// Original IGI.EXE function: AI_TakeCover_26 (VA 0x00469450; static CFG gate PASS, CFG score 0.897).
#include "AI_TakeCover_26.h"
int32_t AI_TakeCover_26(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4, char* param_5 , void* param_6, int32_t param_7)

{
    int32_t context_val = param_4;
    int32_t item_204 = 0;
    int32_t item_210 = context;
    int32_t item_20c = param_2;
    char item_100 = 0;
    Qhash_Init(1);
    void* source_val = param_6;
    int32_t** data_1 = Sys_OpenFileStream_18(source_val, 0, 0, &g_567c74);
    Qhash_Reset();
    data_1[9] |= 0x40000;
    int32_t data_4 = param_7 * 0xc;
    data_1[3] = param_3;
    data_1[5] = *(data_4 + 0x53f7d0);
    data_1[6] = *(data_4 + 0x53f7d4);
    data_1[7] = *(data_4 + 0x53f7d8);

    while (true)
    {
        int32_t entity_1 = 0;
        char item_200 = 0;

        while (true)
        {
            char data_5 = *param_5;
            param_5 = &param_5[1];

            if (!data_5)
            {
                (&item_200)[entity_1] = 0;
                item_204 = 1;
                break;
            }

            if (data_5 == 0x20)
            {
                (&item_200)[entity_1] = 0x20;
                char item_1ff[0xff];
                item_1ff[entity_1] = 0;
                break;
            }

            (&item_200)[entity_1] = data_5;
            entity_1 += 1;
        }

        int32_t data_6 = Sys_PopStack_18(source_val, &item_200);

        if (context_val <= data_6)
        {
            char* item_224_2 = &item_100;
            item_210 = context;
            char* dest_6 = &item_200;
            item_20c += Sys_ResolveSymbol_18(source_val);
            int32_t i = 0xffffffff;

            while (i)
            {
                bool flag_0_1 = 0 != *dest_6;
                dest_6 = &dest_6[1];
                i -= 1;

                if (!flag_0_1)
                    break;
            }

            int32_t entity_9 = ~i;
            item_100 = 0;
            char* dest_8 = &item_100;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool flag_1_1 = 0 != *dest_8;
                dest_8 = &dest_8[1];
                i_1 -= 1;

                if (!flag_1_1)
                    break;
            }

            int32_t source_4;
            int32_t dest_10;
            dest_10 = memcpy(dest_8 - 1, dest_6 - entity_9, entity_9 & 0xfffffffc);
            context_val = param_4;
            memcpy(dest_10, source_4, entity_9 & 3);
        }
        else
        {
            char* dest_1 = &item_200;
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool flag_2_1 = 0 != *dest_1;
                dest_1 = &dest_1[1];
                i_2 -= 1;

                if (!flag_2_1)
                    break;
            }

            int32_t entity_2 = ~i_2;
            char* dest_3 = &item_100;
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool flag_3_1 = 0 != *dest_3;
                dest_3 = &dest_3[1];
                i_3 -= 1;

                if (!flag_3_1)
                    break;
            }

            int32_t source_2;
            int32_t dest_5;
            dest_5 = memcpy(dest_3 - 1, dest_1 - entity_2, entity_2 & 0xfffffffc);
            memcpy(dest_5, source_2, entity_2 & 3);
        }

        context_val -= data_6;
        Sys_FreeMemory_18(data_1, &item_200);
        data_1[8] = 0xffffffff;
        data_1[1] = item_210;
        data_1[2] = item_20c;
        Sys_CloseFileStream_18(data_1);
        item_210 += data_6;

        if (item_204)
            break;

        source_val = param_6;
    }

    char* item_224_4 = &item_100;
    int32_t result = item_20c + Sys_ResolveSymbol_18(param_6);
    Sys_ReadFileBlock_18(data_1);
    return result;
}
