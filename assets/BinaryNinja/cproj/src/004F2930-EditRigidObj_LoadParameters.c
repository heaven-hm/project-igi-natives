#include "gi_platform.h"
#include "004F2930-EditRigidObj_LoadParameters.h"
int32_t EditRigidObj_LoadParameters(int32_t* a1)

{
    int32_t valA = g_a44344;
    int32_t v_20;
    __builtin_memset(&v_20, 0, 0x18);
    DynObj_LookupHashItem_6(valA, a1, 0);
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

    long double x87_r7_6 = Render_ComputeNormals(a1[0x1b]) * x87_r7_3;
    DynObj_LinkDynamicCube_8(g_a44344, a1, &v_20, x87_r7_6, 2);
    double* valA4 = DynObj_UpdateDynTree_4(a1);
    Render_ComputeNormals_14(g_a44344, a1, valA4);
    __builtin_memset(&a1[0x3c], 0, 0x18);
    a1[0x42] = 0x3f800000;
    a1[0x43] = 0;
    a1[0x44] = 0;
    a1[0x45] = 0;
    a1[0x46] = 0x3f800000;
    a1[0x47] = 0;
    a1[0x48] = 0;
    a1[0x49] = 0;
    a1[0x4a] = 0x3f800000;
    a1[0x4b] = 0;
    a1[0x4c] = 0;
    a1[0x50] = 0x3f800000;
    a1[0x51] = 0x3f800000;
    a1[0x52] = 0x3f800000;
    a1[0x53] = 0;
    a1[0x54] = 0;
    a1[0x55] = 0;
    a1[0x66] = 1;
    return 0x3f800000;
}
