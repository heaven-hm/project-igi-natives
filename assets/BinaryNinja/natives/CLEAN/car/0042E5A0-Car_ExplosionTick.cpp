// IGI native provenance: Car_ExplosionTick - 0x0042E5A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042E5A0-Car_ExplosionTick.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Car_ExplosionTick.h"
int32_t* Car_ExplosionTick(double* context)

{
    int32_t* data_val;
    data_val = *(context + 0x91c);

    if (data_val)
    {
        long double fpu_val_7_1 = *(context + 0x9c);
        long double fpu_val_6_1 = context[0x14];
        fpu_val_6_1 - fpu_val_7_1;
        long double fpu_val_7_2;

        if (!(*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_2 = context[0x14];
        else
            fpu_val_7_2 = *(context + 0x9c);

        long double fpu_val_6_2 = context[0x13];
        fpu_val_6_2 - fpu_val_7_2;
        long double fpu_val_7_4;

        if (*(&((fpu_val_6_2 < fpu_val_7_2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_2) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == fpu_val_7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_5 = *(context + 0x9c);
            long double fpu_val_6_3 = context[0x14];
            fpu_val_6_3 - fpu_val_7_5;

            if (!(*(&((fpu_val_6_3 < fpu_val_7_5 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_3, fpu_val_7_5) ? 1 : 0) << 0xa
                    | (fpu_val_6_3 == fpu_val_7_5 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_4 = context[0x14];
            else
                fpu_val_7_4 = *(context + 0x9c);
        }
        else
            fpu_val_7_4 = context[0x13];

        int32_t* data_2 = *(context + 0x6c);
        float i_1 = fpu_val_7_4;
        long double fp0_1 = Render_ComputeNormals(data_2);
        void* temp_1 = *(*(context + 0x1b4) + 0x2d4);
        void* entity_2 = context[0x124];
        float i_2 = *(temp_1 + 0x2ac);
        i_1 = fp0_1 * i_1;
        int32_t item_20;

        if (entity_2 == 0xffffffff)
        {
            if (!i_2)
            {
                void* item_68_1 = entity_2;
                void* item_6c = entity_2;
                void* item_70 = entity_2;
                struct status_msg* data_5 = FX_SmokeEmit(&context[4], 1, 0, 0x3f800000, i_1 * 0.25f,
                    i_1 * 0.0500000007f, i_1 * 0.00499999989f, 3, 1, nullptr, "1009_01_1",
                    "explo_03_l", 0x15, 2, 0x47c80000, 0);
                context[0x124] = 0xa;
                return data_5;
            }

            if (i_2 > 0)
            {
                int32_t* context_1 = temp_1 + 0x284;
                i_1 = i_2;
                float i;

                do
                {
                    uint32_t data_4 = Sys_FreeMemory_14(Level_SetMission_5(), 0x1e);
                    WeaponType_UpdateAnim(&item_20, context, *context_1);
                    item_20 = item_20 + context[4];
                    int32_t item_18;
                    item_18 = item_18 + context[5];
                    double item_10 = item_10 + context[6];
                    FX_SmokeEmit(&item_20, 1, data_4, 0x3f800000, 0x46400000, 0x45400000, 0x45400000,
                        3, 2, nullptr, "1009_01_1", "explo_03_l", 0x15, 2, 0x47c80000, 0);
                    i = i_1;
                    context_1 = &context_1[1];
                    i_2 = i - 1;
                    i_1 = i_2;
                } while (i != 1);
            }

            context[0x124] = 0x1e;
            return i_2;
        }

        data_val = entity_2 - 1;
        context[0x124] = data_val;

        if (!data_val)
        {
            int32_t* item_2c = data_val;
            int32_t* item_28_1 = data_val;
            int32_t* item_24_1 = data_val;
            item_20 = 0x3f800000;
            int32_t item_1c_1 = 0x3f800000;
            int32_t item_18_1 = 0x3f800000;
            Script_EvaluateCondition_13(Script_FormatString(), temp_1 + 0x2b0, &context[4], &context[0xe], &item_20, &item_2c);
            i_1 = Level_StartMission_4();
            QTask_CleanupTypes(context);
            context[0xe9] = 0;
            Script_ParseEnumInt32_17(context);
            data_val = Car_Cleanup(context, &i_1);
            *(context + 0x2ed5) = 1;
        }
    }

    return data_val;
}
