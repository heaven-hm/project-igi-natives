// IGI native provenance: Vehicle_DeployGear_2 - 0x00431E30 - CFG score 97.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 00431E30-Vehicle_DeployGear_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_DeployGear_2.h"
int32_t Vehicle_DeployGear_2(float context)

{
    long double fpu7 = *(context + 0x720);
    long double f1 = 0.80000000000000004;
    fpu7 - f1;
    void* temp_val = *(context + 0x1b4);
    void* entity_val = *(temp_val + 0x2d4);
    float data_1;

    if (!(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
            | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 1))
        data_1 = *(entity_val + 0x20);
    else
        data_1 = *(entity_val + 0x24);

    long double fpu_val_7_1 = *(context + 0x720);
    long double f2 = *(context + 0x730);
    fpu_val_7_1 - f2;

    if (!(*(&((fpu_val_7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double f3_1 = *(context + 0x730);
        fpu_val_7_1 - f3_1;

        if (!(*(&((fpu_val_7_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            fpu_val_7_1 = fpu_val_7_1 - data_1;
            long double f6_1 = *(context + 0x730);
            fpu_val_7_1 - f6_1;

            if (*(&((fpu_val_7_1 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_1 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                fpu_val_7_1 = *(context + 0x730);
        }
    }
    else
    {
        fpu_val_7_1 = fpu_val_7_1 + data_1;
        long double f4_1 = *(context + 0x730);
        fpu_val_7_1 - f4_1;

        if (!(*(&((fpu_val_7_1 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            fpu_val_7_1 = *(context + 0x730);
    }

    long double f5 = 0.00100000005f;
    fpu_val_7_1 - f5;

    if (*(&((fpu_val_7_1 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f5) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
    {
        long double fpu_val_6_1 = *(context + 0x730);
        long double f8_1 = 0.0f;
        fpu_val_6_1 - f8_1;

        if (*(&((fpu_val_6_1 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f8_1) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
            fpu_val_7_1 = 0.0f;
    }

    long double fpu_val_6_2 = *(entity_val + 8);
    float entity_1 = *(entity_val + 0x18);
    float item_78 = *(entity_val + 0x10);
    float item_74 = entity_1;
    *(context + 0x720) = fpu_val_7_1;
    float item_80_1 = (1.0f - fpu_val_6_2) * *(context + 0x734) + fpu_val_6_2 * *(context + 0x724);
    long double fpu_val_6_6 = 1.0f - item_78;
    *(context + 0x724) = item_80_1;
    float item_7c = fpu_val_6_6 * *(context + 0x738) + item_78 * *(context + 0x728);
    long double fpu_val_6_10 = 1.0f - item_74;
    *(context + 0x728) = item_7c;
    item_78 = fpu_val_6_10 * *(context + 0x73c) + item_74 * *(context + 0x72c);
    long double fpu_val_6_13 = item_80_1;
    long double f7 = 0.0f;
    fpu_val_6_13 - f7;
    *(context + 0x72c) = item_78;
    float item_50;
    float item_28;
    float item_24;
    float item_20;
    float item_1c;
    float item_18;
    float item_14;

    if (!(*(&((fpu_val_6_13 < f7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_13, f7) ? 1 : 0) << 0xa
        | (fpu_val_6_13 == f7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_431fb7:
        long double fpu_val_6_16;
        long double f10_1;

        if (*(context + 0x1b8))
        {
            fpu_val_6_16 = *(context + 0xf8);
            f10_1 = 2.0f;
            fpu_val_6_16 - f10_1;
        }

        if (!*(context + 0x1b8) || !(*(&((fpu_val_6_16 < f10_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_6_16, f10_1) ? 1 : 0) << 0xa
            | (fpu_val_6_16 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            void* data_9 = *(temp_val + 0x2d4);
            item_74 = item_80_1 * *(data_9 + 4);
            float item_7c_1 = item_7c * *(data_9 + 0xc);
            long double fpu_val_6_22 = item_78 * *(data_9 + 0x14);
            int32_t item_44_1 = 0;
            int32_t item_40_1 = 0;
            int32_t item_3c_1 = 0x444ccccd;
            item_50 = 0.0f;
            int32_t item_48_1 = 0;
            int32_t item_68_1 = 0;
            int32_t item_64_1 = 0;
            int32_t item_60_1 = 0x43cccccd;
            int32_t item_70_1 = 0;
            int32_t item_6c_1 = 0;
            item_1c = 0.0f;
            item_18 = 12288.0f;
            item_14 = 0.0f;
            item_24 = 0.0f;
            float item_4c_1 = item_74 * *(temp_val + 8) * -0.800000012f;
            item_20 = 0.0f;
            item_74 = item_7c_1 * *(temp_val + 8);
            item_28 = fpu_val_7_1 * fpu_val_6_22 * *(temp_val + 8) * 0.0799999982f;
            ForceAccumulator_Add(context + 0xf0, &item_50);
            ForceAccumulator_Add(context + 0xf0, &item_74);
            ForceAccumulator_Add(context + 0xf0, &item_28);
        }
    }
    else
    {
        long double fpu_val_6_14 = item_7c;
        long double f9_1 = 0.0f;
        fpu_val_6_14 - f9_1;

        if (!(*(&((fpu_val_6_14 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_14, f9_1) ? 1 : 0) << 0xa
                | (fpu_val_6_14 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_431fb7;

        long double fpu_val_6_15 = item_78;
        long double f11_1 = 0.0f;
        fpu_val_6_15 - f11_1;

        if (!(*(&((fpu_val_6_15 < f11_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_15, f11_1) ? 1 : 0) << 0xa
                | (fpu_val_6_15 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_431fb7;
    }

    if (!*(context + 0x1b8))
    {
        long double fpu_val_7_8 = *(context + 0xf8);
        long double f12_1 = 2.0f;
        fpu_val_7_8 - f12_1;

        if (!(*(&((fpu_val_7_8 < f12_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f12_1) ? 1 : 0) << 0xa
            | (fpu_val_7_8 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double fpu_val_7_9 = *(context + 0x78);
            long double fpu_val_6_28 = *(context + 0x84);
            long double fpu_val_5_10 = *(context + 0x90);
            long double fpu_val_4_1 = *(context + 0x70);
            long double f13_1 = 0.0f;
            fpu_val_4_1 - f13_1;
            float entity_3 = *(context + 0x7c);
            long double fpu_val_3_1;
            long double f16_1;

            if (*(&((fpu_val_4_1 < f13_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_4_1, f13_1) ? 1 : 0) << 0xa
                | (fpu_val_4_1 == f13_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40)
            {
                fpu_val_3_1 = entity_3;
                f16_1 = 0.0f;
                fpu_val_3_1 - f16_1;
            }

            long double fpu_val_7_10;

            if (*(&((fpu_val_4_1 < f13_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_4_1, f13_1) ? 1 : 0) << 0xa
                    | (fpu_val_4_1 == f13_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40 && *(&(
                    (fpu_val_3_1 < f16_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_3_1, f16_1) ? 1 : 0) << 0xa
                    | (fpu_val_3_1 == f16_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40)
                fpu_val_7_10 = item_74;
            else
            {
                long double fpu_val_3_2 = entity_3;
                long double fpu_val_3_4 = 1.0 / sqrtl(fpu_val_4_1 * fpu_val_4_1 + fpu_val_3_2 * fpu_val_3_2);
                item_74 = fpu_val_4_1 * fpu_val_3_4;
                long double f14_1 = 0.0f;
                fpu_val_5_10 - f14_1;
                bool c1_1 = /* bool c1_1 = unknown  {fmul fp0, fp3} */;
                long double fpu_val_4_6 =
                    0.0f * fpu_val_5_10 + entity_3 * fpu_val_3_4 * fpu_val_6_28 + item_74 * fpu_val_7_9;

                fpu_val_7_10 = *(&((fpu_val_5_10 < f14_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                    | (FCMP_UO(fpu_val_5_10, f14_1) ? 1 : 0) << 0xa
                    | (fpu_val_5_10 == f14_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x41
                    ? fpu_val_4_6 * 0.699999988f : fpu_val_4_6 * -0.699999988f;
            }

            float item_94_2 = entity_3;
            Sys_CloseFileStream_12(&item_28,
                fpu_val_7_10 * *(*(*(context + 0x1b4) + 0x2d4) + 0x14) * 0.00029088820866572169);
            float item_10;
            item_50 = item_28 * *(context + 0x70) + item_10 * *(context + 0x78) + item_1c * *(context + 0x74);
            float item_c;
            float item_4c_2 =
                item_24 * *(context + 0x70) + item_c * *(context + 0x78) + item_18 * *(context + 0x74);
            float item_8;
            float item_48_2 =
                item_20 * *(context + 0x70) + item_8 * *(context + 0x78) + item_14 * *(context + 0x74);
            float item_44_2 =
                item_28 * *(context + 0x7c) + item_10 * *(context + 0x84) + item_1c * *(context + 0x80);
            float item_40_2 =
                item_24 * *(context + 0x7c) + item_c * *(context + 0x84) + item_18 * *(context + 0x80);
            float item_3c_2 =
                item_20 * *(context + 0x7c) + item_8 * *(context + 0x84) + item_14 * *(context + 0x80);
            float item_38_1 =
                item_10 * *(context + 0x90) + item_28 * *(context + 0x88) + item_1c * *(context + 0x8c);
            int32_t item_4;
            int32_t item_2c_1 = *(context + 0x94) + item_4 + 1;
            float item_34_1 =
                item_c * *(context + 0x90) + item_24 * *(context + 0x88) + item_18 * *(context + 0x8c);
            float item_30_1 =
                item_8 * *(context + 0x90) + item_20 * *(context + 0x88) + item_14 * *(context + 0x8c);
            memcpy(context + 0x70, &item_50, 0x28);
        }
    }

    if (!Script_ParseEnumReal32_29(context))
    {
        float item_70_3 = context;
        Vehicle_UpdateCockpit_2(context);
        void* data_15 = *(context + 0x1b4);

        if (*(*(data_15 + 0x2d4) + 0x28))
        {
            float item_5c = *(context + 0x108);
            float temp_5 = *(context + 0x10c);
            item_5c = -(item_5c);
            float item_58_2 = -(temp_5);
            float item_54_2 = -(*(context + 0x110));
            void* data_16 = *(data_15 + 0x2d4);
            SoundSys_SetMasterVolume_16(data_16 + 0x2c, *(data_16 + 0x28), 0.000326999987f, context + 0xf0, context + 0x70,
                &item_5c);
        }

        Script_FormatString_28(context, 44.6008873f, 1.0f, 0.920000017f, Level_StartMission_4(), 0xc, &item_74);
    }

    void* data_19 = *(context + 0xe8);

    if (data_19)
    {
        item_74 = context + 0x20;
        int32_t item_70_4 = context + 0x70;
        float item_6c_2 = context;
        int32_t* i_2 = *(data_19 + 8);

        if (*i_2)
        {
            int32_t data_31;

            for (int32_t* i = i_2; i; i = *((data_31 << 2) + &g_afa6e0))
            {
                int32_t* entity_10 = *i;
                void* data_23;

                if (!entity_10)
                    data_23 = nullptr;
                else
                {
                    int32_t data_20 = *entity_10;
                    int32_t data_21 = -(data_20);
                    data_23 = (data_21 - data_21) & entity_10;
                }

                int32_t entity_11 = g_afa7e0;
                *((entity_11 << 2) + &g_afa6e0) = data_23;
                g_afa7e0 = entity_11 + 1;
                uint32_t data_25 = MagicObj_GetEventId();
                int32_t entity_13 = 0;
                entity_13 = i[7];
                int32_t data_29 = *(((data_25 * 0x180 + entity_13) << 2) + &g_a96ae0);

                if (data_29)
                    data_29(i, &item_74);

                data_31 = g_afa7e0 - 1;
                g_afa7e0 = data_31;
            }
        }
    }

    void* data_32 = *(context + 0x748);

    if (data_32)
    {
        int32_t entity_14 = *(context + 0x720);
        item_74 = 1.40129846e-45.0f;
        *(data_32 + 4) = entity_14;
        long double fpu_val_7_56 = *(context + 0x720);
        long double f17_1 = 0.00999999978f;
        fpu_val_7_56 - f17_1;

        if (*(&((fpu_val_7_56 < f17_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_56, f17_1) ? 1 : 0) << 0xa
                | (fpu_val_7_56 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            item_74 = 0.0f;

        *(*(context + 0x748) + 8) = item_74;
    }

    int32_t* i_1 = *(context + 8);
    item_74 = context + 0x20;
    int32_t item_70_5 = context + 0x70;
    int32_t result = *i_1;

    if (result && i_1)
    {
        int32_t temp_9 = g_afa7e0;

        do
        {
            int32_t* entity_16 = *i_1;
            void* data_38;

            if (!entity_16)
                data_38 = nullptr;
            else
            {
                int32_t data_35 = *entity_16;
                int32_t data_36 = -(data_35);
                data_38 = (data_36 - data_36) & entity_16;
            }

            *((temp_9 << 2) + &g_afa6e0) = data_38;
            g_afa7e0 = temp_9 + 1;
            uint32_t data_40 = DynObj_CreateMagicObject_6();
            int32_t data_41 = 0;
            data_41 = i_1[7];
            result = *(((data_40 * 0x180 + data_41) << 2) + &g_a96ae0);

            if (result)
                result = result(i_1, &item_74);

            temp_9 = g_afa7e0 - 1;
            g_afa7e0 = temp_9;
            i_1 = *((temp_9 << 2) + &g_afa6e0);
        } while (i_1);
    }

    return result;
}
