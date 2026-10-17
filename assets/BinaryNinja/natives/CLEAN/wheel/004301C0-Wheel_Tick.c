// IGI native provenance: Wheel_Tick - 0x004301C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004301C0-Wheel_Tick.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Wheel_Tick.h"
int32_t Wheel_Tick(float context)

{
    int32_t* source_val = context;
    int32_t result_1 = source_val[0x4c];
    int16_t data_val = Script_ExecuteLevelScript_16();
    int32_t entity_val;
    entity_val = *(source_val[0x4c] + 0x1c);
    int32_t result = TaskType_IsDerivedFrom(entity_val, data_val);

    if (result)
    {
        if (source_val[0x54])
            return QTask_FindType(source_val);

        float flagP1 = source_val[0x4c];
        int16_t data_4 = Menu_LeaveMenus_23();

        if (*(flagP1 + 0x1c) != data_4)
            source_val[0x4e] = *(result_1 + 0x720);
        else
        {
            context = 0.0f;
            void* entity_1 = *(source_val[0x53] + 0x2d4);
            void* context_1 = *(*(flagP1 + 0x1b4) + 0x2d4);
            int32_t data_7 = source_val[0x52] * 5;
            int32_t dest_val = *(context_1 + (data_7 << 2) + 0x124);

            if (dest_val < 0)
                dest_val = 0xfffffff6 - dest_val;

            int32_t entity_4 = dest_val * 7;
            int16_t data_10;

            if (*(flagP1 + (entity_4 << 3) + 0x1d6))
            {
                float item_c;
                SoundSys_SetMasterVolume_17(&item_c, flagP1 + 0xf0, flagP1 + (entity_4 << 3) + 0x1c8);
                float item_4;
                long double fpu_val_7_1 = item_4;
                float item_8;
                long double fpu_val_6_1 = item_8;
                long double fpu_val_5_1 = item_c;
                long double fpu_val_4_5 =
                    sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_1 * fpu_val_7_1);
                context = fpu_val_4_5;
                long double f0_1 = 40.9599991f;
                fpu_val_4_5 - f0_1;
                data_10 = (fpu_val_4_5 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_4_5, f0_1) ? 1 : 0) << 0xa
                    | (fpu_val_4_5 == f0_1 ? 1 : 0) << 0xe;

                if (*(&data_10 + 1) & 1)
                    context = 0.0f;
            }
            else if (*(context_1 + (data_7 << 2) + 0x11d))
                context = *(result_1 + 0x720) * 44.6008873f * *(*(*(result_1 + 0x1b4) + 0x2d4) + 0x1c)
                    / *(flagP1 + 0x758) * 0.600000024f;

            data_10 = *(context_1 + 0x261);

            if (data_10)
                context = Vehicle_InitPlane(flagP1, dest_val) * context;

            void* context_2 = context_1 + source_val[0x52] * 0x14;
            source_val[0x4e] =
                context / (*(entity_1 + 0x2e8) * 6.2831853071795889) * 6.2831853071795889 * 0.300000012f
                + source_val[0x4e] * 0.699999988f;
            int16_t data_15;
            data_15 = *(context_2 + 0x11c);

            if (data_15)
                source_val[0x51] = -((*(context_2 + 0x120) * *(result_1 + 0x72c) * 0.0174532924f));

            long double fpu_val_7_19 = source_val[0x4f];
            long double f2_1 = 0.0f;
            fpu_val_7_19 - f2_1;

            if (!(*(&((fpu_val_7_19 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_19, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_19 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                int32_t context_3 = *(context_2 + 0x124);

                if (context_3 >= 0)
                {
                    void* data_16 = *(source_val[0x53] + 0x2d4);
                    float entity_10 = *(data_16 + 0x2ec);
                    float item_2c_3 = entity_10;
                    Vehicle_UpdateRudder(flagP1, context_3, source_val[0x4f] * *(data_16 + 0x2ec), entity_10);
                }
            }
        }

        result = result_1;

        if (*(result + 0x744))
            source_val[0x4e] = 0;

        long double fpu_val_7_22 = source_val[0x4f];
        long double f1_1 = 0.0f;
        fpu_val_7_22 - f1_1;
        result = (fpu_val_7_22 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_22, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_22 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            source_val[0x4e] = 0;
            source_val[0x50] = 0;
        }

        source_val[0x50] = source_val[0x50] - source_val[0x4e];
        int32_t* i_1 = source_val[2];

        if (*i_1)
        {
            int32_t* i = i_1;

            if (i)
            {
                int32_t temp_6 = g_afa7e0;

                do
                {
                    int32_t* source_1 = *i;
                    void* data_20;

                    if (!source_1)
                        data_20 = nullptr;
                    else
                    {
                        int32_t data_17 = *source_1;
                        int32_t data_18 = -(data_17);
                        data_20 = (data_18 - data_18) & source_1;
                    }

                    *((temp_6 << 2) + &g_afa6e0) = data_20;
                    int32_t temp_7 = temp_6 + 1;
                    int32_t data_21 = 0;
                    g_afa7e0 = temp_7;
                    data_21 = i[7];
                    result = *((data_21 << 2) + &g_a970e0);

                    if (result)
                    {
                        result = result(i);
                        temp_7 = g_afa7e0;
                    }

                    i = *((temp_7 << 2) + &g_afa6dc);
                    temp_6 = temp_7 - 1;
                    g_afa7e0 = temp_6;
                } while (i);
            }
        }
    }

    return result;
}
