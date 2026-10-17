// IGI native provenance: DeathZone_Process - 0x00465F50 - CFG score 87.5% (PASS; structural only); runtime behavior not verified.
// Evidence: 00465F50-DeathZone_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DeathZone_Process.h"
int32_t DeathZone_Process(float context, double** param_2)

{
    int16_t data_val = Script_ExecuteLevelScript_16();
    int32_t entity_val;
    entity_val = *(*(context + 0x130) + 0x1c);
    int32_t result = TaskType_IsDerivedFrom(entity_val, data_val);

    if (result)
    {
        float* data_2 = param_2[1];
        long double fpu_val_7_1 = data_2[2];
        double item_58;
        memcpy(&item_58, context + 0xf0, 0x18);
        double item_50;
        double item_48;
        double item_28 = fpu_val_7_1 * item_48 + data_2[1] * item_50 + *data_2 * item_58;
        double item_20_1 = data_2[5] * item_48 + data_2[4] * item_50 + data_2[3] * item_58;
        double* data_3 = *param_2;
        double item_18_1 = data_2[8] * item_48 + data_2[7] * item_50 + data_2[6] * item_58;
        long double fpu_val_7_13 = item_28;
        double item_40;
        memcpy(&item_40, &item_28, 0x18);
        item_40 = fpu_val_7_13 + *data_3;
        double item_38;
        double item_38_1 = item_38 + data_3[1];
        double item_30;
        double item_30_1 = item_30 + data_3[2];
        long double fpu_val_7_19 = *(context + 0x9c);
        long double fpu_val_6_13 = *(context + 0xa0);
        fpu_val_6_13 - fpu_val_7_19;
        long double fpu_val_7_20;

        if (!(*(&((fpu_val_6_13 < fpu_val_7_19 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_13, fpu_val_7_19) ? 1 : 0) << 0xa
                | (fpu_val_6_13 == fpu_val_7_19 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_20 = *(context + 0xa0);
        else
            fpu_val_7_20 = *(context + 0x9c);

        long double fpu_val_6_14 = *(context + 0x98);
        fpu_val_6_14 - fpu_val_7_20;
        long double fpu_val_7_22;

        if (*(&((fpu_val_6_14 < fpu_val_7_20 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_6_14, fpu_val_7_20) ? 1 : 0) << 0xa
            | (fpu_val_6_14 == fpu_val_7_20 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_23 = *(context + 0x9c);
            long double fpu_val_6_15 = *(context + 0xa0);
            fpu_val_6_15 - fpu_val_7_23;

            if (!(*(&((fpu_val_6_15 < fpu_val_7_23 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_15, fpu_val_7_23) ? 1 : 0) << 0xa
                    | (fpu_val_6_15 == fpu_val_7_23 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_22 = *(context + 0xa0);
            else
                fpu_val_7_22 = *(context + 0x9c);
        }
        else
            fpu_val_7_22 = *(context + 0x98);

        float item_6c_2 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_22;
        double* item_70 = &item_40;
        WorldObject_CommitTransform(Level_StartMission_4(), context, item_70, item_6c_2);
        float* data_6 = param_2[1];
        item_28 = *data_6 * *(context + 0x108) + *(context + 0x114) * data_6[1] + data_6[2] * *(context + 0x120);
        *(&item_28 + 4) =
            *data_6 * *(context + 0x10c) + *(context + 0x118) * data_6[1] + data_6[2] * *(context + 0x124);
        item_20_1 =
            *data_6 * *(context + 0x110) + *(context + 0x11c) * data_6[1] + data_6[2] * *(context + 0x128);
        *(&item_20_1 + 4) =
            data_6[5] * *(context + 0x120) + data_6[3] * *(context + 0x108) + data_6[4] * *(context + 0x114);
        item_18_1 =
            data_6[5] * *(context + 0x124) + data_6[3] * *(context + 0x10c) + data_6[4] * *(context + 0x118);
        *(&item_18_1 + 4) =
            data_6[5] * *(context + 0x128) + data_6[3] * *(context + 0x110) + data_6[4] * *(context + 0x11c);
        float item_10_1 =
            data_6[8] * *(context + 0x120) + data_6[6] * *(context + 0x108) + data_6[7] * *(context + 0x114);
        float item_c_1 =
            data_6[8] * *(context + 0x124) + data_6[6] * *(context + 0x10c) + data_6[7] * *(context + 0x118);
        result = data_6[9] + *(context + 0x12c) + 1;
        int32_t result_1 = result;
        float item_8_1 =
            data_6[8] * *(context + 0x128) + data_6[6] * *(context + 0x110) + data_6[7] * *(context + 0x11c);
        memcpy(context + 0x70, &item_28, 0x28);
    }

    return result;
}
