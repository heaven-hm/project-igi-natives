// IGI native provenance: AIStationaryGun_LoadParameters - 0x0046EAE0 - CFG score 89.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046EAE0-AIStationaryGun_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIStationaryGun_LoadParameters.h"
int32_t* AIStationaryGun_LoadParameters(double* context, float param_2)

{
    int32_t* context_val = param_2;
    void* data_1 = DynObj_Missing(*context_val);

    if (data_1)
    {
        memcpy(&context[0x1e], &context_val[8], 0x18);
        memcpy(&context[0x21], &context_val[0x18], 0x28);
        context[0x26] = context_val[0x22];
        DynObj_LookupHashItem_6(context_val[1], context, data_1);
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
        DynObj_LinkDynamicCube_8(context_val[1], context, &context_val[2], fpu_val_7_6, 1);
        memcpy(&context[0xe], &context_val[0xe], 0x28);
        context[0x37] = context_val[0x23];
        memcpy(&context[0x27], &context_val[2], 0x18);
        memcpy(&context[0x2a], &context_val[0xe], 0x28);
        *(context + 0x1bc) = 0;
        context[0x38] = 0;
        Script_ParseEnumReal32_12(context + 0x1c4);
        Weapon_EntityCreate(context, 0, *HumanPlayer_ApplyRecoil_10(context[0x37]), *(context[0x37] + 0x2c),
            0);
        double* item_4c = context;
        Script_CallNativeHandler_12(context + 0x1c4, nullptr);
        AI_FireWeapon_30(context, context[0x26] + 0x70);
        int32_t* result = Car_GunCreate(context, context, context[0x26]);
        context[0x3a] = 0;
        *(context + 0x1d4) = 0;
        *(context + 0x1e4) = 0;
        context[0x3b] = 0;
        return result;
    }

    int32_t saved_ebp_1 = *context_val;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
