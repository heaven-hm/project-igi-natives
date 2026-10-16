#include "00457620-HumanSoldierRPG_OnEvent.h"
/* 0x00457620 HumanSoldierRPG_OnEvent full linked: callers=0 callees=11 */
int32_t sub_457620(void* a1, float* a2)

{
    void* ebp = a1;
    void* eax = *(ebp + 0x800);
    double var_34;

    if (!eax || !*(eax + 0x3abc))
    {
        var_34 = *(ebp + 0x7c) * 4096.0;
        double var_2c_1 = *(ebp + 0x88) * 4096.0;
        double var_24_1 = *(ebp + 0x94) * 4096.0;
        double* eax_2 = sub_4c3440(ebp);
        char* var_64 = a2[1];
        double* eax_4 = sub_4c3440(var_64);
        double var_4c = *eax_2 - *eax_4;
        void* eax_5 = sub_4c3440(ebp);
        void* eax_6 = sub_4c3440(a2[1]);
        double var_44_1 = *(eax_5 + 8) - *(eax_6 + 8);
        void* eax_7 = sub_4c3440(ebp);
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

        var_64 = ebp + 0x254;
        *(ebp + 0x2e8) = edi_4;
        sub_489e10(var_64, edi_4);
        long double x87_r7_18 = (ebp + 0x254)[edi_4 * 2 + 4] * *a2;
        (ebp + 0x254)[edi_4 * 2 + 3] = x87_r7_18 + (ebp + 0x254)[edi_4 * 2 + 3];
        long double x87_r7_19 = x87_r7_18 + *(ebp + 0x254);
        *(ebp + 0x254) = x87_r7_19;
        long double temp1_1 = *(ebp + 0x258);
        x87_r7_19 - temp1_1;
        void* edi_5 = *(ebp + 0x2f4);
        void* edi_6;

        if (!(*(&((x87_r7_19 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_19 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            memcpy(ebp + 0xd10, &var_4c, 0x18);
            void* eax_14 = edi_5 | 0x20000;
            *(ebp + 0xd08) = 2;
            a1 = eax_14;
            *(ebp + 0xcf5) = 1;
            edi_6 = eax_14;
        }
        else
        {
            int32_t var_60_3 = 3;
            var_64 = "ai_hit_";
            edi_6 = edi_5 | 0x10000;
            sub_4637c0(ebp, var_64, var_60_3);
        }

        *(ebp + 0x2f4) = edi_6;
    }

    int32_t eax_15 = a2[1];
    int32_t var_8 = eax_15;
    int32_t var_4 = eax_15;
    void* eax_16 = *(ebp + 0x800);
    int32_t var_1c;
    int32_t* __saved_edi = &var_1c;
    var_1c = 0xf;
    int32_t var_18 = 1;
    int32_t var_14 = 0;
    double* var_c = &var_34;
    return sub_450d50(eax_16, __saved_edi);
}
