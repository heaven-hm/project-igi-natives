// IGI native provenance: HumanPlayer_ExecutePipeline_410700 - 0x00410700 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00410700-HumanPlayer_ExecutePipeline_410700.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_ExecutePipeline_410700.h"

int32_t HumanPlayer_ExecutePipeline_410700(void* arg1, void* arg2)

{
    int32_t result = *(*(*(arg2 + 0x4ec) + 0x70) + 4);
    int32_t ecx_2 = *(arg1 + 8) & 0xfff7001c;

    if (*(&result + 1) & 1)
        ecx_2 |= 1;

    if (result & 0x10000)
        ecx_2 |= 2;

    long double x87_r7 = *(arg2 + 0x1b8);
    long double temp0 = 0f;
    x87_r7 - temp0;
    result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        ecx_2 |= 0x20;

    long double x87_r7_1 = *(arg2 + 0x1bc);
    long double temp1 = 0f;
    x87_r7_1 - temp1;
    result = (x87_r7_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        ecx_2 |= 0x40;

    long double x87_r7_2 = *(arg2 + 0x1c0);
    long double temp2 = 0f;
    x87_r7_2 - temp2;
    result = (x87_r7_2 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp2 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        ecx_2 |= 0x80;

    long double x87_r7_3 = *(arg2 + 0x1c4);
    long double temp3 = 0f;
    x87_r7_3 - temp3;
    result = (x87_r7_3 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp3) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp3 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        *(&ecx_2 + 1) |= 1;

    long double x87_r7_4 = *(arg2 + 0x1c8);
    long double temp4 = 0f;
    x87_r7_4 - temp4;
    result = (x87_r7_4 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp4) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp4 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        *(&ecx_2 + 1) |= 2;

    long double x87_r7_5 = *(arg2 + 0x1cc);
    long double temp5 = 0f;
    x87_r7_5 - temp5;
    result = (x87_r7_5 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp5) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp5 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        *(&ecx_2 + 1) |= 4;

    long double x87_r7_6 = *(arg2 + 0x1d0);
    long double temp6 = 0f;
    x87_r7_6 - temp6;
    result = (x87_r7_6 < temp6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp6) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp6 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        *(&ecx_2 + 1) |= 8;

    long double x87_r7_7 = *(arg2 + 0x1d4);
    long double temp7 = 0f;
    x87_r7_7 - temp7;
    result = (x87_r7_7 < temp7 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp7) ? 1 : 0) << 0xa
        | (x87_r7_7 == temp7 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        *(&ecx_2 + 1) |= 0x10;

    long double x87_r7_8 = *(arg2 + 0x1d8);
    long double temp8 = 0f;
    x87_r7_8 - temp8;
    result = (x87_r7_8 < temp8 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp8) ? 1 : 0) << 0xa
        | (x87_r7_8 == temp8 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        *(&ecx_2 + 1) |= 0x20;

    long double x87_r7_9 = *(arg2 + 0x1dc);
    long double temp9 = 0f;
    x87_r7_9 - temp9;
    result = (x87_r7_9 < temp9 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp9) ? 1 : 0) << 0xa
        | (x87_r7_9 == temp9 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        *(&ecx_2 + 1) |= 0x40;

    long double x87_r7_10 = *(arg2 + 0x1e0);
    long double temp10 = 0f;
    x87_r7_10 - temp10;
    result = (x87_r7_10 < temp10 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp10) ? 1 : 0) << 0xa
        | (x87_r7_10 == temp10 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        *(&ecx_2 + 1) |= 0x80;

    long double x87_r7_11 = *(arg2 + 0x204);
    long double temp11 = 0f;
    x87_r7_11 - temp11;
    result = (x87_r7_11 < temp11 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp11) ? 1 : 0) << 0xa
        | (x87_r7_11 == temp11 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        ecx_2 |= 0x80000;

    *(arg1 + 8) = ecx_2;
    return result;
}
