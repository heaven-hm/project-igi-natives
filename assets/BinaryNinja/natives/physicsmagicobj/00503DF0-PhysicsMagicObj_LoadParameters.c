// Original IGI.EXE function: PhysicsMagicObj_LoadParameters (VA 0x00503DF0; static CFG gate PASS, CFG score 0.917).
#include "PhysicsMagicObj_LoadParameters.h"
int32_t* PhysicsMagicObj_LoadParameters(void* a1, float a2)

{
    int32_t* flagP = a2;
    void* valA1 = DynObj_Missing(*flagP);

    if (valA1)
    {
        DynObj_LookupHashItem_6(flagP[1], a1, valA1);
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

            if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_3 = *(a1 + 0xa0);
            else
                x87_r7_3 = *(a1 + 0x9c);
        }
        else
            x87_r7_3 = *(a1 + 0x98);

        long double x87_r7_6 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_3;
        DynObj_LinkDynamicCube_8(flagP[1], a1, &flagP[2], x87_r7_6, 2);
        memcpy(a1 + 0x70, &flagP[0xe], 0x28);
        memcpy(a1 + 0x720, &flagP[8], 0x18);
        memcpy(a1 + 0x738, &flagP[0x18], 0x28);
        *(a1 + 0x760) = flagP[0x22];
        Script_ParseEnumInt32_28(a1);
        Script_ParseEnumReal32_28(a1, SoundSys_EvaluateTrigger_18(*flagP));
        return Car_GunCreate(a1, a1, flagP[0x22]);
    }

    int32_t __saved_ebx_1 = *flagP;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
