// Original IGI.EXE function: Sys_While (VA 0x004BF3A0; static CFG gate PASS, CFG score 1.000).
#include "Sys_While.h"
int32_t Sys_While(void* context)

{
    int32_t context_val;
    int32_t item_4 = context_val;
    char* dest_val = *(context + 0x1c);
    char* source_val = &g_547df0;
    char* data_val = dest_val;
    int32_t data_2;
    char temp_1;
    char context_1;

    while (true)
    {
        temp_1 = *data_val;
        context_1 = *source_val;
        bool c_1 = temp_1 < context_1;

        if (temp_1 == context_1)
        {
            if (!temp_1)
            {
                data_2 = 0;
                break;
            }

            temp_1 = data_val[1];
            context_1 = source_val[1];
            c_1 = temp_1 < context_1;

            if (temp_1 == context_1)
            {
                data_val = &data_val[2];
                source_val = &source_val[2];

                if (temp_1)
                    continue;

                data_2 = 0;
                break;
            }
        }

        data_2 = data_val - data_val + 1;
        break;
    }

    if (!data_2)
        return 1;

    char* source_1 = &g_547dec;
    char* data_4 = dest_val;
    int32_t data_6;

    while (true)
    {
        temp_1 = *data_4;
        context_1 = *source_1;
        bool c_3 = temp_1 < context_1;

        if (temp_1 == context_1)
        {
            if (!temp_1)
            {
                data_6 = 0;
                break;
            }

            temp_1 = data_4[1];
            context_1 = source_1[1];
            c_3 = temp_1 < context_1;

            if (temp_1 == context_1)
            {
                data_4 = &data_4[2];
                source_1 = &source_1[2];

                if (temp_1)
                    continue;

                data_6 = 0;
                break;
            }
        }

        data_6 = data_4 - data_4 + 1;
        break;
    }

    if (!data_6)
        return 2;

    char* source_2 = &g_547de8;
    char* data_8 = dest_val;
    int32_t data_10;

    while (true)
    {
        temp_1 = *data_8;
        context_1 = *source_2;
        bool c_5 = temp_1 < context_1;

        if (temp_1 == context_1)
        {
            if (!temp_1)
            {
                data_10 = 0;
                break;
            }

            temp_1 = data_8[1];
            context_1 = source_2[1];
            c_5 = temp_1 < context_1;

            if (temp_1 == context_1)
            {
                data_8 = &data_8[2];
                source_2 = &source_2[2];

                if (temp_1)
                    continue;

                data_10 = 0;
                break;
            }
        }

        data_10 = data_8 - data_8 + 1;
        break;
    }

    if (!data_10)
        return 3;

    char* source_3 = "else";
    char* data_12 = dest_val;
    int32_t data_14;

    while (true)
    {
        temp_1 = *data_12;
        context_1 = *source_3;
        bool c_7 = temp_1 < context_1;

        if (temp_1 == context_1)
        {
            if (!temp_1)
            {
                data_14 = 0;
                break;
            }

            temp_1 = data_12[1];
            context_1 = source_3[1];
            c_7 = temp_1 < context_1;

            if (temp_1 == context_1)
            {
                data_12 = &data_12[2];
                source_3 = &source_3[2];

                if (temp_1)
                    continue;

                data_14 = 0;
                break;
            }
        }

        data_14 = data_12 - data_12 + 1;
        break;
    }

    if (!data_14)
        return 4;

    char* source_4 = &g_547ddc;
    char* data_16 = dest_val;
    int32_t data_18;

    while (true)
    {
        temp_1 = *data_16;
        context_1 = *source_4;
        bool c_9 = temp_1 < context_1;

        if (temp_1 == context_1)
        {
            if (!temp_1)
            {
                data_18 = 0;
                break;
            }

            temp_1 = data_16[1];
            context_1 = source_4[1];
            c_9 = temp_1 < context_1;

            if (temp_1 == context_1)
            {
                data_16 = &data_16[2];
                source_4 = &source_4[2];

                if (temp_1)
                    continue;

                data_18 = 0;
                break;
            }
        }

        data_18 = data_16 - data_16 + 1;
        break;
    }

    if (!data_18)
        return 5;

    char* source_5 = "while";
    char* data_20 = dest_val;
    int32_t data_22;

    while (true)
    {
        temp_1 = *data_20;
        context_1 = *source_5;
        bool c_11 = temp_1 < context_1;

        if (temp_1 == context_1)
        {
            if (!temp_1)
            {
                data_22 = 0;
                break;
            }

            temp_1 = data_20[1];
            context_1 = source_5[1];
            c_11 = temp_1 < context_1;

            if (temp_1 == context_1)
            {
                data_20 = &data_20[2];
                source_5 = &source_5[2];

                if (temp_1)
                    continue;

                data_22 = 0;
                break;
            }
        }

        data_22 = data_20 - data_20 + 1;
        break;
    }

    if (!data_22)
        return 6;

    char* source_6 = &g_547dd0;
    char* data_24 = dest_val;

    while (true)
    {
        temp_1 = *data_24;
        context_1 = *source_6;
        bool c_13 = temp_1 < context_1;

        if (temp_1 == context_1)
        {
            if (!temp_1)
                break;

            temp_1 = data_24[1];
            context_1 = source_6[1];
            c_13 = temp_1 < context_1;

            if (temp_1 == context_1)
            {
                data_24 = &data_24[2];
                source_6 = &source_6[2];

                if (!temp_1)
                    break;

                continue;
            }
        }

        int32_t data_28 = data_24 - data_24 + 1;
        int32_t data_29 = -(data_28);
        int32_t data_30 = data_29 - data_29;
        data_30 &= 0xf9;
        return data_30 + 7;
    }

    int32_t data_25 = 0 - 0;
    data_25 &= 0xf9;
    return data_25 + 7;
}
