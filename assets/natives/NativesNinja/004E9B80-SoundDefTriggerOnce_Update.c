#include "004E9B80-SoundDefTriggerOnce_Update.h"
/* 0x004e9b80 SoundDefTriggerOnce_Update full linked: callers=0 callees=7 */
int32_t sub_4e9b80(void* a1, int32_t* a2)

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
                bool cond:0_1 = 0 != *edi_1;
                edi_1 += 1;
                j -= 1;

                if (!cond:0_1)
                    break;
            }

            int32_t ecx_1 = ~j;
            int32_t edi_3 = *ebx;
            int32_t j_1 = 0xffffffff;

            while (j_1)
            {
                bool cond:1_1 = 0 != *edi_3;
                edi_3 += 1;
                j_1 -= 1;

                if (!cond:1_1)
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

    char* ecx_6 = "TRUE";

    if (!*(a1 + 0xe1))
        ecx_6 = "FALSE";

    char* eax_3 = "TRUE";

    if (!*(a1 + 0xe0))
        eax_3 = "FALSE";

    char* var_41c = ecx_6;
    char* var_420 = eax_3;
    int32_t var_424 = *(a1 + 0xdc);
    int32_t var_428 = *(a1 + 0xd8);
    int32_t var_42c = *(a1 + 0xd4);
    int32_t var_430 = *(a1 + 0xd0);
    double var_438 = *(a1 + 0x12c);
    double var_440 = *(a1 + 0xc8);
    double var_448 = *(a1 + 0xc4);
    double var_450 = *(a1 + 0xb8);
    int32_t var_454 = *(a1 + 0xb4);
    int32_t var_458 = *(a1 + 0xb0);
    int32_t var_45c = *(a1 + 0xac);
    int32_t var_460 = *(a1 + 0xa8);
    int32_t var_464 = *(a1 + 0xa4);
    int32_t var_468 = *(a1 + 0xa0);
    void* var_46c = a1 + 0x103;
    void* var_470 = a1 + 0xe3;
    char* var_474 = "DefineTriggerOnce";
    void var_408;
    Game_DataSymbolLoad(&var_408,
        "%s("%s", "%s", %8.08f, %8.08f, %8.08f, %8.08f, %8.08f, %8.08f, %8.08f, %d, %d, %d, %d, %s, %s");
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

    int32_t ecx_11 = ~i_1;
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
    edi_10 = memcpy(edi_8 - 1, edi_6 - ecx_11, ecx_11 & 0xfffffffc);
    memcpy(edi_10, esi_4, ecx_11 & 3);
    char* edi_11;

    if (!a2[1])
        edi_11 = ");\r\n";
    else
    {
        void* ecx_17 = *(*(a1 + 0x14) + 0x10);
        int32_t eax_10 = *(ecx_17 + 4);
        int32_t eax_11 = -(eax_10);

        edi_11 = a1 == ((eax_11 - eax_11) & ecx_17) ? &g_547a40 : "),\r\n";
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

    int32_t ecx_18 = ~i_3;
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
    edi_15 = memcpy(edi_13 - 1, edi_11 - ecx_18, ecx_18 & 0xfffffffc);
    memcpy(edi_15, esi_6, ecx_18 & 3);
    return 0;
}
