// Original IGI.EXE function: Rotor_Setup (VA 0x0042C500; static CFG gate PASS, CFG score 0.900).
#include "Rotor_Setup.h"
int32_t* Rotor_Setup(void* a1, int32_t* a2)

{
    int32_t* valA1 = DynObj_Missing(*a2);

    if (valA1)
    {
        *(a1 + 0x13c) = SoundSys_EvaluateTrigger_18(*a2);
        memcpy(a1 + 0xf0, &a2[8], 0x18);
        memcpy(a1 + 0x108, &a2[0x18], 0x28);
        DynObj_LookupHashItem_6(a2[1], a1, valA1);
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
        DynObj_LinkDynamicCube_8(a2[1], a1, &a2[2], x87_r7_6, 2);
        memcpy(a1 + 0x70, &a2[0xe], 0x28);
        *(a1 + 0x138) = 0;
        int32_t flagP1 = a2[0x22];
        *(a1 + 0x130) = flagP1;
        return Car_GunCreate(a1, a1, flagP1);
    }

    int32_t __saved_ebx_1 = *a2;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
