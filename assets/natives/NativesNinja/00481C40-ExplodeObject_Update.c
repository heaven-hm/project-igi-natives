#include "00481C40-ExplodeObject_Update.h"
/* 0x00481c40 ExplodeObject_Update full linked: callers=0 callees=18 */
float* sub_481c40(void* a1)

{
    void* eax = sub_4cec10(a1 + 0x170);
    void* eax_2 = sub_4cec10(a1 + 0x180);
    void var_100;
    void var_80;

    if (!eax)
    {
        if (*(a1 + 0x170) && *(a1 + 0x171) != 0x2a)
        {
            char* var_11c_1 = a1 + 0x170;
            Game_DataSymbolLoad(&var_80, "Model "%s" not available");
            char* edi_1 = a1 + 0x170;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond:0_1 = 0 != *edi_1;
                edi_1 = &edi_1[1];
                i -= 1;

                if (!cond:0_1)
                    break;
            }

            int32_t ecx_1 = ~i;
            int32_t esi_2;
            int32_t edi_3;
            edi_3 = memcpy(&var_100, edi_1 - ecx_1, ecx_1 & 0xfffffffc);
            memcpy(edi_3, esi_2, ecx_1 & 3);
            void* var_128_1 = &var_100;
            Game_DataSymbolLoad(a1 + 0x170, "** %s **");
        }

        if (!eax_2)
            goto label_481ce9;
    }
    else if (!eax_2)
    {
    label_481ce9:
        void* edi_4 = a1 + 0x180;

        if (*(a1 + 0x180) && *(a1 + 0x181) != 0x2a)
        {
            void* var_11c_2 = edi_4;
            Game_DataSymbolLoad(&var_80, "Model "%s" not available");
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond:2_1 = 0 != *edi_4;
                edi_4 += 1;
                i_1 -= 1;

                if (!cond:2_1)
                    break;
            }

            int32_t ecx_5 = ~i_1;
            int32_t esi_4;
            int32_t edi_6;
            edi_6 = memcpy(&var_100, edi_4 - ecx_5, ecx_5 & 0xfffffffc);
            memcpy(edi_6, esi_4, ecx_5 & 3);
            void* var_128_2 = &var_100;
            Game_DataSymbolLoad(a1 + 0x180, "** %s **");
        }
    }
    sub_4c48d0(a1, eax);
    long double x87_r7 = *(a1 + 0x9c);
    long double x87_r6 = *(a1 + 0xa0);
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(a1 + 0xa0);
    else
        x87_r7_1 = *(a1 + 0x9c);

    long double x87_r6_1 = *(a1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(a1 + 0x9c);
        long double x87_r6_2 = *(a1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(a1 + 0xa0);
        else
            x87_r7_3 = *(a1 + 0x9c);
    }
    else
        x87_r7_3 = *(a1 + 0x98);

    long double x87_r7_6 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_3;
    sub_4c6940(*(a1 + 0x68), a1, a1 + 0xf0, x87_r7_6);
    double* eax_10 = sub_4c3440(a1);
    sub_4dcf00(*(a1 + 0x68), a1, eax_10);
    int32_t edx_2 = *(a1 + 0x204);
    memcpy(a1 + 0x70, a1 + 0x108, 0x28);
    int32_t ecx_10 = *(a1 + 0x1f0);
    *(a1 + 0x1e4) = 0;
    *(a1 + 0x190) = 0;
    *(a1 + 0x1e8) = 0;
    *(a1 + 0x1f4) = 0xffffffff;
    *(a1 + 0x1ec) = ecx_10;
    *(a1 + 0x200) = edx_2;
    sub_4f1400(a1 + 0x194, a1);
    return sub_4453e0(a1);
}
