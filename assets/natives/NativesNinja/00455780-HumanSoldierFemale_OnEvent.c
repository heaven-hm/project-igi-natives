#include "00455780-HumanSoldierFemale_OnEvent.h"
/* 0x00455780 HumanSoldierFemale_OnEvent full linked: callers=0 callees=11 */
int32_t sub_455780(void* a1, float* a2)

{
    void* eax = *(a1 + 0x800);
    double var_34;

    if (!eax || !*(eax + 0x3abc))
    {
        var_34 = *(a1 + 0x7c) * 4096.0;
        double var_2c_1 = *(a1 + 0x88) * 4096.0;
        double var_24_1 = *(a1 + 0x94) * 4096.0;
        double* eax_2 = sub_4c3440(a1);
        char* var_64 = a2[1];
        double* eax_4 = sub_4c3440(var_64);
        double var_4c = *eax_2 - *eax_4;
        void* eax_5 = sub_4c3440(a1);
        void* eax_6 = sub_4c3440(a2[1]);
        double var_44_1 = *(eax_5 + 8) - *(eax_6 + 8);
        void* eax_7 = sub_4c3440(a1);
        void* eax_8 = sub_4c3440(a2[1]);
        double var_3c_1 = *(eax_7 + 0x10) - *(eax_8 + 0x10);
        sub_4b3100(&var_4c);
        int32_t edi_4 = 0xe;
        long double x87_r7_16 = var_3c_1 * var_24_1 + var_44_1 * var_2c_1 + var_4c * var_34;
        long double temp0_1 = 0.0;
        x87_r7_16 - temp0_1;

        if (*(&((x87_r7_16 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_16, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1)
            edi_4 = 0xd;

        var_64 = a1 + 0x254;
        *(a1 + 0x2e8) = edi_4;
        sub_489e10(var_64, edi_4);
        long double x87_r7_18 = (a1 + 0x254)[edi_4 * 2 + 4] * *a2;
        (a1 + 0x254)[edi_4 * 2 + 3] = x87_r7_18 + (a1 + 0x254)[edi_4 * 2 + 3];
        *(a1 + 0x254) = x87_r7_18 + *(a1 + 0x254);
        void* edx_3 = *(a1 + 0x2f4);
        long double x87_r7_19 = x87_r7_18 + *(a1 + 0xd08);
        *(a1 + 0xd08) = x87_r7_19;
        long double x87_r6_9 = *(a1 + 0x254);
        long double temp1_1 = *(a1 + 0x258);
        x87_r6_9 - temp1_1;
        void* edx_4;

        if (!(*(&((x87_r6_9 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_9, temp1_1) ? 1 : 0) << 0xa
            | (x87_r6_9 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            *(a1 + 0xd18) = 2;
            memcpy(a1 + 0xd20, &var_4c, 0x18);
            edx_4 = edx_3 | 0x20000;
            *(a1 + 0xcf5) = 1;
        }
        else
        {
            long double temp2_1 = *(a1 + 0xd04);
            x87_r7_19 - temp2_1;

            if (!(*(&((x87_r7_19 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_19, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_19 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                *(a1 + 0xd08) = 0;

            int32_t var_60_3 = 3;
            var_64 = "ai_hit_";
            sub_4637c0(a1, var_64, var_60_3);
            edx_4 = edx_3;
        }

        *(a1 + 0x2f4) = edx_4;
    }

    int32_t eax_13 = a2[1];
    int32_t var_8 = eax_13;
    int32_t var_4 = eax_13;
    void* eax_14 = *(a1 + 0x800);
    int32_t var_1c;
    int32_t* __saved_edi = &var_1c;
    var_1c = 0xf;
    int32_t var_18 = 1;
    int32_t var_14 = 0;
    double* var_c = &var_34;
    return sub_450d50(eax_14, __saved_edi);
}
