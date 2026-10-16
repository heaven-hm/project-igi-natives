#include "0045CCF0-AI_FireWeapon_16.h"
/* 0x0045ccf0 AI_FireWeapon_16 full linked: callers=0 callees=6 */
int32_t* sub_45ccf0(void* a1, int32_t a2)

{
    int32_t edi_1 = *(a1 + 8) & 0xf003e01c;
    int32_t* result = *(*(a2 + 0x70) + 4);

    if (*(&result + 1) & 1)
        edi_1 |= 1;

    if (result & 0x10000)
        edi_1 |= 2;

    result = *(a2 + 0xd00);
    int32_t edi_2;

    edi_2 = !result ? edi_1 & 0xfffbffff : edi_1 | 0x40000;

    long double x87_r7 = *(a2 + 0x1b8);
    long double temp0 = 0f;
    x87_r7 - temp0;
    result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        edi_2 |= 0x20;

    long double x87_r7_1 = *(a2 + 0x1bc);
    long double temp1 = 0f;
    x87_r7_1 - temp1;
    result = (x87_r7_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        edi_2 |= 0x40;

    long double x87_r7_2 = *(a2 + 0x1c0);
    long double temp2 = 0f;
    x87_r7_2 - temp2;
    result = (x87_r7_2 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp2 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        edi_2 |= 0x80;

    long double x87_r7_3 = *(a2 + 0x1c4);
    long double temp3 = 0f;
    x87_r7_3 - temp3;
    result = (x87_r7_3 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp3) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp3 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        edi_2 |= 0x100;

    long double x87_r7_4 = *(a2 + 0x1c8);
    long double temp4 = 0f;
    x87_r7_4 - temp4;
    result = (x87_r7_4 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp4) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp4 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        edi_2 |= 0x200;

    long double x87_r7_5 = *(a2 + 0x1cc);
    long double temp5 = 0f;
    x87_r7_5 - temp5;
    result = (x87_r7_5 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp5) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp5 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        edi_2 |= 0x400;

    long double x87_r7_6 = *(a2 + 0x1d0);
    long double temp6 = 0f;
    x87_r7_6 - temp6;
    result = (x87_r7_6 < temp6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp6) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp6 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        edi_2 |= 0x800;

    long double x87_r7_7 = *(a2 + 0x1d4);
    long double temp7 = 0f;
    x87_r7_7 - temp7;
    result = (x87_r7_7 < temp7 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp7) ? 1 : 0) << 0xa
        | (x87_r7_7 == temp7 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        edi_2 |= 0x1000;

    long double x87_r7_8 = *(a2 + 0x204);
    long double temp8 = 0f;
    x87_r7_8 - temp8;
    result = (x87_r7_8 < temp8 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp8) ? 1 : 0) << 0xa
        | (x87_r7_8 == temp8 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        edi_2 |= 0x80000;

    long double x87_r7_9 = *(a2 + 0x208);
    long double temp9 = 0f;
    x87_r7_9 - temp9;
    result = (x87_r7_9 < temp9 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp9) ? 1 : 0) << 0xa
        | (x87_r7_9 == temp9 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        edi_2 |= 0x100000;

    long double x87_r7_10 = *(a2 + 0x20c);
    long double temp10 = 0f;
    x87_r7_10 - temp10;
    result = (x87_r7_10 < temp10 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp10) ? 1 : 0) << 0xa
        | (x87_r7_10 == temp10 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        edi_2 |= 0x200000;
        *(a2 + 0xd0c) = *(a2 + 0x20c);
    }

    long double x87_r7_12 = *(a2 + 0x210);
    long double temp11 = 0f;
    x87_r7_12 - temp11;
    result = (x87_r7_12 < temp11 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, temp11) ? 1 : 0) << 0xa
        | (x87_r7_12 == temp11 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        edi_2 |= &__dos_header;
        result = sub_463110(a2);

        if (result != 0x24)
        {
            *(a2 + 0xd10) = *(a2 + 0x210);
            result = sub_459d50(a2);
            *(a2 + 0x210) = 0;
        }
    }

    long double x87_r7_14 = *(a2 + 0x214);
    long double temp12 = 0f;
    x87_r7_14 - temp12;
    result = (x87_r7_14 < temp12 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, temp12) ? 1 : 0) << 0xa
        | (x87_r7_14 == temp12 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        edi_2 |= 0x800000;

    long double x87_r7_15 = *(a2 + 0x218);
    long double temp13 = 0f;
    x87_r7_15 - temp13;
    result = (x87_r7_15 < temp13 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_15, temp13) ? 1 : 0) << 0xa
        | (x87_r7_15 == temp13 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        edi_2 |= 0x1000000;

    long double x87_r7_16 = *(a2 + 0x21c);
    long double temp14 = 0f;
    x87_r7_16 - temp14;
    result = (x87_r7_16 < temp14 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_16, temp14) ? 1 : 0) << 0xa
        | (x87_r7_16 == temp14 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        edi_2 |= 0x2000000;

    long double x87_r7_17 = *(a2 + 0x220);
    long double temp15 = 0f;
    x87_r7_17 - temp15;
    result = (x87_r7_17 < temp15 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, temp15) ? 1 : 0) << 0xa
        | (x87_r7_17 == temp15 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        int32_t var_8_3 = *(a2 + 0x220);
        int32_t* eax_1 = HumanPlayer_UpdateMotion_11(a2, edi_2, a2, var_8_3);

        if (!eax_1)
        {
            int32_t var_1c_3 = var_8_3;
            int32_t var_20_3 = sub_4f1050(a2);
            result = Warning_Show("#%d is trying to change to invalid weapon #%d");
        }
        else
            result = sub_4f2070(a2 + 0x4c4, nullptr, eax_1);
    }

    long double x87_r7_19 = *(a2 + 0x224);
    long double temp16 = 0f;
    x87_r7_19 - temp16;
    result = (x87_r7_19 < temp16 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, temp16) ? 1 : 0) << 0xa
        | (x87_r7_19 == temp16 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        edi_2 |= 0x4000000;

    long double x87_r7_20 = *(a2 + 0x228);
    long double temp17 = 0f;
    x87_r7_20 - temp17;
    result = (x87_r7_20 < temp17 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_20, temp17) ? 1 : 0) << 0xa
        | (x87_r7_20 == temp17 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        edi_2 |= 0x8000000;

    *(a1 + 8) = edi_2;
    return result;
}
