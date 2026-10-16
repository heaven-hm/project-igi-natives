#include "004E8910-SoundDefSound_Process.h"
/* 0x004e8910 SoundDefSound_Process full linked: callers=0 callees=7 */
int32_t sub_4e8910(void* a1, int32_t* a2)

{
    int32_t* ebx = a2;
    int32_t i = 0;

    if (ebx[1] > 0)
    {
        do
        {
            void* edi_1 = &g_54da30;
            int32_t j = 0xffffffff;

            while (j)
            {
                bool cond:1_1 = 0 != *edi_1;
                edi_1 += 1;
                j -= 1;

                if (!cond:1_1)
                    break;
            }

            int32_t ecx_1 = ~j;
            int32_t edi_3 = *ebx;
            int32_t j_1 = 0xffffffff;

            while (j_1)
            {
                bool cond:2_1 = 0 != *edi_3;
                edi_3 += 1;
                j_1 -= 1;

                if (!cond:2_1)
                    break;
            }

            ebx = a2;
            int32_t esi_2;
            int32_t edi_5;
            edi_5 = memcpy(edi_3 - 1, edi_1 - ecx_1, ecx_1 & 0xfffffffc);
            i += 1;
            memcpy(edi_5, esi_2, ecx_1 & 3);
        } while (i < ebx[1]);
    }

    char* eax_3 = "TRUE";

    if (!*(a1 + 0xdc))
        eax_3 = "FALSE";

    char* var_41c = eax_3;
    double var_424 = *(a1 + 0x124);
    int32_t var_428 = *(a1 + 0xc0);
    int32_t var_42c = *(a1 + 0xbc);
    int32_t var_430 = *(a1 + 0xb8);
    double var_438 = *(a1 + 0xd4);
    double var_440 = *(a1 + 0xd0);
    double var_448 = *(a1 + 0xc4);
    int32_t var_44c = *(a1 + 0xb4);
    int32_t var_450 = *(a1 + 0xb0);
    int32_t var_454 = *(a1 + 0xac);
    int32_t var_458 = *(a1 + 0xa8);
    int32_t var_45c = *(a1 + 0xa4);
    int32_t var_460 = *(a1 + 0xa0);
    void* var_464 = a1 + 0xff;
    void* var_468 = a1 + 0xdf;
    char* var_46c = "DefineSound";
    void var_408;
    Game_DataSymbolLoad(&var_408,
        "%s("%s", "%s", %8.08f, %8.08f, %8.08f, %8.08f, %8.08f, %8.08f, %d, %d, %d, %8.08f, %s");
    void* edi_6 = &var_408;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:3_1 = 0 != *edi_6;
        edi_6 += 1;
        i_1 -= 1;

        if (!cond:3_1)
            break;
    }

    int32_t ecx_10 = ~i_1;
    int32_t edi_8 = *a2;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond:4_1 = 0 != *edi_8;
        edi_8 += 1;
        i_2 -= 1;

        if (!cond:4_1)
            break;
    }

    int32_t esi_4;
    int32_t edi_10;
    edi_10 = memcpy(edi_8 - 1, edi_6 - ecx_10, ecx_10 & 0xfffffffc);
    memcpy(edi_10, esi_4, ecx_10 & 3);
    char* edi_11;

    if (!a2[1])
        edi_11 = ");\r\n";
    else
    {
        void* ecx_16 = *(*(a1 + 0x14) + 0x10);
        int32_t eax_9 = *(ecx_16 + 4);
        int32_t eax_10 = -(eax_9);

        edi_11 = a1 == ((eax_10 - eax_10) & ecx_16) ? &g_547a40 : "),\r\n";
    }

    int32_t i_3 = 0xffffffff;

    while (i_3)
    {
        bool cond:5_1 = 0 != *edi_11;
        edi_11 = &edi_11[1];
        i_3 -= 1;

        if (!cond:5_1)
            break;
    }

    int32_t ecx_17 = ~i_3;
    int32_t edi_13 = *a2;
    int32_t i_4 = 0xffffffff;

    while (i_4)
    {
        bool cond:6_1 = 0 != *edi_13;
        edi_13 += 1;
        i_4 -= 1;

        if (!cond:6_1)
            break;
    }

    int32_t esi_6;
    int32_t edi_15;
    edi_15 = memcpy(edi_13 - 1, edi_11 - ecx_17, ecx_17 & 0xfffffffc);
    memcpy(edi_15, esi_6, ecx_17 & 3);
    return 0;
}
