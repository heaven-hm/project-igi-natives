// Original IGI.EXE function: GlobalLight_Process (VA 0x005282C0; static CFG gate PASS, CFG score 1.000).
#include "GlobalLight_Process.h"
int32_t GlobalLight_Process(void* context)

{
    void* source_val = context;

    if (*(source_val + 0x1a0))
    {
        if (!*(source_val + 0xd0))
        {
            int32_t* data_2 = source_val + 0x8c;
            int32_t i_3 = 5;
            int32_t i;

            do
            {
                *data_2 = 0xffffffff;
                data_2 = &data_2[0x11];
                i = i_3;
                i_3 -= 1;
            } while (i != 1);
        }
        else
        {
            int32_t i_1 = 0;
            int32_t* entity_1 = source_val + 0x8c;

            do
            {
                int32_t temp_1 = i_1 - 1;
                i_1 += 1;
                *entity_1 = temp_1;
                entity_1 = &entity_1[0x11];
            } while (i_1 < 5);
        }

        *(source_val + 0x1a0) = 0;
    }

    if (!g_a84380)
        g_a84380 = source_val;

    long double fpu7 = *(source_val + 0x44);
    *(source_val + 0x48) = fpu7;
    g_a83ea0 = fpu7;
    void* data_4 = *(source_val + 0x14);

    if (data_4 && *(data_4 + 0x1c) == g_a8408c)
    {
        void* dest_1 = *(source_val + 0x14);
        uint32_t data_7 = Script_ParseEnumReal32_8();
        int32_t temp_2 = 0;
        temp_2 = *(dest_1 + 0x1c);
        (*(((data_7 * 0x180 + temp_2) << 2) + &g_a96ae0))(dest_1, source_val);
    }

    context = 5;
    bool flag_0_1;

    do
    {
        int32_t* data_9 = source_val + 0x4c;
        int32_t i_4 = 5;
        int32_t i_2;

        do
        {
            int32_t entity_5 = data_9[0x10];

            if (entity_5 >= 0 && entity_5 < 5)
            {
                void* entity_6 = source_val + entity_5 * 0x44;
                *data_9 = *(entity_6 + 0x4c);
                data_9[1] = *(entity_6 + 0x50);
                data_9[2] = *(entity_6 + 0x54);
                data_9[3] = *(entity_6 + 0x58);
                data_9[4] = *(entity_6 + 0x5c);
                data_9[5] = *(entity_6 + 0x60);
                data_9[6] = *(entity_6 + 0x64);
            }

            data_9 = &data_9[0x11];
            i_2 = i_4;
            i_4 -= 1;
        } while (i_2 != 1);
        flag_0_1 = context != 1;
        context -= 1;
    } while (flag_0_1);
    int32_t result = g_a84380;

    if (result == source_val)
        g_a84380 = 0;

    return result;
}
