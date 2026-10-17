// IGI native provenance: DeathZone_LoadParameters - 0x00465CD0 - CFG score 87.5% (PASS; structural only); runtime behavior not verified.
// Evidence: 00465CD0-DeathZone_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DeathZone_LoadParameters.h"
int32_t DeathZone_LoadParameters(int32_t* context, float param_2)

{
    int32_t* flagP = param_2;
    void* data_1 = DynObj_Missing(*flagP);

    if (data_1)
    {
        memcpy(&context[0x3c], &flagP[8], 0x18);
        memcpy(&context[0x42], &flagP[0x18], 0x28);
        DynObj_LookupHashItem_6(flagP[1], context, data_1);
        long double fpu7 = context[0x27];
        long double fpu6 = context[0x28];
        fpu6 - fpu7;
        long double fpu_val_7_1;

        if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
                | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_1 = context[0x28];
        else
            fpu_val_7_1 = context[0x27];

        long double fpu_val_6_1 = context[0x26];
        fpu_val_6_1 - fpu_val_7_1;
        long double fpu_val_7_3;

        if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_4 = context[0x27];
            long double fpu_val_6_2 = context[0x28];
            fpu_val_6_2 - fpu_val_7_4;

            if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_3 = context[0x28];
            else
                fpu_val_7_3 = context[0x27];
        }
        else
            fpu_val_7_3 = context[0x26];

        long double fpu_val_7_6 = Render_ComputeNormals(context[0x1b]) * fpu_val_7_3;
        DynObj_LinkDynamicCube_8(flagP[1], context, &flagP[2], fpu_val_7_6, 2);
        memcpy(&context[0x1c], &flagP[0xe], 0x28);
        int32_t result = flagP[0x22];
        context[0x4c] = result;
        return result;
    }

    int32_t saved_ebx_1 = *flagP;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
