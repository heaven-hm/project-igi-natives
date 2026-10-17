// Original IGI.EXE function: PhysicsMagicObj_LoadParameters (VA 0x00503DF0; static CFG gate PASS, CFG score 0.917).
#include "PhysicsMagicObj_LoadParameters.h"
int32_t* PhysicsMagicObj_LoadParameters(void* context, float param_2)

{
    int32_t* flagP = param_2;
    void* data_1 = DynObj_Missing(*flagP);

    if (data_1)
    {
        DynObj_LookupHashItem_6(flagP[1], context, data_1);
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
        DynObj_LinkDynamicCube_8(flagP[1], context, &flagP[2], fpu_val_7_6, 2);
        memcpy(context + 0x70, &flagP[0xe], 0x28);
        memcpy(context + 0x720, &flagP[8], 0x18);
        memcpy(context + 0x738, &flagP[0x18], 0x28);
        *(context + 0x760) = flagP[0x22];
        Script_ParseEnumInt32_28(context);
        Script_ParseEnumReal32_28(context, SoundSys_EvaluateTrigger_18(*flagP));
        return Car_GunCreate(context, context, flagP[0x22]);
    }

    int32_t saved_ebx_1 = *flagP;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
