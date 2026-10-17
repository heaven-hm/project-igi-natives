// Original IGI.EXE function: FX_RmS (VA 0x00486650; static CFG gate PASS, CFG score 0.952).
#include "FX_RmS.h"
char* FX_RmS(char (** context)[0x16], void* param_2)

{
    char (** context_val)[0x16] = context;
    int32_t dest_val = 0;
    char* result = &context_val[0x10];
    int32_t item_28 = 0;

    while (*result)
    {
        dest_val += 1;
        result = &result[0x102c];

        if (dest_val >= 0x18)
            break;
    }

    if (dest_val != 0x18)
    {
        void* source_1 = param_2;
        int32_t flagP2 = dest_val * 0x102c;
        context_val[dest_val * 0x40b + 0x10] = 1;
        int32_t* data_4;
        int32_t entity_1;
        data_4 = QTask_LinkEventHandler_2(source_1);
        context_val[dest_val * 0x40b + 8] = data_4;
        context_val[dest_val * 0x40b + 9] = 0;
        context_val[dest_val * 0x40b + 0xa] = 0;
        context_val[dest_val * 0x40b + 0x11] = 0;
        context_val[dest_val * 0x40b + 0x12] = 0;
        context_val[dest_val * 0x40b + 0xf] = 0;

        if (*(source_1 + 0xb4))
        {
            char (** source_2)[0x16] = &g_540b60;
            int32_t data_7 = StatusScreen_Get();
            int32_t temp_1 = 0;
            context = &g_540b60;

            while (true)
            {
                char* source_3 = *source_2;
                char* dest_1 = param_2 + 0xb4;

                while (true)
                {
                    char data_9 = *dest_1;
                    entity_1 = data_9;
                    char f1_1 = *source_3;
                    bool c_1 = data_9 < f1_1;

                    if (data_9 == f1_1)
                    {
                        if (!entity_1)
                        {
                            entity_1 = 0;
                            break;
                        }

                        data_9 = dest_1[1];
                        entity_1 = data_9;
                        char f4_1 = source_3[1];
                        c_1 = data_9 < f4_1;

                        if (data_9 == f4_1)
                        {
                            dest_1 = &dest_1[2];
                            source_3 = &source_3[2];

                            if (entity_1)
                                continue;

                            entity_1 = 0;
                            break;
                        }
                    }

                    entity_1 = entity_1 - entity_1 + 1;
                    break;
                }

                if (!entity_1)
                {
                    context_val[dest_val * 0x40b + 0xf] = data_7 + temp_1 * 0x18 + 0x38c;
                    break;
                }

                temp_1 += 1;
                source_2 = &context[1];
                context = source_2;

                if (temp_1 >= 4)
                    break;
            }

            source_1 = param_2;
        }

        Qhash_Init(1);
        void* data_11 = FX_Font4Fnt(context_val, dest_val);
        int32_t* dest_2 = &context_val[dest_val * 0x40b + 0xc];
        context = 3;
        bool flag_1_1;

        do
        {
            *dest_2 = Sys_OpenFileStream_18(data_11, 0, 0, &g_567c74);
            dest_2 = &dest_2[1];
            flag_1_1 = context != 1;
            context -= 1;
        } while (flag_1_1);
        Qhash_Reset();

        if (*(source_1 + 0x1b4))
        {
            int32_t item_20 = 0x3f800000;
            int32_t item_1c_1 = 0x3f800000;
            int32_t item_18_1 = 0;
            Sound_EventTrigger(source_1 + 0x1b4, 1, &item_20);
        }

        void* temp_3 = *(source_1 + 0xb0);
        int32_t i = 0xffffffff;
        void* dest_3 = temp_3;

        while (i)
        {
            bool flag_2_1 = 0 != *dest_3;
            dest_3 += 1;
            i -= 1;

            if (!flag_2_1)
                break;
        }

        int32_t data_16;
        void* entity_9;
        int32_t temp_4;

        if (~i - 1 < 0x80)
            data_16 = Sys_CheckHeap_16(temp_3);

        if (~i - 1 >= 0x80 || !data_16)
        {
            int32_t item_3c_5 = *(source_1 + 0xb0);
            Game_DataSymbolLoad(&context_val[dest_val * 0x40b + 0x13], "RM: %s");
        }
        else
        {
            int32_t data_17 = *(source_1 + 0xb0);
            int32_t item_40_2 = data_17;
            int32_t* data_18 = Resource_Load(data_17, temp_4, entity_9, nullptr);
            int32_t i_1 = 0xffffffff;
            int32_t* dest_4 = data_18;

            while (i_1)
            {
                bool flag_4_1 = 0 != *dest_4;
                dest_4 += 1;
                i_1 -= 1;

                if (!flag_4_1)
                    break;
            }

            int32_t entity_10 = ~i_1;
            int32_t source_6;
            int32_t dest_7;
            dest_7 = memcpy(&context_val[dest_val * 0x40b + 0x13], dest_4 - entity_10, entity_10 & 0xfffffffc);
            memcpy(dest_7, source_6, entity_10 & 3);

            if (!*(param_2 + 0x1c6))
                AI_CheckHearing_26(data_18);

            source_1 = param_2;
        }

        if (*(source_1 + 0x1c6))
        {
            void* dest_8 = &context_val[dest_val * 0x40b + 0x13];
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool flag_5_1 = 0 != *dest_8;
                dest_8 += 1;
                i_2 -= 1;

                if (!flag_5_1)
                    break;
            }

            context_val[dest_val * 0x40b + 0xb] = ~i_2 - 1 + flagP2 + context_val + 0x4c;
            return ~i_2 - 1 + flagP2 + context_val + 0x4c;
        }

        result = &context_val[dest_val * 0x40b + 0x13];
        context_val[dest_val * 0x40b + 0xb] = result;
    }

    return result;
}
