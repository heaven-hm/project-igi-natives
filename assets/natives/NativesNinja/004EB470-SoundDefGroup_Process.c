#include "004EB470-SoundDefGroup_Process.h"
/* 0x004eb470 SoundDefGroup_Process full linked: callers=0 callees=10 */
int32_t sub_4eb470(void* a1, int32_t* a2)

{
    int32_t i = 0;

    if (a2[1] > 0)
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
            int32_t edi_3 = *a2;
            int32_t j_1 = 0xffffffff;

            while (j_1)
            {
                bool cond:3_1 = 0 != *edi_3;
                edi_3 += 1;
                j_1 -= 1;

                if (!cond:3_1)
                    break;
            }

            int32_t esi_2;
            int32_t edi_5;
            edi_5 = memcpy(edi_3 - 1, edi_1 - ecx_1, ecx_1 & 0xfffffffc);
            i += 1;
            memcpy(edi_5, esi_2, ecx_1 & 3);
        } while (i < a2[1]);
    }

    void* var_414 = a1 + 0x22;
    char* var_418 = "DefineGroup";
    void var_400;
    Game_DataSymbolLoad(&var_400, "%s("%s"");
    void* edi_6 = &var_400;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:0_1 = 0 != *edi_6;
        edi_6 += 1;
        i_1 -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_6 = ~i_1;
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
    edi_10 = memcpy(edi_8 - 1, edi_6 - ecx_6, ecx_6 & 0xfffffffc);
    memcpy(edi_10, esi_4, ecx_6 & 3);
    a2[1] += 1;
    int32_t* eax_2 = *(a1 + 8);

    if (*eax_2 && eax_2)
    {
        void* edi_11 = &g_54db5c;
        int32_t i_3 = 0xffffffff;

        while (i_3)
        {
            bool cond:5_1 = 0 != *edi_11;
            edi_11 += 1;
            i_3 -= 1;

            if (!cond:5_1)
                break;
        }

        int32_t ecx_11 = ~i_3;
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
        edi_15 = memcpy(edi_13 - 1, edi_11 - ecx_11, ecx_11 & 0xfffffffc);
        memcpy(edi_15, esi_6, ecx_11 & 3);
        int32_t* i_5 = *(a1 + 8);

        if (*i_5 && i_5)
        {
            int32_t ecx_16 = g_afa7e0;

            do
            {
                int32_t* edx_4 = *i_5;
                void* eax_6;

                if (!edx_4)
                    eax_6 = nullptr;
                else
                {
                    int32_t eax_3 = *edx_4;
                    int32_t eax_4 = -(eax_3);
                    eax_6 = (eax_4 - eax_4) & edx_4;
                }

                *((ecx_16 << 2) + &g_afa6e0) = eax_6;
                g_afa7e0 = ecx_16 + 1;
                uint32_t eax_8 = sub_4e65f0();
                int32_t ecx_18 = 0;
                ecx_18 = i_5[7];
                int32_t eax_12 = *(((eax_8 * 0x180 + ecx_18) << 2) + &g_a96ae0);

                if (eax_12)
                    eax_12(i_5, a2);

                ecx_16 = g_afa7e0 - 1;
                g_afa7e0 = ecx_16;
                i_5 = *((ecx_16 << 2) + &g_afa6e0);
            } while (i_5);
        }
    }

    int32_t eax_13 = a2[1];
    a2[1] = eax_13 - 1;
    char* edi_16;

    if (eax_13 == 1)
        edi_16 = ");\r\n";
    else
    {
        void* ecx_20 = *(*(a1 + 0x14) + 0x10);
        int32_t eax_15 = *(ecx_20 + 4);
        int32_t eax_16 = -(eax_15);

        edi_16 = a1 == ((eax_16 - eax_16) & ecx_20) ? &g_547a40 : "),\r\n";
    }

    int32_t i_6 = 0xffffffff;

    while (i_6)
    {
        bool cond:7_1 = 0 != *edi_16;
        edi_16 = &edi_16[1];
        i_6 -= 1;

        if (!cond:7_1)
            break;
    }

    int32_t ecx_21 = ~i_6;
    int32_t edi_18 = *a2;
    int32_t i_7 = 0xffffffff;

    while (i_7)
    {
        bool cond:8_1 = 0 != *edi_18;
        edi_18 += 1;
        i_7 -= 1;

        if (!cond:8_1)
            break;
    }

    int32_t esi_8;
    int32_t edi_20;
    edi_20 = memcpy(edi_18 - 1, edi_16 - ecx_21, ecx_21 & 0xfffffffc);
    memcpy(edi_20, esi_8, ecx_21 & 3);
    return 0;
}
