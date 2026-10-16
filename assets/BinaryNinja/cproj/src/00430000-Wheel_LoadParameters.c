#include "gi_platform.h"
#include "00430000-Wheel_LoadParameters.h"
int32_t Wheel_LoadParameters(int32_t* a1, float a2)

{
    int32_t* ctxB = a2;
    void* valA1 = DynObj_Missing(*ctxB);

    if (valA1)
    {
        memcpy(&a1[0x3c], &ctxB[8], 0x18);
        memcpy(&a1[0x42], &ctxB[0x18], 0x28);
        DynObj_LookupHashItem_6(ctxB[1], a1, valA1);
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
        DynObj_LinkDynamicCube_8(ctxB[1], a1, &ctxB[2], x87_r7_6, 2);
        memcpy(&a1[0x1c], &ctxB[0xe], 0x28);
        a1[0x53] = SoundSys_EvaluateTrigger_18(*ctxB);
        a1[0x4f] = 0;
        a1[0x50] = 0;
        a1[0x51] = 0;
        a1[0x4e] = 0;
        void* objC2 = ctxB[0x22];
        a1[0x4c] = objC2;
        int32_t result = Menu_LeaveMenus_23();

        if (*(objC2 + 0x1c) == result)
        {
            a1[0x52] = *(objC2 + 0x750);
            *(objC2 + 0x750) += 1;
            result = a1[0x52];
            *(objC2 + result * 0x1c + 0x75c) = 1;
        }

        a1[0x54] = 0;
        return result;
    }

    int32_t v_14_1 = *ctxB;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
