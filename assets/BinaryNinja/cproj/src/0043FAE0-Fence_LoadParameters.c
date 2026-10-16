#include "gi_platform.h"
#include "0043FAE0-Fence_LoadParameters.h"
int32_t* Fence_LoadParameters(int32_t* a1)

{
    int32_t v_20;
    __builtin_memset(&v_20, 0, 0x18);
    DynObj_QtasklistIsFull(Level_StartMission_3(), a1);
    DynObj_QtasklistIsFull(Level_LoadLevel_4(), a1);
    DynObj_LookupHashItem_6(Level_StartMission_4(), a1, 0);
    long double fpu7 = a1[0x27];
    long double fpu6 = a1[0x28];
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = a1[0x28];
    else
        x87_r7_1 = a1[0x27];

    long double x87_r6_1 = a1[0x26];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = a1[0x27];
        long double x87_r6_2 = a1[0x28];
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = a1[0x28];
        else
            x87_r7_3 = a1[0x27];
    }
    else
        x87_r7_3 = a1[0x26];

    float v_38_4 = Render_ComputeNormals(a1[0x1b]) * x87_r7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), a1, &v_20, v_38_4, 1);
    __builtin_memset(&a1[0x3c], 0, 0x1d);
    a1[0x47] = 0;
    int32_t* result = Script_ExecuteLevelScript_6(&a1[0x48]);
    a1[0x5c] = 0;
    return result;
}
