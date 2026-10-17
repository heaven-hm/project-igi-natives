// Original IGI.EXE function: SoundDefSound_Process (VA 0x004E8910; static CFG gate FAIL, CFG score 0.714).
#include "SoundDefSound_Process.h"
int32_t SoundDefSound_Process(void* context, int32_t* param_2)

{
    int32_t* context_val = param_2;
    int32_t i = 0;

    if (context_val[1] > 0)
    {
        do
        {
            void* dest_1 = &g_54da30;
            int32_t j = 0xffffffff;

            while (j)
            {
                bool flag_1_1 = 0 != *dest_1;
                dest_1 += 1;
                j -= 1;

                if (!flag_1_1)
                    break;
            }

            int32_t entity_1 = ~j;
            int32_t dest_3 = *context_val;
            int32_t j_1 = 0xffffffff;

            while (j_1)
            {
                bool flag_2_1 = 0 != *dest_3;
                dest_3 += 1;
                j_1 -= 1;

                if (!flag_2_1)
                    break;
            }

            context_val = param_2;
            int32_t source_2;
            int32_t dest_5;
            dest_5 = memcpy(dest_3 - 1, dest_1 - entity_1, entity_1 & 0xfffffffc);
            i += 1;
            memcpy(dest_5, source_2, entity_1 & 3);
        } while (i < context_val[1]);
    }

    char* data_3 = "TRUE";

    if (!*(context + 0xdc))
        data_3 = "FALSE";

    char* item_41c = data_3;
    double item_424 = *(context + 0x124);
    int32_t item_428 = *(context + 0xc0);
    int32_t item_42c = *(context + 0xbc);
    int32_t item_430 = *(context + 0xb8);
    double item_438 = *(context + 0xd4);
    double item_440 = *(context + 0xd0);
    double item_448 = *(context + 0xc4);
    int32_t item_44c = *(context + 0xb4);
    int32_t item_450 = *(context + 0xb0);
    int32_t item_454 = *(context + 0xac);
    int32_t item_458 = *(context + 0xa8);
    int32_t item_45c = *(context + 0xa4);
    int32_t item_460 = *(context + 0xa0);
    void* item_464 = context + 0xff;
    void* item_468 = context + 0xdf;
    char* item_46c = "DefineSound";
    void item_408;
    Game_DataSymbolLoad(&item_408,
        "%s("%s", "%s", %8.08f, %8.08f, %8.08f, %8.08f, %8.08f, %8.08f, %d, %d, %d, %8.08f, %s");
    void* dest_6 = &item_408;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool flag_3_1 = 0 != *dest_6;
        dest_6 += 1;
        i_1 -= 1;

        if (!flag_3_1)
            break;
    }

    int32_t entity_10 = ~i_1;
    int32_t dest_8 = *param_2;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool flag_4_1 = 0 != *dest_8;
        dest_8 += 1;
        i_2 -= 1;

        if (!flag_4_1)
            break;
    }

    int32_t source_4;
    int32_t dest_10;
    dest_10 = memcpy(dest_8 - 1, dest_6 - entity_10, entity_10 & 0xfffffffc);
    memcpy(dest_10, source_4, entity_10 & 3);
    char* dest_11;

    if (!param_2[1])
        dest_11 = ");\r\n";
    else
    {
        void* entity_16 = *(*(context + 0x14) + 0x10);
        int32_t data_9 = *(entity_16 + 4);
        int32_t data_10 = -(data_9);

        dest_11 = context == ((data_10 - data_10) & entity_16) ? &g_547a40 : "),\r\n";
    }

    int32_t i_3 = 0xffffffff;

    while (i_3)
    {
        bool flag_5_1 = 0 != *dest_11;
        dest_11 = &dest_11[1];
        i_3 -= 1;

        if (!flag_5_1)
            break;
    }

    int32_t entity_17 = ~i_3;
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
    dest_15 = memcpy(dest_13 - 1, dest_11 - entity_17, entity_17 & 0xfffffffc);
    memcpy(dest_15, source_6, entity_17 & 3);
    return 0;
}
