// Original IGI.EXE function: RigidDynCubeObj_Action (VA 0x004C3010; static CFG gate PASS, CFG score 0.917).
#include "RigidDynCubeObj_Action.h"
void RigidDynCubeObj_Action(int32_t* a1, float a2)

{
    int32_t* srcS = a2;

    if (!srcS)
        return;

    void* valA2 = DynObj_Missing(*srcS);

    if (!valA2)
    {
        int32_t __saved_ebx_2 = *srcS;
        Error_Show("VirModel "%s" not available");

        while (true)
            /* nop */

        return;
    }

    DynObj_LookupHashItem_6(srcS[1], a1, valA2);
    long double x87_r7_1 = a1[0x27];
    long double x87_r6_1 = a1[0x28];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_2;

    if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_2 = a1[0x28];
    else
        x87_r7_2 = a1[0x27];

    long double x87_r6_2 = a1[0x26];
    x87_r6_2 - x87_r7_2;
    long double x87_r7_4;

    if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_5 = a1[0x27];
        long double x87_r6_3 = a1[0x28];
        x87_r6_3 - x87_r7_5;

        if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_4 = a1[0x28];
        else
            x87_r7_4 = a1[0x27];
    }
    else
        x87_r7_4 = a1[0x26];

    int32_t valA5 = a1[0x35];
    long double x87_r7_7 = Render_ComputeNormals(a1[0x1b]) * x87_r7_4;
    DynObj_LinkDynamicCube_8(srcS[1], a1, &srcS[2], x87_r7_7, valA5);
    memcpy(&a1[0x1c], &srcS[0xe], 0x28);
    Car_GunCreate(a1, a1, a1);
    __builtin_memset(&a1[0x30], 0, 0x14);
}
