// IGI native provenance: Vehicle_InitPlane_9 - 0x0043D960 - CFG score 96.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043D960-Vehicle_InitPlane_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_InitPlane_9.h"
int32_t Vehicle_InitPlane_9(float context)

{
    float context_val = context;
    int32_t result = *(context_val + 0x180);
    char item_55 = 1;

    if (result != 0xffffffff)
    {
        float item_54_1 = Physics_SimulateRigidBody(result);
        context = *(context_val + 0x184);
        long double fpu_val_7_2 = context;
        long double f1_1 = item_54_1;
        fpu_val_7_2 - f1_1;

        if (!(*(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            *(context_val + 0x184) = item_54_1;
            context = item_54_1 - 0.100000001f;
        }

        long double fpu_val_7_5 = context;
        long double f2_1 = 0.0f;
        fpu_val_7_5 - f2_1;
        int16_t data_1 = (fpu_val_7_5 < f2_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_5, f2_1) ? 1 : 0) << 0xa | (fpu_val_7_5 == f2_1 ? 1 : 0) << 0xe;

        if (*(&data_1 + 1) & 1)
        {
            context = 0.0f;
            *(context_val + 0x184) = 0;
        }

        data_1 = *(context_val + 0x18c);
        char* item_78;
        float item_50;
        double item_40;
        double item_28;
        double item_20;
        double item_18;
        double* flagP1;

        if (!data_1)
        {
            float* saved_edi_3 = &item_50;
            int32_t item_6c_2 = 0;
            int32_t item_70_2 = 0;
            flagP1 = context_val + 0xf0;
            int32_t temp_4 = *(context_val + 0x180);
            item_78 = &item_55;
            item_50 = 0.0f;
            int32_t item_4c_1 = 0;
            int32_t item_48_1 = 0;
            result = Script_ParseEnumReal32_32(temp_4, &item_28, flagP1, item_78, context, item_70_2, saved_edi_3);
            result = item_55;

            if (result)
            {
                result = *(context_val + 0x18d);

                if (!result)
                {
                    float item_10;
                    item_50 = item_28 * *(context_val + 0x120) + item_10 * *(context_val + 0x128)
                        + *(&item_20 + 4) * *(context_val + 0x124);
                    float item_c;
                    float item_4c_2 = *(&item_28 + 4) * *(context_val + 0x120) + item_c * *(context_val + 0x128)
                        + item_18 * *(context_val + 0x124);
                    float item_8;
                    float item_48_2 = item_20 * *(context_val + 0x120) + item_8 * *(context_val + 0x128)
                        + *(&item_18 + 4) * *(context_val + 0x124);
                    float item_44_1 = item_28 * *(context_val + 0x12c) + item_10 * *(context_val + 0x134)
                        + *(&item_20 + 4) * *(context_val + 0x130);
                    item_40 = *(&item_28 + 4) * *(context_val + 0x12c) + item_c * *(context_val + 0x134)
                        + item_18 * *(context_val + 0x130);
                    *(&item_40 + 4) = item_20 * *(context_val + 0x12c) + item_8 * *(context_val + 0x134)
                        + *(&item_18 + 4) * *(context_val + 0x130);
                    float item_38_1 = item_10 * *(context_val + 0x140) + *(&item_20 + 4) * *(context_val + 0x13c)
                        + item_28 * *(context_val + 0x138);
                    float item_34_1 = item_c * *(context_val + 0x140) + item_18 * *(context_val + 0x13c)
                        + *(&item_28 + 4) * *(context_val + 0x138);
                    result = *(context_val + 0x144);
                    int32_t item_4;
                    int32_t item_2c_1 = result + item_4 + 1;
                    float item_30_1 = item_8 * *(context_val + 0x140) + *(&item_18 + 4) * *(context_val + 0x13c)
                        + item_20 * *(context_val + 0x138);
                    memcpy(context_val + 0x70, &item_50, 0x28);
                }

                goto label_43dc50;
            }
        }
        else
        {
            void* data_2 = Physics_CheckHullCollision(*(context_val + 0x180));
            Physics_UpdateForces(&item_50, *(context_val + 0x180), 0);
            int32_t temp_2 = *(context_val + 0x180);
            item_78 = data_2 - 1;
            result = Physics_UpdateForces(&item_28, temp_2, item_78);
            long double fpu_val_7_7 = *(context_val + 0x184) / item_54_1;
            flagP1 = context_val + 0xf0;
            *flagP1 = (item_28 - item_50) * fpu_val_7_7 + item_50;
            int32_t item_48;
            *(context_val + 0xf8) = (item_20 - item_48) * fpu_val_7_7 + item_48;
            *(context_val + 0x100) = (item_18 - item_40) * fpu_val_7_7 + item_40;
        label_43dc50:
            result = item_55;

            if (result)
            {
                long double fpu_val_7_47 = *(context_val + 0x9c);
                long double fpu_val_6_48 = *(context_val + 0xa0);
                fpu_val_6_48 - fpu_val_7_47;
                long double fpu_val_7_48;

                if (!(*(&((fpu_val_6_48 < fpu_val_7_47 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_48, fpu_val_7_47) ? 1 : 0) << 0xa
                        | (fpu_val_6_48 == fpu_val_7_47 ? 1 : 0) << 0xe) + 1) & 1))
                    fpu_val_7_48 = *(context_val + 0xa0);
                else
                    fpu_val_7_48 = *(context_val + 0x9c);

                long double fpu_val_6_49 = *(context_val + 0x98);
                fpu_val_6_49 - fpu_val_7_48;
                long double fpu_val_7_50;

                if (*(&((fpu_val_6_49 < fpu_val_7_48 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_49, fpu_val_7_48) ? 1 : 0) << 0xa
                    | (fpu_val_6_49 == fpu_val_7_48 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double fpu_val_7_51 = *(context_val + 0x9c);
                    long double fpu_val_6_50 = *(context_val + 0xa0);
                    fpu_val_6_50 - fpu_val_7_51;

                    if (!(*(&((fpu_val_6_50 < fpu_val_7_51 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_50, fpu_val_7_51) ? 1 : 0) << 0xa
                            | (fpu_val_6_50 == fpu_val_7_51 ? 1 : 0) << 0xe) + 1) & 1))
                        fpu_val_7_50 = *(context_val + 0xa0);
                    else
                        fpu_val_7_50 = *(context_val + 0x9c);
                }
                else
                    fpu_val_7_50 = *(context_val + 0x98);

                float saved_edi_5 = Render_ComputeNormals(*(context_val + 0x6c)) * fpu_val_7_50;
                return WorldObject_CommitTransform(Level_StartMission_4(), context_val, flagP1, saved_edi_5);
            }
        }
    }

    return result;
}
