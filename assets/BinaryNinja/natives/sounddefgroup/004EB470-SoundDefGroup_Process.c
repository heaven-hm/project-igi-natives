// Original IGI.EXE function: SoundDefGroup_Process (VA 0x004EB470; static CFG gate FAIL, CFG score 0.733).
#include "SoundDefGroup_Process.h"
int32_t SoundDefGroup_Process(void* context, int32_t* param_2)

{
    int32_t i = 0;

    if (param_2[1] > 0)
    {
        do
        {
            void* dest_1 = &g_54da30;
            int32_t j = 0xffffffff;

            while (j)
            {
                bool flag_2_1 = 0 != *dest_1;
                dest_1 += 1;
                j -= 1;

                if (!flag_2_1)
                    break;
            }

            int32_t entity_1 = ~j;
            int32_t dest_3 = *param_2;
            int32_t j_1 = 0xffffffff;

            while (j_1)
            {
                bool flag_3_1 = 0 != *dest_3;
                dest_3 += 1;
                j_1 -= 1;

                if (!flag_3_1)
                    break;
            }

            int32_t source_2;
            int32_t dest_5;
            dest_5 = memcpy(dest_3 - 1, dest_1 - entity_1, entity_1 & 0xfffffffc);
            i += 1;
            memcpy(dest_5, source_2, entity_1 & 3);
        } while (i < param_2[1]);
    }

    void* item_414 = context + 0x22;
    char* item_418 = "DefineGroup";
    void item_400;
    Game_DataSymbolLoad(&item_400, "%s("%s"");
    void* dest_6 = &item_400;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool flag_0_1 = 0 != *dest_6;
        dest_6 += 1;
        i_1 -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_6 = ~i_1;
    int32_t dest_8 = *param_2;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool flag_1_1 = 0 != *dest_8;
        dest_8 += 1;
        i_2 -= 1;

        if (!flag_1_1)
            break;
    }

    int32_t source_4;
    int32_t dest_10;
    dest_10 = memcpy(dest_8 - 1, dest_6 - entity_6, entity_6 & 0xfffffffc);
    memcpy(dest_10, source_4, entity_6 & 3);
    param_2[1] += 1;
    int32_t* data_2 = *(context + 8);

    if (*data_2 && data_2)
    {
        void* dest_11 = &g_54db5c;
        int32_t i_3 = 0xffffffff;

        while (i_3)
        {
            bool flag_5_1 = 0 != *dest_11;
            dest_11 += 1;
            i_3 -= 1;

            if (!flag_5_1)
                break;
        }

        int32_t entity_11 = ~i_3;
        int32_t dest_13 = *param_2;
        int32_t i_4 = 0xffffffff;

        while (i_4)
        {
            bool flag_6_1 = 0 != *dest_13;
            dest_13 += 1;
            i_4 -= 1;

            if (!flag_6_1)
                break;
        }

        int32_t source_6;
        int32_t dest_15;
        dest_15 = memcpy(dest_13 - 1, dest_11 - entity_11, entity_11 & 0xfffffffc);
        memcpy(dest_15, source_6, entity_11 & 3);
        int32_t* i_5 = *(context + 8);

        if (*i_5 && i_5)
        {
            int32_t entity_16 = g_afa7e0;

            do
            {
                int32_t* temp_4 = *i_5;
                void* data_6;

                if (!temp_4)
                    data_6 = nullptr;
                else
                {
                    int32_t data_3 = *temp_4;
                    int32_t data_4 = -(data_3);
                    data_6 = (data_4 - data_4) & temp_4;
                }

                *((entity_16 << 2) + &g_afa6e0) = data_6;
                g_afa7e0 = entity_16 + 1;
                uint32_t data_8 = SoundSys_SetMasterVolume_5();
                int32_t entity_18 = 0;
                entity_18 = i_5[7];
                int32_t data_12 = *(((data_8 * 0x180 + entity_18) << 2) + &g_a96ae0);

                if (data_12)
                    data_12(i_5, param_2);

                entity_16 = g_afa7e0 - 1;
                g_afa7e0 = entity_16;
                i_5 = *((entity_16 << 2) + &g_afa6e0);
            } while (i_5);
        }
    }

    int32_t data_13 = param_2[1];
    param_2[1] = data_13 - 1;
    char* dest_16;

    if (data_13 == 1)
        dest_16 = ");\r\n";
    else
    {
        void* entity_20 = *(*(context + 0x14) + 0x10);
        int32_t data_15 = *(entity_20 + 4);
        int32_t data_16 = -(data_15);

        dest_16 = context == ((data_16 - data_16) & entity_20) ? &g_547a40 : "),\r\n";
    }

    int32_t i_6 = 0xffffffff;

    while (i_6)
    {
        bool flag_7_1 = 0 != *dest_16;
        dest_16 = &dest_16[1];
        i_6 -= 1;

        if (!flag_7_1)
            break;
    }

    int32_t entity_21 = ~i_6;
    int32_t dest_18 = *param_2;
    int32_t i_7 = 0xffffffff;

    while (i_7)
    {
        bool flag_8_1 = 0 != *dest_18;
        dest_18 += 1;
        i_7 -= 1;

        if (!flag_8_1)
            break;
    }

    int32_t source_8;
    int32_t dest_20;
    dest_20 = memcpy(dest_18 - 1, dest_16 - entity_21, entity_21 & 0xfffffffc);
    memcpy(dest_20, source_8, entity_21 & 3);
    return 0;
}
