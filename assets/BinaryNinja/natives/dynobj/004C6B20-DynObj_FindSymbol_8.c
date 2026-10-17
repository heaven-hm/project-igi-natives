// Original IGI.EXE function: DynObj_FindSymbol_8 (VA 0x004C6B20; static CFG gate PASS, CFG score 1.000).
#include "DynObj_FindSymbol_8.h"
int32_t* DynObj_FindSymbol_8(void* context, int32_t param_2, int32_t param_3, int32_t* param_4)

{
    void* temp_val = *param_4;
    void* item_14 = temp_val;

    if (param_2 <= param_3)
    {
        *param_4 = temp_val;
        return param_4;
    }

    void* flagP = context;
    int32_t data_20;

    do
    {
        int32_t context_5 = *(temp_val + 4);
        int32_t dest_1 = *(temp_val + 0x2c);
        void* source_1 = *(temp_val + 8);
        int32_t item_c_1 = dest_1;
        int16_t data_8;

        if (dest_1)
        {
            void* temp_1 = *(source_1 + (context_5 << 2) + 0xc);
            int32_t entity_4 = 0x8000;
            void* i = *(temp_1 + 0x2c);

            do
            {
                dest_1 = *(i + 0x5c);
                i = *(i + 0x58);
                entity_4 |= dest_1;
            } while (i);

            *(temp_1 + 0x38) = entity_4;
            int32_t temp_2 = 0x8000;
            int32_t* entity_5 = source_1 + 0xc;
            context = 8;
            bool flag_2_1;

            do
            {
                void* data_9 = *entity_5;

                if (data_9)
                {
                    dest_1 = *(data_9 + 0x3a);
                    dest_1 |= *(data_9 + 0x38);
                    temp_2 |= dest_1;
                }

                entity_5 = &entity_5[1];
                flag_2_1 = context != 1;
                context -= 1;
            } while (flag_2_1);
            *(source_1 + 0x3a) = temp_2;
            temp_val = item_14;
        }
        else
        {
            context = 0x8000;
            int32_t item_14_1 = 8;
            *(*(source_1 + (context_5 << 2) + 0xc) + 0x38) = 0x8000;
            int32_t* entity_3 = source_1 + 0xc;
            bool flag_1_1;

            do
            {
                void* data_3 = *entity_3;

                if (data_3)
                {
                    dest_1 = *(data_3 + 0x3a);
                    dest_1 |= *(data_3 + 0x38);
                    context |= dest_1;
                }

                entity_3 = &entity_3[1];
                flag_1_1 = item_14_1 != 1;
                item_14_1 -= 1;
            } while (flag_1_1);
            data_8 = context;
            *(source_1 + 0x3a) = data_8;
        }

        data_8 = *(temp_val + 0x30);

        if (!data_8 && !item_c_1)
        {
            int32_t* data_13 = *(*(source_1 + (context_5 << 2) + 0xc) + 0x3c);

            if (data_13)
                DynCubeObj_Action(data_13);

            int32_t* dest_2 = *(flagP + 0xd14);
            int32_t temp_4 = *(dest_2 + *(source_1 + (context_5 << 2) + 0xc));
            int32_t data_15 = *(flagP + 0xd08) - 1;
            *(flagP + 0xd08) = data_15;

            if (temp_4 != data_15)
            {
                int32_t entity_7 = *(flagP + 0xd04);
                int32_t data_18 = *(entity_7 + (data_15 << 2)) * *(flagP + 0xd10) + *(flagP + 0xd00);
                void* context_2 = *(entity_7 + (temp_4 << 2));
                int32_t dest_3 = *(dest_2 + data_18);
                *(entity_7 + (temp_4 << 2)) = *(entity_7 + (dest_3 << 2));
                *(*(flagP + 0xd04) + (dest_3 << 2)) = context_2;
                *(*(flagP + 0xd14) + data_18) = temp_4;
            }

            *(source_1 + (context_5 << 2) + 0xc) = 0;
            *(source_1 + 0x30) &= ~(1 << (context_5 & 0x1f));
        }

        data_20 = param_3 << 1;
        temp_val = source_1;
        item_14 = temp_val;
        param_3 = data_20;
    } while (param_2 > data_20);
    *param_4 = temp_val;
    return param_4;
}
