#include "00469450-AI_TakeCover_26.h"
/* 0x00469450 AI_TakeCover_26 full linked: callers=5 callees=13 */
int32_t sub_469450(int32_t a1, int32_t a2, int32_t a3, int32_t a4, char* a5 @ 0x18, void* a6, int32_t a7)

{
    int32_t ebx = a4;
    int32_t var_204 = 0;
    int32_t var_210 = a1;
    int32_t var_20c = a2;
    char var_100 = 0;
    Qhash_Init(1);
    void* esi = a6;
    int32_t** eax_1 = sub_4b6ec0(esi, 0, 0, &g_567c74);
    Qhash_Reset();
    eax_1[9] |= 0x40000;
    int32_t eax_4 = a7 * 0xc;
    eax_1[3] = a3;
    eax_1[5] = *(eax_4 + 0x53f7d0);
    eax_1[6] = *(eax_4 + 0x53f7d4);
    eax_1[7] = *(eax_4 + 0x53f7d8);

    while (true)
    {
        int32_t ecx_1 = 0;
        char var_200 = 0;

        while (true)
        {
            char eax_5 = *a5;
            a5 = &a5[1];

            if (!eax_5)
            {
                (&var_200)[ecx_1] = 0;
                var_204 = 1;
                break;
            }

            if (eax_5 == 0x20)
            {
                (&var_200)[ecx_1] = 0x20;
                char var_1ff[0xff];
                var_1ff[ecx_1] = 0;
                break;
            }

            (&var_200)[ecx_1] = eax_5;
            ecx_1 += 1;
        }

        int32_t eax_6 = sub_4b7050(esi, &var_200);

        if (ebx <= eax_6)
        {
            char* var_224_2 = &var_100;
            var_210 = a1;
            char* edi_6 = &var_200;
            var_20c += sub_4b70f0(esi);
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond:0_1 = 0 != *edi_6;
                edi_6 = &edi_6[1];
                i -= 1;

                if (!cond:0_1)
                    break;
            }

            int32_t ecx_9 = ~i;
            var_100 = 0;
            char* edi_8 = &var_100;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond:1_1 = 0 != *edi_8;
                edi_8 = &edi_8[1];
                i_1 -= 1;

                if (!cond:1_1)
                    break;
            }

            int32_t esi_4;
            int32_t edi_10;
            edi_10 = memcpy(edi_8 - 1, edi_6 - ecx_9, ecx_9 & 0xfffffffc);
            ebx = a4;
            memcpy(edi_10, esi_4, ecx_9 & 3);
        }
        else
        {
            char* edi_1 = &var_200;
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool cond:2_1 = 0 != *edi_1;
                edi_1 = &edi_1[1];
                i_2 -= 1;

                if (!cond:2_1)
                    break;
            }

            int32_t ecx_2 = ~i_2;
            char* edi_3 = &var_100;
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool cond:3_1 = 0 != *edi_3;
                edi_3 = &edi_3[1];
                i_3 -= 1;

                if (!cond:3_1)
                    break;
            }

            int32_t esi_2;
            int32_t edi_5;
            edi_5 = memcpy(edi_3 - 1, edi_1 - ecx_2, ecx_2 & 0xfffffffc);
            memcpy(edi_5, esi_2, ecx_2 & 3);
        }

        ebx -= eax_6;
        sub_4b6e90(eax_1, &var_200);
        eax_1[8] = 0xffffffff;
        eax_1[1] = var_210;
        eax_1[2] = var_20c;
        sub_4b6f50(eax_1);
        var_210 += eax_6;

        if (var_204)
            break;

        esi = a6;
    }

    char* var_224_4 = &var_100;
    int32_t result = var_20c + sub_4b70f0(a6);
    sub_4b6f30(eax_1);
    return result;
}
