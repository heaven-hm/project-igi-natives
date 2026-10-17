// Original IGI.EXE function: Cabinet_Cleanup (VA 0x00444150; static CFG gate PASS, CFG score 0.905).
#include "Cabinet_Cleanup.h"
int32_t Cabinet_Cleanup(double* a1, float a2)

{
    int32_t* flagP = a2;
    void* valA1 = DynObj_Missing(*flagP);

    if (valA1)
    {
        DynObj_LookupHashItem_6(flagP[1], a1, valA1);
        long double fpu7 = *(a1 + 0x9c);
        long double fpu6 = a1[0x14];
        fpu6 - fpu7;
        long double x87_r7_1;

        if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
                | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_1 = a1[0x14];
        else
            x87_r7_1 = *(a1 + 0x9c);

        long double x87_r6_1 = a1[0x13];
        x87_r6_1 - x87_r7_1;
        long double x87_r7_3;

        if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_4 = *(a1 + 0x9c);
            long double x87_r6_2 = a1[0x14];
            x87_r6_2 - x87_r7_4;

            if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_3 = a1[0x14];
            else
                x87_r7_3 = *(a1 + 0x9c);
        }
        else
            x87_r7_3 = a1[0x13];

        long double x87_r7_6 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_3;
        DynObj_LinkDynamicCube_8(flagP[1], a1, &flagP[2], x87_r7_6, 1);
        memcpy(&a1[0xe], &flagP[0xe], 0x28);
        a1[0x26] = flagP[0x22];
        memcpy(&a1[0x27], &flagP[2], 0x18);
        a1[0x2a] = 0;
        *(a1 + 0x154) = 0;
        a1[0x2b] = 0;
        return 0;
    }

    int32_t __saved_ebx_1 = *flagP;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
