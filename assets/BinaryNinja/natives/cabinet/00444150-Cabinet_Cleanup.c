// Original IGI.EXE function: Cabinet_Cleanup (VA 0x00444150; static CFG gate PASS, CFG score 0.905).
#include "Cabinet_Cleanup.h"
int32_t Cabinet_Cleanup(double* context, float param_2)

{
    int32_t* flagP = param_2;
    void* data_1 = DynObj_Missing(*flagP);

    if (data_1)
    {
        DynObj_LookupHashItem_6(flagP[1], context, data_1);
        long double fpu7 = *(context + 0x9c);
        long double fpu6 = context[0x14];
        fpu6 - fpu7;
        long double fpu_val_7_1;

        if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
                | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_1 = context[0x14];
        else
            fpu_val_7_1 = *(context + 0x9c);

        long double fpu_val_6_1 = context[0x13];
        fpu_val_6_1 - fpu_val_7_1;
        long double fpu_val_7_3;

        if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_4 = *(context + 0x9c);
            long double fpu_val_6_2 = context[0x14];
            fpu_val_6_2 - fpu_val_7_4;

            if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_3 = context[0x14];
            else
                fpu_val_7_3 = *(context + 0x9c);
        }
        else
            fpu_val_7_3 = context[0x13];

        long double fpu_val_7_6 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_3;
        DynObj_LinkDynamicCube_8(flagP[1], context, &flagP[2], fpu_val_7_6, 1);
        memcpy(&context[0xe], &flagP[0xe], 0x28);
        context[0x26] = flagP[0x22];
        memcpy(&context[0x27], &flagP[2], 0x18);
        context[0x2a] = 0;
        *(context + 0x154) = 0;
        context[0x2b] = 0;
        return 0;
    }

    int32_t saved_ebx_1 = *flagP;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
