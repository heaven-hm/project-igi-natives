#include "MoveRigidObj_LoadParameters.h"
int32_t* MoveRigidObj_LoadParameters(uint32_t a1)

{
    *(a1 + 0x1a8) = 0;
    int32_t v_20;
    __builtin_memset(&v_20, 0, 0x18);
    *(a1 + 0x1ac) = 0xbff00000;
    *(a1 + 0xe8) = CarGun_Create(nullptr, a1);
    *(a1 + 0x180) = 0;
    Script_ExecuteLevelScript_6(a1 + 0x1b4);
    DynObj_LookupHashItem_6(g_a44344, a1, 0);
    long double fpu7 = *(a1 + 0x9c);
    long double fpu6 = *(a1 + 0xa0);
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
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

    long double x87_r7_6 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_3;
    DynObj_LinkDynamicCube_8(g_a44344, a1, &v_20, x87_r7_6, 2);
    int32_t* objC2 = a1 + 0x158;
    int32_t* result = a1 + 0xf8;
    int32_t i_1 = 2;
    int32_t i;

    do
    {
        result[-2] = 0;
        result[-1] = 0;
        *result = 0;
        result[1] = 0;
        result[2] = 0;
        result[3] = 0;
        objC2[-2] = 0;
        *objC2 = 0;
        objC2[2] = 0;
        __builtin_memset(&result[0xa], 0, 0x18);
        objC2[4] = 0xbf800000;
        objC2[6] = 0xbf800000;
        objC2[8] = 0xbf800000;
        objC2 = &objC2[1];
        result = &result[6];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(a1 + 0x204) = 0;
    return result;
}
