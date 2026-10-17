// IGI native provenance: ExplosionObj_Invoke6 - 0x0043A0E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043A0E0-ExplosionObj_Invoke6.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ExplosionObj_Invoke6.h"

int32_t* ExplosionObj_Invoke6(float arg1)

{
    DynObj_LookupHashItem_6(g_a44344, arg1, 0);
    long double x87_r7 = *(arg1 + 0x9c);
    long double x87_r6 = *(arg1 + 0xa0);
    x87_r6 - x87_r7;
    __builtin_memset(arg1 + 0xf0, 0, 0x18);
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(arg1 + 0xa0);
    else
        x87_r7_1 = *(arg1 + 0x9c);

    long double x87_r6_1 = *(arg1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(arg1 + 0x9c);
        long double x87_r6_2 = *(arg1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(arg1 + 0xa0);
        else
            x87_r7_3 = *(arg1 + 0x9c);
    }
    else
        x87_r7_3 = *(arg1 + 0x98);

    long double x87_r7_6 = Render_ComputeNormals(*(arg1 + 0x6c)) * x87_r7_3;
    DynObj_LinkDynamicCube_8(g_a44344, arg1, arg1 + 0xf0, x87_r7_6, 1);
    double* eax_2 = DynObj_UpdateDynTree_4(arg1);
    Render_ComputeNormals_14(*(arg1 + 0x68), arg1, eax_2);
    *(arg1 + 0x108) = 0x3f800000;
    *(arg1 + 0x10c) = 0;
    *(arg1 + 0x110) = 0;
    *(arg1 + 0x114) = 0;
    *(arg1 + 0x118) = 0x3f800000;
    *(arg1 + 0x11c) = 0;
    *(arg1 + 0x120) = 0;
    *(arg1 + 0x124) = 0;
    *(arg1 + 0x128) = 0x3f800000;
    *(arg1 + 0x12c) = 0;
    char* eax_4 = arg1 + 0x130;
    __builtin_memcpy(arg1 + 0x70, arg1 + 0x108, 0x28);
    int32_t i_2 = 3;
    int32_t i;

    do
    {
        *eax_4 = 0;
        eax_4 = &eax_4[0x10];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    char* eax_5 = arg1 + 0x160;
    int32_t i_3 = 2;
    int32_t i_1;

    do
    {
        *eax_5 = 0;
        eax_5 = &eax_5[0x20];
        i_1 = i_3;
        i_3 -= 1;
    } while (i_1 != 1);
    *(arg1 + 0x1a0) = 0;
    *(arg1 + 0x1a1) = 0;
    *(arg1 + 0x1a2) = 0;
    Script_ExecuteLevelScript_6(arg1 + 0x1a4);
    *(arg1 + 0x1f4) = 0;
    return DynObj_QtasklistIsFull(Level_InitTextures_4(), arg1);
}
