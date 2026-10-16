#include "Ladder_LoadParameters.h"
int32_t Ladder_LoadParameters(float a1, int32_t* a2)

{
    int32_t* ctxB = a1;
    DynObj_QtasklistIsFull(Level_StartMission_3(), ctxB);
    void* valA2 = DynObj_Missing(*a2);

    if (valA2)
    {
        DynObj_LookupHashItem_6(a2[1], ctxB, valA2);
        long double fpu7 = ctxB[0x27];
        long double fpu6 = ctxB[0x28];
        fpu6 - fpu7;
        long double x87_r7_1;

        if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
                | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_1 = ctxB[0x28];
        else
            x87_r7_1 = ctxB[0x27];

        long double x87_r6_1 = ctxB[0x26];
        x87_r6_1 - x87_r7_1;
        long double x87_r7_3;

        if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_4 = ctxB[0x27];
            long double x87_r6_2 = ctxB[0x28];
            x87_r6_2 - x87_r7_4;

            if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_3 = ctxB[0x28];
            else
                x87_r7_3 = ctxB[0x27];
        }
        else
            x87_r7_3 = ctxB[0x26];

        long double x87_r7_6 = Render_ComputeNormals(ctxB[0x1b]) * x87_r7_3;
        DynObj_LinkDynamicCube_8(a2[1], ctxB, &a2[2], x87_r7_6, 1);
        memcpy(&ctxB[0x1c], &a2[0xe], 0x28);
        int32_t flagP1 = a2[0x22];
        ctxB[0x4c] = flagP1;
        Car_GunCreate(ctxB, ctxB, flagP1);
        int64_t v_18;
        WeaponType_RegisterType_2(&v_18, ctxB, 2);
        void* v_c;
        WeaponType_RegisterType_2(&v_c, ctxB, 3);
        float v_10;
        float v_4;
        long double x87_r7_8 = v_10 - v_4;
        long double f0 = 0f;
        x87_r7_8 - f0;
        int16_t result = (x87_r7_8 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f0) ? 1 : 0) << 0xa
            | (x87_r7_8 == f0 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 1)
            x87_r7_8 = -(x87_r7_8);

        v_18 = x87_r7_8 * 0.00081380208333333337;
        ctxB[0x4e] = v_18;
        return result;
    }

    int32_t __saved_esi_1 = *a2;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
