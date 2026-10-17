// IGI native provenance: Rotor_Setup - 0x0042C500 - CFG score 90.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042C500-Rotor_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Rotor_Setup.h"
int32_t* Rotor_Setup(void* context, int32_t* param_2)

{
    int32_t* data_1 = DynObj_Missing(*param_2);

    if (data_1)
    {
        *(context + 0x13c) = SoundSys_EvaluateTrigger_18(*param_2);
        memcpy(context + 0xf0, &param_2[8], 0x18);
        memcpy(context + 0x108, &param_2[0x18], 0x28);
        DynObj_LookupHashItem_6(param_2[1], context, data_1);
        long double fpu7 = *(context + 0x9c);
        long double fpu6 = *(context + 0xa0);
        fpu6 - fpu7;
        long double fpu_val_7_1;

        if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
                | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_1 = *(context + 0xa0);
        else
            fpu_val_7_1 = *(context + 0x9c);

        long double fpu_val_6_1 = *(context + 0x98);
        fpu_val_6_1 - fpu_val_7_1;
        long double fpu_val_7_3;

        if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_4 = *(context + 0x9c);
            long double fpu_val_6_2 = *(context + 0xa0);
            fpu_val_6_2 - fpu_val_7_4;

            if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_3 = *(context + 0xa0);
            else
                fpu_val_7_3 = *(context + 0x9c);
        }
        else
            fpu_val_7_3 = *(context + 0x98);

        long double fpu_val_7_6 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_3;
        DynObj_LinkDynamicCube_8(param_2[1], context, &param_2[2], fpu_val_7_6, 2);
        memcpy(context + 0x70, &param_2[0xe], 0x28);
        *(context + 0x138) = 0;
        int32_t flagP1 = param_2[0x22];
        *(context + 0x130) = flagP1;
        return Car_GunCreate(context, context, flagP1);
    }

    int32_t saved_ebx_1 = *param_2;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
