#include "00519A60-SplinePathNodeQTask_Setup.h"
/* 0x00519a60 SplinePathNodeQTask_Setup full linked: callers=0 callees=4 */
int32_t sub_519a60(void* a1)

{
    float esi = *(a1 + 0x14);

    if (*(esi + 0x1c) != g_54ed4e)
        Warning_Show("Parent must be of type SplinePathDynCubeObj");

    long double x87_r7 = *(a1 + 0x90);
    long double temp0 = 0f;
    x87_r7 - temp0;
    long double x87_r7_1;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41)
        x87_r7_1 = 0f;
    else
        x87_r7_1 = *(a1 + 0x90);

    *(a1 + 0x90) = x87_r7_1;
    sub_51a110(esi);
    sub_51a8c0(esi);
    return sub_51acb0(esi);
}
