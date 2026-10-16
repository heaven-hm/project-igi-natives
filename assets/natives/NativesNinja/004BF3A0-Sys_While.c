#include "004BF3A0-Sys_While.h"
/* 0x004bf3a0 Sys_While full linked: callers=9 callees=0 */
int32_t sub_4bf3a0(void* a1)

{
    int32_t ebx;
    int32_t var_4 = ebx;
    char* edi = *(a1 + 0x1c);
    char* esi = &g_547df0;
    char* eax = edi;
    int32_t eax_2;
    char edx_1;
    char ebx_1;

    while (true)
    {
        edx_1 = *eax;
        ebx_1 = *esi;
        bool c_1 = edx_1 < ebx_1;

        if (edx_1 == ebx_1)
        {
            if (!edx_1)
            {
                eax_2 = 0;
                break;
            }

            edx_1 = eax[1];
            ebx_1 = esi[1];
            c_1 = edx_1 < ebx_1;

            if (edx_1 == ebx_1)
            {
                eax = &eax[2];
                esi = &esi[2];

                if (edx_1)
                    continue;

                eax_2 = 0;
                break;
            }
        }

        eax_2 = eax - eax + 1;
        break;
    }

    if (!eax_2)
        return 1;

    char* esi_1 = &g_547dec;
    char* eax_4 = edi;
    int32_t eax_6;

    while (true)
    {
        edx_1 = *eax_4;
        ebx_1 = *esi_1;
        bool c_3 = edx_1 < ebx_1;

        if (edx_1 == ebx_1)
        {
            if (!edx_1)
            {
                eax_6 = 0;
                break;
            }

            edx_1 = eax_4[1];
            ebx_1 = esi_1[1];
            c_3 = edx_1 < ebx_1;

            if (edx_1 == ebx_1)
            {
                eax_4 = &eax_4[2];
                esi_1 = &esi_1[2];

                if (edx_1)
                    continue;

                eax_6 = 0;
                break;
            }
        }

        eax_6 = eax_4 - eax_4 + 1;
        break;
    }

    if (!eax_6)
        return 2;

    char* esi_2 = &g_547de8;
    char* eax_8 = edi;
    int32_t eax_10;

    while (true)
    {
        edx_1 = *eax_8;
        ebx_1 = *esi_2;
        bool c_5 = edx_1 < ebx_1;

        if (edx_1 == ebx_1)
        {
            if (!edx_1)
            {
                eax_10 = 0;
                break;
            }

            edx_1 = eax_8[1];
            ebx_1 = esi_2[1];
            c_5 = edx_1 < ebx_1;

            if (edx_1 == ebx_1)
            {
                eax_8 = &eax_8[2];
                esi_2 = &esi_2[2];

                if (edx_1)
                    continue;

                eax_10 = 0;
                break;
            }
        }

        eax_10 = eax_8 - eax_8 + 1;
        break;
    }

    if (!eax_10)
        return 3;

    char* esi_3 = "else";
    char* eax_12 = edi;
    int32_t eax_14;

    while (true)
    {
        edx_1 = *eax_12;
        ebx_1 = *esi_3;
        bool c_7 = edx_1 < ebx_1;

        if (edx_1 == ebx_1)
        {
            if (!edx_1)
            {
                eax_14 = 0;
                break;
            }

            edx_1 = eax_12[1];
            ebx_1 = esi_3[1];
            c_7 = edx_1 < ebx_1;

            if (edx_1 == ebx_1)
            {
                eax_12 = &eax_12[2];
                esi_3 = &esi_3[2];

                if (edx_1)
                    continue;

                eax_14 = 0;
                break;
            }
        }

        eax_14 = eax_12 - eax_12 + 1;
        break;
    }

    if (!eax_14)
        return 4;

    char* esi_4 = &g_547ddc;
    char* eax_16 = edi;
    int32_t eax_18;

    while (true)
    {
        edx_1 = *eax_16;
        ebx_1 = *esi_4;
        bool c_9 = edx_1 < ebx_1;

        if (edx_1 == ebx_1)
        {
            if (!edx_1)
            {
                eax_18 = 0;
                break;
            }

            edx_1 = eax_16[1];
            ebx_1 = esi_4[1];
            c_9 = edx_1 < ebx_1;

            if (edx_1 == ebx_1)
            {
                eax_16 = &eax_16[2];
                esi_4 = &esi_4[2];

                if (edx_1)
                    continue;

                eax_18 = 0;
                break;
            }
        }

        eax_18 = eax_16 - eax_16 + 1;
        break;
    }

    if (!eax_18)
        return 5;

    char* esi_5 = "while";
    char* eax_20 = edi;
    int32_t eax_22;

    while (true)
    {
        edx_1 = *eax_20;
        ebx_1 = *esi_5;
        bool c_11 = edx_1 < ebx_1;

        if (edx_1 == ebx_1)
        {
            if (!edx_1)
            {
                eax_22 = 0;
                break;
            }

            edx_1 = eax_20[1];
            ebx_1 = esi_5[1];
            c_11 = edx_1 < ebx_1;

            if (edx_1 == ebx_1)
            {
                eax_20 = &eax_20[2];
                esi_5 = &esi_5[2];

                if (edx_1)
                    continue;

                eax_22 = 0;
                break;
            }
        }

        eax_22 = eax_20 - eax_20 + 1;
        break;
    }

    if (!eax_22)
        return 6;

    char* esi_6 = &g_547dd0;
    char* eax_24 = edi;

    while (true)
    {
        edx_1 = *eax_24;
        ebx_1 = *esi_6;
        bool c_13 = edx_1 < ebx_1;

        if (edx_1 == ebx_1)
        {
            if (!edx_1)
                break;

            edx_1 = eax_24[1];
            ebx_1 = esi_6[1];
            c_13 = edx_1 < ebx_1;

            if (edx_1 == ebx_1)
            {
                eax_24 = &eax_24[2];
                esi_6 = &esi_6[2];

                if (!edx_1)
                    break;

                continue;
            }
        }

        int32_t eax_28 = eax_24 - eax_24 + 1;
        int32_t eax_29 = -(eax_28);
        int32_t eax_30 = eax_29 - eax_29;
        eax_30 &= 0xf9;
        return eax_30 + 7;
    }

    int32_t eax_25 = 0 - 0;
    eax_25 &= 0xf9;
    return eax_25 + 7;
}
