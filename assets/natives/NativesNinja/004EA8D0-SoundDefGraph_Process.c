#include "004EA8D0-SoundDefGraph_Process.h"
/* 0x004ea8d0 SoundDefGraph_Process full linked: callers=0 callees=13 */
int32_t sub_4ea8d0(void* a1, int32_t* a2)

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
                bool cond:2_1 = 0 != *edi_1;
                edi_1 += 1;
                j -= 1;

                if (!cond:2_1)
                    break;
            }

            int32_t ecx_1 = ~j;
            int32_t edi_3 = *ebx;
            int32_t j_1 = 0xffffffff;

            while (j_1)
            {
                bool cond:3_1 = 0 != *edi_3;
                edi_3 += 1;
                j_1 -= 1;

                if (!cond:3_1)
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

    int32_t var_424 = *(a1 + 0xe0);
    int32_t var_428 = *(a1 + 0xe4);
    int32_t var_42c = *(a1 + 0xdc);
    int32_t var_430 = *(a1 + 0xd8);
    double var_438 = *(a1 + 0xcc);
    double var_440 = *(a1 + 0xc8);
    double var_448 = *(a1 + 0xb8);
    int32_t var_44c = *(a1 + 0xb4);
    int32_t var_450 = *(a1 + 0xb0);
    int32_t var_454 = *(a1 + 0xac);
    int32_t var_458 = *(a1 + 0xa8);
    int32_t var_45c = *(a1 + 0xa4);
    int32_t var_460 = *(a1 + 0xa0);
    void* var_464 = a1 + 0x160;
    void* var_468 = a1 + 0x140;
    char* var_46c = "DefineGraph";
    void var_408;
    Game_DataSymbolLoad(&var_408,
        "%s("%s", "%s", %8.08f, %8.08f, %8.08f, %8.08f, %8.08f, %8.08f, %d, %d, %d, %d");
    void* edi_6 = &var_408;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:0_1 = 0 != *edi_6;
        edi_6 += 1;
        i_1 -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t var_410_2 = 0xb;
    int32_t ecx_10 = ~i_1;
    int32_t edi_8 = *a2;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond:1_1 = 0 != *edi_8;
        edi_8 += 1;
        i_2 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t esi_4;
    int32_t edi_10;
    edi_10 = memcpy(edi_8 - 1, edi_6 - ecx_10, ecx_10 & 0xfffffffc);
    memcpy(edi_10, esi_4, ecx_10 & 3);
    float* var_40c = a1 + 0xe8;
    bool cond:6_1;

    do
    {
        var_428 = *var_40c;
        Game_DataSymbolLoad(&var_408, ", %8.08f");
        void* edi_11 = &var_408;
        int32_t i_3 = 0xffffffff;

        while (i_3)
        {
            bool cond:4_1 = 0 != *edi_11;
            edi_11 += 1;
            i_3 -= 1;

            if (!cond:4_1)
                break;
        }

        int32_t ecx_16 = ~i_3;
        int32_t edi_13 = *a2;
        int32_t i_4 = 0xffffffff;

        while (i_4)
        {
            bool cond:5_1 = 0 != *edi_13;
            edi_13 += 1;
            i_4 -= 1;

            if (!cond:5_1)
                break;
        }

        int32_t esi_6;
        int32_t edi_15;
        edi_15 = memcpy(edi_13 - 1, edi_11 - ecx_16, ecx_16 & 0xfffffffc);
        memcpy(edi_15, esi_6, ecx_16 & 3);
        cond:6_1 = var_410_2 != 1;
        var_40c = &var_40c[1];
        var_410_2 -= 1;
    } while (cond:6_1);
    int32_t var_410_3 = 0xb;
    float* var_40c_1 = a1 + 0x114;
    bool cond:9_1;

    do
    {
        var_428 = *var_40c_1;
        Game_DataSymbolLoad(&var_408, ", %8.08f");
        void* edi_16 = &var_408;
        int32_t i_5 = 0xffffffff;

        while (i_5)
        {
            bool cond:7_1 = 0 != *edi_16;
            edi_16 += 1;
            i_5 -= 1;

            if (!cond:7_1)
                break;
        }

        int32_t ecx_24 = ~i_5;
        int32_t edi_18 = *a2;
        int32_t i_6 = 0xffffffff;

        while (i_6)
        {
            bool cond:8_1 = 0 != *edi_18;
            edi_18 += 1;
            i_6 -= 1;

            if (!cond:8_1)
                break;
        }

        int32_t esi_8;
        int32_t edi_20;
        edi_20 = memcpy(edi_18 - 1, edi_16 - ecx_24, ecx_24 & 0xfffffffc);
        memcpy(edi_20, esi_8, ecx_24 & 3);
        cond:9_1 = var_410_3 != 1;
        var_40c_1 = &var_40c_1[1];
        var_410_3 -= 1;
    } while (cond:9_1);
    char* edi_21;

    if (!a2[1])
        edi_21 = ");\r\n";
    else
    {
        void* ecx_32 = *(*(a1 + 0x14) + 0x10);
        int32_t eax_15 = *(ecx_32 + 4);
        int32_t eax_16 = -(eax_15);

        edi_21 = a1 == ((eax_16 - eax_16) & ecx_32) ? &g_547a40 : "),\r\n";
    }

    int32_t i_7 = 0xffffffff;

    while (i_7)
    {
        bool cond:10_1 = 0 != *edi_21;
        edi_21 = &edi_21[1];
        i_7 -= 1;

        if (!cond:10_1)
            break;
    }

    int32_t ecx_33 = ~i_7;
    int32_t edi_23 = *a2;
    int32_t i_8 = 0xffffffff;

    while (i_8)
    {
        bool cond:11_1 = 0 != *edi_23;
        edi_23 += 1;
        i_8 -= 1;

        if (!cond:11_1)
            break;
    }

    int32_t esi_10;
    int32_t edi_25;
    edi_25 = memcpy(edi_23 - 1, edi_21 - ecx_33, ecx_33 & 0xfffffffc);
    memcpy(edi_25, esi_10, ecx_33 & 3);
    return 0;
}
