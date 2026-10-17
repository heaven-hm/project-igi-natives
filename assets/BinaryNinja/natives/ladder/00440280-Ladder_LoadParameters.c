// Original IGI.EXE function: Ladder_LoadParameters (VA 0x00440280; static CFG gate PASS, CFG score 0.970).
#include "Ladder_LoadParameters.h"
int32_t Ladder_LoadParameters(float context, int32_t* param_2)

{
    int32_t* context_val = context;
    DynObj_QtasklistIsFull(Level_StartMission_3(), context_val);
    void* data_2 = DynObj_Missing(*param_2);

    if (data_2)
    {
        DynObj_LookupHashItem_6(param_2[1], context_val, data_2);
        long double fpu7 = context_val[0x27];
        long double fpu6 = context_val[0x28];
        fpu6 - fpu7;
        long double fpu_val_7_1;

        if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
                | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_1 = context_val[0x28];
        else
            fpu_val_7_1 = context_val[0x27];

        long double fpu_val_6_1 = context_val[0x26];
        fpu_val_6_1 - fpu_val_7_1;
        long double fpu_val_7_3;

        if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_4 = context_val[0x27];
            long double fpu_val_6_2 = context_val[0x28];
            fpu_val_6_2 - fpu_val_7_4;

            if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_3 = context_val[0x28];
            else
                fpu_val_7_3 = context_val[0x27];
        }
        else
            fpu_val_7_3 = context_val[0x26];

        long double fpu_val_7_6 = Render_ComputeNormals(context_val[0x1b]) * fpu_val_7_3;
        DynObj_LinkDynamicCube_8(param_2[1], context_val, &param_2[2], fpu_val_7_6, 1);
        memcpy(&context_val[0x1c], &param_2[0xe], 0x28);
        int32_t flagP1 = param_2[0x22];
        context_val[0x4c] = flagP1;
        Car_GunCreate(context_val, context_val, flagP1);
        int64_t item_18;
        WeaponType_RegisterType_2(&item_18, context_val, 2);
        void* item_c;
        WeaponType_RegisterType_2(&item_c, context_val, 3);
        float item_10;
        float item_4;
        long double fpu_val_7_8 = item_10 - item_4;
        long double f0 = 0.0f;
        fpu_val_7_8 - f0;
        int16_t result = (fpu_val_7_8 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f0) ? 1 : 0) << 0xa
            | (fpu_val_7_8 == f0 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 1)
            fpu_val_7_8 = -(fpu_val_7_8);

        item_18 = fpu_val_7_8 * 0.00081380208333333337;
        context_val[0x4e] = item_18;
        return result;
    }

    int32_t saved_esi_1 = *param_2;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
