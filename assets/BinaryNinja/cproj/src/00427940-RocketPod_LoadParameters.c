#include "gi_platform.h"
#include "00427940-RocketPod_LoadParameters.h"
uint32_t RocketPod_LoadParameters(int32_t* a1, float a2)

{
    int32_t* flagP = a2;
    void* valA1 = DynObj_Missing(*flagP);

    if (valA1)
    {
        memcpy(&a1[0x3c], &flagP[8], 0x18);
        memcpy(&a1[0x42], &flagP[0x18], 0x28);
        DynObj_LookupHashItem_6(flagP[1], a1, valA1);
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

            if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_3 = a1[0x28];
            else
                x87_r7_3 = a1[0x27];
        }
        else
            x87_r7_3 = a1[0x26];

        long double x87_r7_6 = Render_ComputeNormals(a1[0x1b]) * x87_r7_3;
        DynObj_LinkDynamicCube_8(flagP[1], a1, &flagP[2], x87_r7_6, 2);
        memcpy(&a1[0x1c], &flagP[0xe], 0x28);
        int32_t* valA5 = flagP[0x23];
        a1[0x4e] = valA5;
        a1[0x4c] = flagP[0x22];
        uint32_t result = Sys_FreeMemory_14(Level_SetMission_5(), *valA5);
        a1[0x4f] = result;
        return result;
    }

    int32_t __saved_ebx_1 = *flagP;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
