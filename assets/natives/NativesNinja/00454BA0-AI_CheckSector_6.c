#include "00454BA0-AI_CheckSector_6.h"
/* 0x00454ba0 AI_CheckSector_6 full linked: callers=0 callees=5 */
int32_t* sub_454ba0(void* a1, int32_t a2)

{
    int32_t edi_1 = *(a1 + 8) & 0xffc3e01c;
    int32_t* eax_1 = *(*(a2 + 0x70) + 4);

    if (*(&eax_1 + 1) & 1)
        edi_1 |= 1;

    if (eax_1 & 0x10000)
        edi_1 |= 2;

    eax_1 = *(a2 + 0xd00);
    int32_t edi_2;

    edi_2 = !eax_1 ? edi_1 & 0xfffbffff : edi_1 | 0x40000;

    long double x87_r7 = *(a2 + 0x1b8);
    long double temp0 = 0f;
    x87_r7 - temp0;
    eax_1 = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&eax_1 + 1) & 0x40))
        edi_2 |= 0x20;

    long double x87_r7_1 = *(a2 + 0x1bc);
    long double temp1 = 0f;
    x87_r7_1 - temp1;
    eax_1 = (x87_r7_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp1 ? 1 : 0) << 0xe;

    if (!(*(&eax_1 + 1) & 0x40))
        edi_2 |= 0x40;

    long double x87_r7_2 = *(a2 + 0x1c0);
    long double temp2 = 0f;
    x87_r7_2 - temp2;
    eax_1 = (x87_r7_2 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp2 ? 1 : 0) << 0xe;

    if (!(*(&eax_1 + 1) & 0x40))
        edi_2 |= 0x80;

    long double x87_r7_3 = *(a2 + 0x1c4);
    long double temp3 = 0f;
    x87_r7_3 - temp3;
    eax_1 = (x87_r7_3 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp3) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp3 ? 1 : 0) << 0xe;

    if (!(*(&eax_1 + 1) & 0x40))
        edi_2 |= 0x100;

    long double x87_r7_4 = *(a2 + 0x1c8);
    long double temp4 = 0f;
    x87_r7_4 - temp4;
    eax_1 = (x87_r7_4 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp4) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp4 ? 1 : 0) << 0xe;

    if (!(*(&eax_1 + 1) & 0x40))
        edi_2 |= 0x200;

    long double x87_r7_5 = *(a2 + 0x1cc);
    long double temp5 = 0f;
    x87_r7_5 - temp5;
    eax_1 = (x87_r7_5 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp5) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp5 ? 1 : 0) << 0xe;

    if (!(*(&eax_1 + 1) & 0x40))
        edi_2 |= 0x400;

    long double x87_r7_6 = *(a2 + 0x1d0);
    long double temp6 = 0f;
    x87_r7_6 - temp6;
    eax_1 = (x87_r7_6 < temp6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp6) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp6 ? 1 : 0) << 0xe;

    if (!(*(&eax_1 + 1) & 0x40))
        edi_2 |= 0x800;

    long double x87_r7_7 = *(a2 + 0x1d4);
    long double temp7 = 0f;
    x87_r7_7 - temp7;
    eax_1 = (x87_r7_7 < temp7 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp7) ? 1 : 0) << 0xa
        | (x87_r7_7 == temp7 ? 1 : 0) << 0xe;

    if (!(*(&eax_1 + 1) & 0x40))
        edi_2 |= 0x1000;

    long double x87_r7_8 = *(a2 + 0x204);
    long double temp8 = 0f;
    x87_r7_8 - temp8;
    eax_1 = (x87_r7_8 < temp8 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp8) ? 1 : 0) << 0xa
        | (x87_r7_8 == temp8 ? 1 : 0) << 0xe;

    if (!(*(&eax_1 + 1) & 0x40))
    {
        edi_2 |= 0x80000;
        *(a2 + 0xd0c) = *(a2 + 0x204);
    }

    long double x87_r7_10 = *(a2 + 0x208);
    long double temp9 = 0f;
    x87_r7_10 - temp9;
    eax_1 = (x87_r7_10 < temp9 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp9) ? 1 : 0) << 0xa
        | (x87_r7_10 == temp9 ? 1 : 0) << 0xe;

    if (!(*(&eax_1 + 1) & 0x40))
    {
        edi_2 |= 0x100000;
        *(a2 + 0xd10) = *(a2 + 0x208);
        eax_1 = sub_454da0(a2);
        *(a2 + 0x208) = 0;
    }

    long double x87_r7_12 = *(a2 + 0x20c);
    long double temp10 = 0f;
    x87_r7_12 - temp10;
    eax_1 = (x87_r7_12 < temp10 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, temp10) ? 1 : 0) << 0xa
        | (x87_r7_12 == temp10 ? 1 : 0) << 0xe;

    if (!(*(&eax_1 + 1) & 0x40))
        edi_2 |= 0x200000;

    long double x87_r7_13 = *(a2 + 0x210);
    long double temp11 = 0f;
    x87_r7_13 - temp11;
    eax_1 = (x87_r7_13 < temp11 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, temp11) ? 1 : 0) << 0xa
        | (x87_r7_13 == temp11 ? 1 : 0) << 0xe;

    if (!(*(&eax_1 + 1) & 0x40))
    {
        int32_t var_8_3 = *(a2 + 0x210);
        int32_t* eax_2 = HumanPlayer_UpdateMotion_11(a2, edi_2, a2, var_8_3);

        if (eax_2)
        {
            void* eax_3 = sub_4f2070(a2 + 0x4c4, nullptr, eax_2);
            *(a1 + 8) = edi_2;
            return eax_3;
        }

        int32_t var_1c_4 = var_8_3;
        int32_t var_20_3 = sub_4f1050(a2);
        eax_1 = Warning_Show("#%d is trying to change to invalid weapon #%d");
    }

    *(a1 + 8) = edi_2;
    return eax_1;
}
