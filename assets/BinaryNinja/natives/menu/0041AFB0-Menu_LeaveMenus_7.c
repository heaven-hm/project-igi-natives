// IGI native provenance: Menu_LeaveMenus_7 - 0x0041AFB0 - CFG score 85.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041AFB0-Menu_LeaveMenus_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_LeaveMenus_7.h"
int32_t Menu_LeaveMenus_7(int32_t context, int32_t param_2, int32_t param_3 , char* param_4 , void* param_5, int32_t* param_6, int32_t param_7)

{
    int32_t item_20c = context;
    int32_t item_208 = param_2;
    int32_t context_val = param_3;
    int32_t entity_2 = param_6[9] | 0x80000;
    int32_t* i = nullptr;
    char item_100 = 0;
    param_6[9] = entity_2;
    param_6[4] = param_7;

    do
    {
        int32_t entity_3 = 0;
        char item_200 = 0;

        while (true)
        {
            char data_2 = *param_4;
            param_4 = &param_4[1];

            if (!data_2)
            {
                i = 1;
                (&item_200)[entity_3] = 0;
                break;
            }

            if (data_2 == 0x20)
            {
                (&item_200)[entity_3] = 0x20;
                char item_1ff[0xff];
                item_1ff[entity_3] = 0;
                break;
            }

            (&item_200)[entity_3] = data_2;
            entity_3 += 1;
        }

        int32_t data_3 = Sys_PopStack_18(param_5, &item_200);

        if (context_val <= data_3)
        {
            char* item_220_2 = &item_100;
            item_20c = context;
            int32_t j = 0xffffffff;
            item_208 += Sys_ResolveSymbol_18(param_5);
            char* dest_8 = &item_200;

            while (j)
            {
                bool flag_0_1 = 0 != *dest_8;
                dest_8 = &dest_8[1];
                j -= 1;

                if (!flag_0_1)
                    break;
            }

            int32_t entity_9 = ~j;
            int32_t source_5;
            int32_t dest_10;
            dest_10 = memcpy(&item_100, dest_8 - entity_9, entity_9 & 0xfffffffc);
            context_val = param_3 - data_3;
            memcpy(dest_10, source_5, entity_9 & 3);
        }
        else
        {
            char* dest_1 = &item_200;
            int32_t j_1 = 0xffffffff;
            context_val -= data_3;

            while (j_1)
            {
                bool flag_1_1 = 0 != *dest_1;
                dest_1 = &dest_1[1];
                j_1 -= 1;

                if (!flag_1_1)
                    break;
            }

            int32_t entity_4 = ~j_1;
            char* dest_3 = &item_100;
            int32_t j_2 = 0xffffffff;

            while (j_2)
            {
                bool flag_2_1 = 0 != *dest_3;
                dest_3 = &dest_3[1];
                j_2 -= 1;

                if (!flag_2_1)
                    break;
            }

            int32_t source_3;
            int32_t dest_5;
            dest_5 = memcpy(dest_3 - 1, dest_1 - entity_4, entity_4 & 0xfffffffc);
            memcpy(dest_5, source_3, entity_4 & 3);
        }

        Sys_FreeMemory_18(param_6, &item_200);
        param_6[1] = item_20c;
        param_6[2] = item_208;
        Sys_CloseFileStream_18(param_6);
        item_20c += data_3;
    } while (!i);

    char* item_220_4 = &item_100;
    return Sys_ResolveSymbol_18(param_5) + item_208;
}
