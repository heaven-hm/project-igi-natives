#include "0041AFB0-Menu_LeaveMenus_7.h"
/* 0x0041afb0 Menu_LeaveMenus_7 full linked: callers=1 callees=9 */
int32_t Menu_LeaveMenus_7(int32_t a1, int32_t a2, int32_t a3 @ 0x10, char* a4 @ 0x18, void* a5, int32_t* a6, int32_t a7)

{
    int32_t var_20c = a1;
    int32_t var_208 = a2;
    int32_t ebx = a3;
    int32_t ecx_2 = a6[9] | 0x80000;
    int32_t* i = nullptr;
    char var_100 = 0;
    a6[9] = ecx_2;
    a6[4] = a7;

    do
    {
        int32_t ecx_3 = 0;
        char var_200 = 0;

        while (true)
        {
            char eax_2 = *a4;
            a4 = &a4[1];

            if (!eax_2)
            {
                i = 1;
                (&var_200)[ecx_3] = 0;
                break;
            }

            if (eax_2 == 0x20)
            {
                (&var_200)[ecx_3] = 0x20;
                char var_1ff[0xff];
                var_1ff[ecx_3] = 0;
                break;
            }

            (&var_200)[ecx_3] = eax_2;
            ecx_3 += 1;
        }

        int32_t eax_3 = sub_4b7050(a5, &var_200);

        if (ebx <= eax_3)
        {
            char* var_220_2 = &var_100;
            var_20c = a1;
            int32_t j = 0xffffffff;
            var_208 += sub_4b70f0(a5);
            char* edi_8 = &var_200;

            while (j)
            {
                bool cond:0_1 = 0 != *edi_8;
                edi_8 = &edi_8[1];
                j -= 1;

                if (!cond:0_1)
                    break;
            }

            int32_t ecx_9 = ~j;
            int32_t esi_5;
            int32_t edi_10;
            edi_10 = memcpy(&var_100, edi_8 - ecx_9, ecx_9 & 0xfffffffc);
            ebx = a3 - eax_3;
            memcpy(edi_10, esi_5, ecx_9 & 3);
        }
        else
        {
            char* edi_1 = &var_200;
            int32_t j_1 = 0xffffffff;
            ebx -= eax_3;

            while (j_1)
            {
                bool cond:1_1 = 0 != *edi_1;
                edi_1 = &edi_1[1];
                j_1 -= 1;

                if (!cond:1_1)
                    break;
            }

            int32_t ecx_4 = ~j_1;
            char* edi_3 = &var_100;
            int32_t j_2 = 0xffffffff;

            while (j_2)
            {
                bool cond:2_1 = 0 != *edi_3;
                edi_3 = &edi_3[1];
                j_2 -= 1;

                if (!cond:2_1)
                    break;
            }

            int32_t esi_3;
            int32_t edi_5;
            edi_5 = memcpy(edi_3 - 1, edi_1 - ecx_4, ecx_4 & 0xfffffffc);
            memcpy(edi_5, esi_3, ecx_4 & 3);
        }

        sub_4b6e90(a6, &var_200);
        a6[1] = var_20c;
        a6[2] = var_208;
        sub_4b6f50(a6);
        var_20c += eax_3;
    } while (!i);

    char* var_220_4 = &var_100;
    return sub_4b70f0(a5) + var_208;
}
