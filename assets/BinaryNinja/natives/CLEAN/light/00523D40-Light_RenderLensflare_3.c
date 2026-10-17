// IGI native provenance: Light_RenderLensflare_3 - 0x00523D40 - CFG score 99.1% (PASS; structural only); runtime behavior not verified.
// Evidence: 00523D40-Light_RenderLensflare_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_RenderLensflare_3.h"
int32_t* Light_RenderLensflare_3(void* context, int32_t param_2, int32_t param_3 , int32_t param_4, int32_t param_5)

{
    void* data_1 = *(*(context + 0xc) + 0xc);

    if (*(data_1 + 0x20) == 3)
    {
        void* context_1 = *(data_1 + 0x24);
        int32_t i = 0;
        void* item_488_1 = context_1;

        if (*(context_1 + 8) && context_1)
        {
            int32_t item_538 = param_4;
            int32_t item_53c = param_3;
            *(context_1 + 0x28) = 0;
            Light_Lightmaps();
            int32_t item_540 = 0xa83a20;
            void item_200;
            Game_DataSymbolLoad(&item_200, "%s/%s_%05d.olm");
            int32_t data_3;
            void* entity_1;
            data_3 = Sys_AllocateMemory_16(&item_200);

            if (data_3)
            {
                void* item_53c_1 = &item_200;
                int32_t* data_4 = Resource_Load(data_3, &item_200, entity_1, nullptr);

                if (*data_4 != 0x3df5c28f)
                    Resource_Flush(data_4);
                else
                {
                    float* entity_2 = *(*(context + 0xc) + 0xc);
                    long double fpu_val_7_1 = *entity_2;
                    long double f2_1 = data_4[1];
                    fpu_val_7_1 - f2_1;

                    if (!(*(&((fpu_val_7_1 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_1, f2_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        Resource_Flush(data_4);
                    else
                    {
                        int32_t data_7;
                        int32_t temp_3;
                        data_7 = Light_ApplyLightmap_11(&entity_2[1], &data_4[2]);

                        if (data_7 >= 0)
                            Resource_Flush(data_4);
                        else
                        {
                            int32_t data_8 = *(context_1 + 4);

                            if (data_8 != data_4[0xb])
                                Resource_Flush(data_4);
                            else if (!param_5)
                            {
                                void* item_53c_4 = &item_200;
                                int32_t* data_16 = Resource_Load(data_8, temp_3, &item_200, nullptr);
                                int32_t data_17 = data_16[0xb];
                                data_16[0xe] = 0;
                                data_16[9] = 1;
                                data_16[0xa] = 0;
                                void* context_2 = &data_16[data_17 * 0xb + 0xf];

                                if (data_17 > 0)
                                {
                                    int16_t* dest_1 = data_16 + 0x66;

                                    do
                                    {
                                        int32_t temp_9 = dest_1[-1] * *dest_1;
                                        *(dest_1 - 6) = context_2;
                                        context_2 += temp_9 << 2;
                                        Light_SetLightColor_4(&dest_1[-0x15]);
                                        i += 1;
                                        dest_1 = &dest_1[0x16];
                                    } while (i < data_16[0xb]);
                                }

                                int32_t entity_10 = g_a839f4;
                                g_a83b4c += data_16[0xc];
                                g_a839f4 = entity_10 + data_16[0xd];
                                return data_16;
                            }
                        }
                    }
                }
            }

            int32_t* source_2 = Mem_Alloc(*(context_1 + 4) * 0x2c + 0x3c, 4);
            int32_t* item_468 = source_2;
            source_2[0xb] = *(context_1 + 4);
            source_2[0xe] = Mem_Alloc(*(context_1 + 4) * 0x28, 4);
            source_2[9] = 0;
            source_2[0xa] = 1;
            g_a83d28 = 1;
            source_2[0xc] = 0;
            source_2[0xd] = 0;
            source_2[1] = 0x3dcccccd;
            *source_2 = 0x3df5c28f;
            Light_CalculateAttenuation_10(&source_2[2]);
            int32_t i_4 = 0;

            if (source_2[0xb] > 0)
            {
                while (true)
                {
                    int32_t context_3 = source_2[0xe];
                    int16_t* data_23 = *(context_1 + 0x18) + (i << 3);
                    int32_t* dest_4 = &source_2[i * 0xb + 0xf];
                    int32_t* item_404_1 = dest_4;
                    int32_t* context_4;

                    context_4 = !context_3 ? nullptr : context_3 + i * 0x28;

                    int16_t temp_12 = *data_23;
                    dest_4[0xa] = temp_12;
                    int16_t data_24 = data_23[1];
                    *(dest_4 + 0x2a) = data_24;
                    int32_t* item_464_1 = context_4;
                    void* data_28 = Mem_Alloc((data_24 * temp_12) << 2, 4);
                    int32_t entity_15 = 0;
                    bool flag_2_1 = *(dest_4 + 0x2a) <= 0;
                    dest_4[9] = data_28;
                    int32_t item_4f0_1 = 0;

                    if (!flag_2_1)
                    {
                        bool flag_5_1;

                        do
                        {
                            int32_t i_1 = 0;

                            if (dest_4[0xa] > 0)
                            {
                                do
                                {
                                    i_1 += 1;
                                    *(dest_4[9] + (entity_15 << 2)) = 0xffffffff;
                                    entity_15 += 1;
                                } while (i_1 < dest_4[0xa]);
                            }

                            flag_5_1 = item_4f0_1 + 1 < *(dest_4 + 0x2a);
                            item_4f0_1 += 1;
                        } while (flag_5_1);
                    }

                    Light_SetLightColor_4(dest_4);

                    if (context_4)
                    {
                        context_4[2] = Mem_Alloc(*(dest_4 + 0x2a) * dest_4[0xa] * 0xc, 4);
                        context_4[3] = Mem_Alloc(*(dest_4 + 0x2a) * dest_4[0xa] * 0xc, 4);
                        context_4[4] = Mem_Alloc((*(dest_4 + 0x2a) * dest_4[0xa]) << 2, 4);
                        context_4[9] = Mem_Alloc((*(dest_4 + 0x2a) * dest_4[0xa]) << 2, 4);
                        *context_4 = Mem_Alloc(*(dest_4 + 0x2a) * dest_4[0xa] * 0xc, 4);
                        context_4[1] = Mem_Alloc(*(dest_4 + 0x2a) * dest_4[0xa] * 0xc, 4);
                        context_4[5] = Mem_Alloc(*(dest_4 + 0x2a) * dest_4[0xa], 4);
                        context_4[6] = Mem_Alloc(*(dest_4 + 0x2a) * dest_4[0xa], 4);
                        context_4[7] = g_a83b4c;
                        int32_t i_2 = 0;
                        int32_t flagP1 = 0;
                        context_4[8] = 0;
                        int32_t i_3 = 0;
                        int32_t item_494_1 = 0;

                        if (*(dest_4 + 0x2a) > 0)
                        {
                            do
                            {
                                int32_t temp_29 = dest_4[0xa];
                                int32_t data_54 = 0;
                                int32_t item_520_1 = temp_29;
                                int32_t item_518_1 = 0;

                                if (temp_29 > 0)
                                {
                                    float item_418_1 = i_3;
                                    float item_434_1 = i_2 + 1;
                                    int32_t entity_78;

                                    do
                                    {
                                        long double fpu_val_7_4 = item_520_1;
                                        int32_t* item_454_1 = nullptr;
                                        int32_t* item_4bc_1 = nullptr;
                                        void* item_48c_2 = nullptr;
                                        void* item_520_2 = nullptr;
                                        float item_444_1 = 3.40282347e+38.0f;
                                        float item_500_1 = item_518_1 / fpu_val_7_4;
                                        int32_t data_56 = context_4[4];
                                        float item_4f4_1 = *(dest_4 + 0x2a);
                                        float item_4fc_1 = item_418_1 / item_4f4_1;
                                        float item_510_1 = (data_54 + 1) / fpu_val_7_4;
                                        float item_50c_1 = item_434_1 / item_4f4_1;
                                        float item_4d8 = (item_510_1 + item_500_1) * 0.5f;
                                        float item_4d4_1 = (item_50c_1 + item_4fc_1) * 0.5f;
                                        *(data_56 + (flagP1 << 2)) = 0;
                                        void* entity_25 = *(item_488_1 + 0x1c);
                                        float item_40c;
                                        float item_408;

                                        while (true)
                                        {
                                            int32_t temp_31 = 0;
                                            temp_31 = *(entity_25 + 0xc);
                                            void* source_4 = entity_25 + 0x20;
                                            void* item_508_1 = entity_25;
                                            void* item_4f4_2 = source_4;
                                            int32_t item_44c_1 = 0;

                                            if (temp_31 / 3 > 0)
                                            {
                                                while (true)
                                                {
                                                    int16_t temp_34 = *(entity_25 + 0x14);
                                                    int16_t data_60 = *(source_4 + 2) + temp_34;
                                                    int16_t entity_26 = temp_34 + *source_4;
                                                    int16_t source_5 = *(source_4 + 4) + temp_34;

                                                    if (entity_26 != data_60 && data_60 != source_5
                                                        && source_5 != entity_26)
                                                    {
                                                        int32_t entity_27 = 0;
                                                        entity_27 = *(item_508_1 + 0x12);

                                                        if (entity_27 == i_4)
                                                        {
                                                            int32_t entity_28 = *(item_488_1 + 0x14);
                                                            float* context_5 = entity_28 + entity_26 * 0x28;
                                                            long double fpu_val_7_14 = context_5[8];
                                                            long double f4_1 = item_500_1;
                                                            fpu_val_7_14 - f4_1;
                                                            float* flagP2 = entity_28 + data_60 * 0x28;
                                                            float* item_4ec = &context_5[8];
                                                            float* temp_37 = &flagP2[8];
                                                            float* item_4e8_1 = temp_37;
                                                            float* entity_29 = entity_28 + source_5 * 0x28;
                                                            float* entity_30 = &entity_29[8];
                                                            float* item_4e4_1 = entity_30;

                                                            if (!(*(&(
                                                                (fpu_val_7_14 < f4_1 ? 1 : 0) << 8
                                                                | (FCMP_UO(fpu_val_7_14, f4_1) ? 1 : 0)
                                                                << 0xa | (fpu_val_7_14 == f4_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            {
                                                            label_5242bc:
                                                                long double fpu_val_7_17 = context_5[8];
                                                                long double f6_1 = item_510_1;
                                                                fpu_val_7_17 - f6_1;

                                                                if (*(&(
                                                                        (fpu_val_7_17 < f6_1 ? 1 : 0) << 8
                                                                        | (FCMP_UO(fpu_val_7_17, f6_1) ? 1 : 0)
                                                                        << 0xa | (fpu_val_7_17 == f6_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 0x41)
                                                                    goto label_5242ef;

                                                                long double fpu_val_7_18 = *temp_37;
                                                                long double f10_1 = item_510_1;
                                                                fpu_val_7_18 - f10_1;

                                                                if (*(&(
                                                                        (fpu_val_7_18 < f10_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(fpu_val_7_18, f10_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (fpu_val_7_18 == f10_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 0x41)
                                                                    goto label_5242ef;

                                                                long double fpu_val_7_19 = *entity_30;
                                                                long double f15_1 = item_510_1;
                                                                fpu_val_7_19 - f15_1;

                                                                if (*(&(
                                                                    (fpu_val_7_19 < f15_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(fpu_val_7_19, f15_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (fpu_val_7_19 == f15_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 0x41)
                                                                {
                                                                    entity_30 = item_4e4_1;
                                                                    temp_37 = item_4e8_1;
                                                                label_5242ef:
                                                                    long double fpu_val_7_20 = context_5[9];
                                                                    long double f9_1 = item_4fc_1;
                                                                    fpu_val_7_20 - f9_1;

                                                                    if (!(*(&(
                                                                            (fpu_val_7_20 < f9_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(fpu_val_7_20, f9_1) ? 1 : 0)
                                                                            << 0xa | (fpu_val_7_20 == f9_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 1))
                                                                        goto label_524325;

                                                                    long double fpu_val_7_21 = temp_37[1];
                                                                    long double f14_1 = item_4fc_1;
                                                                    fpu_val_7_21 - f14_1;

                                                                    if (!(*(&(
                                                                            (fpu_val_7_21 < f14_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(fpu_val_7_21, f14_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (fpu_val_7_21 == f14_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 1))
                                                                        goto label_524325;

                                                                    long double fpu_val_7_22 = entity_30[1];
                                                                    long double f19_1 = item_4fc_1;
                                                                    fpu_val_7_22 - f19_1;

                                                                    if (!(*(&(
                                                                        (fpu_val_7_22 < f19_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(fpu_val_7_22, f19_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (fpu_val_7_22 == f19_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 1))
                                                                    {
                                                                        entity_30 = item_4e4_1;
                                                                        temp_37 = item_4e8_1;
                                                                    label_524325:
                                                                        long double fpu_val_7_23 = context_5[9];
                                                                        long double f13_1 = item_50c_1;
                                                                        fpu_val_7_23 - f13_1;

                                                                        if (*(&(
                                                                                (fpu_val_7_23 < f13_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(fpu_val_7_23, f13_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (fpu_val_7_23 == f13_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            goto label_524365;

                                                                        long double fpu_val_7_24 = temp_37[1];
                                                                        long double f18_1 = item_50c_1;
                                                                        fpu_val_7_24 - f18_1;

                                                                        if (*(&(
                                                                                (fpu_val_7_24 < f18_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(fpu_val_7_24, f18_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (fpu_val_7_24 == f18_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            goto label_524365;

                                                                        long double fpu_val_7_25 = entity_30[1];
                                                                        long double f20_1 = item_50c_1;
                                                                        fpu_val_7_25 - f20_1;

                                                                        if (*(&(
                                                                            (fpu_val_7_25 < f20_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(fpu_val_7_25, f20_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (fpu_val_7_25 == f20_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 0x41)
                                                                        {
                                                                            entity_30 = item_4e4_1;
                                                                            temp_37 = item_4e8_1;
                                                                        label_524365:
                                                                            int32_t item_514_1 = 1;
                                                                            long double fpu_val_7_29 = (entity_30[1]
                                                                                - context_5[9]) * (*temp_37 - context_5[8])
                                                                                - (temp_37[1] - context_5[9])
                                                                                * (*entity_30 - context_5[8]);
                                                                            long double f17_1 = 0.0f;
                                                                            fpu_val_7_29 - f17_1;

                                                                            if (*(&(
                                                                                    (fpu_val_7_29 < f17_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(fpu_val_7_29, f17_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (fpu_val_7_29 == f17_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                item_514_1 = 0;

                                                                            void item_3c0;
                                                                            memset(&item_3c0, 0, 0x40);
                                                                            float item_430_1 =
                                                                                Sys_FreeMemory_10(&context_5[8], item_4e8_1);
                                                                            float item_42c_1 =
                                                                                Sys_FreeMemory_10(item_4e8_1, item_4e4_1);
                                                                            long double fp0_3 =
                                                                                Sys_FreeMemory_10(item_4e4_1, &context_5[8]);
                                                                            long double fpu_val_6_16 =
                                                                                (fp0_3 + item_42c_1 + item_430_1) * 0.5f;
                                                                            long double fpu_val_6_18 = (fpu_val_6_16
                                                                                - fp0_3) * (fpu_val_6_16 - item_42c_1)
                                                                                * (fpu_val_6_16 - item_430_1) * fpu_val_6_16;
                                                                            long double f21_1 = 0.0f;
                                                                            fpu_val_6_18 - f21_1;
                                                                            float item_470_1;

                                                                            item_470_1 = *(&(
                                                                                (fpu_val_6_18 < f21_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(fpu_val_6_18, f21_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (fpu_val_6_18 == f21_1 ? 1 : 0)
                                                                                << 0xe | 0x3800) + 1) & 1 ? 0.0f
                                                                                : sqrtl(fpu_val_6_18);

                                                                            long double fpu_val_7_41 =
                                                                                flagP2[2] - context_5[2];
                                                                            long double fpu_val_6_22 =
                                                                                flagP2[1] - context_5[1];
                                                                            long double fpu_val_5_9 = *flagP2 - *context_5;
                                                                            long double fpu_val_4_5 = sqrtl(
                                                                                fpu_val_5_9 * fpu_val_5_9
                                                                                + fpu_val_6_22 * fpu_val_6_22
                                                                                + fpu_val_7_41 * fpu_val_7_41);
                                                                            long double fpu_val_6_25 =
                                                                                entity_29[2] - flagP2[2];
                                                                            long double fpu_val_5_12 =
                                                                                entity_29[1] - flagP2[1];
                                                                            long double fpu_val_4_7 = *entity_29 - *flagP2;
                                                                            long double fpu_val_3_9 = sqrtl(
                                                                                fpu_val_4_7 * fpu_val_4_7
                                                                                + fpu_val_5_12 * fpu_val_5_12
                                                                                + fpu_val_6_25 * fpu_val_6_25);
                                                                            long double fpu_val_5_15 =
                                                                                context_5[2] - entity_29[2];
                                                                            long double fpu_val_4_10 =
                                                                                context_5[1] - entity_29[1];
                                                                            long double fpu_val_3_11 =
                                                                                *context_5 - *entity_29;
                                                                            long double fpu_val_2_9 = sqrtl(
                                                                                fpu_val_3_11 * fpu_val_3_11
                                                                                + fpu_val_4_10 * fpu_val_4_10
                                                                                + fpu_val_5_15 * fpu_val_5_15);
                                                                            long double fpu_val_4_15 =
                                                                                (fpu_val_2_9 + fpu_val_3_9 + fpu_val_4_5) * 0.5f;
                                                                            long double fpu_val_3_17 = (fpu_val_4_15
                                                                                - fpu_val_2_9) * (fpu_val_4_15 - fpu_val_3_9)
                                                                                * (fpu_val_4_15 - fpu_val_4_5) * fpu_val_4_15;
                                                                            long double f22_1 = 0.0f;
                                                                            fpu_val_3_17 - f22_1;
                                                                            float item_458_1;

                                                                            item_458_1 = *(&(
                                                                                (fpu_val_3_17 < f22_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(fpu_val_3_17, f22_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (fpu_val_3_17 == f22_1 ? 1 : 0)
                                                                                << 0xe | 0x3800) + 1) & 1 ? 0.0f
                                                                                : sqrtl(fpu_val_3_17);

                                                                            float item_380 = item_500_1;
                                                                            float item_37c_1 = item_4fc_1;
                                                                            float item_378_1 = item_510_1;
                                                                            float item_370 = item_500_1;
                                                                            float item_374_1 = item_4fc_1;
                                                                            float item_36c_1 = item_50c_1;
                                                                            float item_364_1 = item_4fc_1;
                                                                            float item_368_1 = item_510_1;
                                                                            float item_360_1 = item_510_1;
                                                                            float item_358_1 = item_500_1;
                                                                            int32_t dest_6 = 2;
                                                                            int32_t entity_36 = 1;
                                                                            void** source_7 = &item_4ec;
                                                                            float item_35c_1 = item_50c_1;
                                                                            float item_354_1 = item_50c_1;
                                                                            int32_t item_4f8_1 = 2;
                                                                            int32_t item_450_1 = 1;
                                                                            void** item_524_2 = &item_4ec;

                                                                            do
                                                                            {
                                                                                float* temp_45;
                                                                                float* context_6;

                                                                                if (!item_514_1)
                                                                                {
                                                                                    context_6 = (&item_4ec)[entity_36 % 3];
                                                                                    temp_45 = *source_7;
                                                                                }
                                                                                else
                                                                                {
                                                                                    context_6 = *source_7;
                                                                                    temp_45 = (&item_4ec)[entity_36 % 3];
                                                                                }

                                                                                float item_51c_1 = temp_45;
                                                                                float item_4e0_1 = *temp_45 - *context_6;
                                                                                float item_4dc_1 = temp_45[1] - context_6[1];

                                                                                if (dest_6 > 0)
                                                                                {
                                                                                    float* flagP3 = &item_380;
                                                                                    int32_t* item_490_1 = &item_3c0;
                                                                                    float* item_504_1 = &item_380;
                                                                                    int32_t saved_src;
                                                                                    float* item_46c_1 =
                                                                                        &(&saved_src)[dest_6 * 6 + 0x6f];
                                                                                    int32_t item_448_1 = dest_6;
                                                                                    bool flag_15_1;

                                                                                    do
                                                                                    {
                                                                                        if (!*item_490_1)
                                                                                        {
                                                                                            long double fpu_val_7_50 = item_4dc_1;
                                                                                            long double f24_1 = 0.0f;
                                                                                            fpu_val_7_50 - f24_1;
                                                                                            long double fpu_val_7_51 = item_4dc_1;
                                                                                            int32_t temp_48 = 0;

                                                                                            if (*(&(
                                                                                                    (fpu_val_7_50 < f24_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(fpu_val_7_50, f24_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (fpu_val_7_50 == f24_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3800) + 1) & 1)
                                                                                                fpu_val_7_51 = -(fpu_val_7_51);

                                                                                            long double fpu_val_6_28 = item_4e0_1;
                                                                                            long double f25_1 = 0.0f;
                                                                                            fpu_val_6_28 - f25_1;
                                                                                            long double fpu_val_6_29 = item_4e0_1;

                                                                                            if (*(&(
                                                                                                    (fpu_val_6_28 < f25_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(fpu_val_6_28, f25_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (fpu_val_6_28 == f25_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3000) + 1) & 1)
                                                                                                fpu_val_6_29 = -(fpu_val_6_29);

                                                                                            fpu_val_7_51 - fpu_val_6_29;
                                                                                            void item_3f0;

                                                                                            if (!(*(&(
                                                                                                (fpu_val_7_51 < fpu_val_6_29 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(fpu_val_7_51, fpu_val_6_29) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (fpu_val_7_51 == fpu_val_6_29 ? 1 : 0)
                                                                                                << 0xe | 0x3800) + 1) & 0x41))
                                                                                            {
                                                                                                int32_t* entity_38 = &item_3f0;
                                                                                                float* source_8 = flagP3;
                                                                                                int32_t j_7 = 3;
                                                                                                int32_t j;

                                                                                                do
                                                                                                {
                                                                                                    long double fpu_val_7_58 = (source_8[1]
                                                                                                        - context_6[1]) * item_4e0_1 / item_4dc_1
                                                                                                        + *context_6;
                                                                                                    long double fpu_val_6_31 = context_6[1];
                                                                                                    long double f32_1 = *(item_51c_1 + 4);
                                                                                                    fpu_val_6_31 - f32_1;
                                                                                                    long double f33_1 = *source_8;
                                                                                                    fpu_val_7_58 - f33_1;
                                                                                                    int16_t data_91 =
                                                                                                        (fpu_val_7_58 < f33_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(fpu_val_7_58, f33_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (fpu_val_7_58 == f33_1 ? 1 : 0)
                                                                                                        << 0xe;
                                                                                                    int32_t data_92;

                                                                                                    if (!(*(&(
                                                                                                        (fpu_val_6_31 < f32_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(fpu_val_6_31, f32_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (fpu_val_6_31 == f32_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3800) + 1) & 1))
                                                                                                    {
                                                                                                        if (*(&data_91 + 1) & 1)
                                                                                                            data_92 = 0;
                                                                                                        else
                                                                                                            data_92 = 1;
                                                                                                    }
                                                                                                    else if (!(*(&data_91 + 1) & 0x41))
                                                                                                        data_92 = 0;
                                                                                                    else
                                                                                                        data_92 = 1;

                                                                                                    *entity_38 = data_92;
                                                                                                    temp_48 += data_92;
                                                                                                    source_8 = &source_8[2];
                                                                                                    entity_38 = &entity_38[1];
                                                                                                    j = j_7;
                                                                                                    j_7 -= 1;
                                                                                                } while (j != 1);
                                                                                                goto label_524721;
                                                                                            }

                                                                                            long double fpu_val_7_59 = item_4e0_1;
                                                                                            long double f29_1 = 0.0f;
                                                                                            fpu_val_7_59 - f29_1;

                                                                                            if (*(&(
                                                                                                    (fpu_val_7_59 < f29_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(fpu_val_7_59, f29_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (fpu_val_7_59 == f29_1 ? 1 : 0)
                                                                                                    << 0xe) + 1) & 0x40)
                                                                                                *item_490_1 = 1;
                                                                                            else
                                                                                            {
                                                                                                int32_t* entity_39 = &item_3f0;
                                                                                                float* source_9 = &flagP3[1];
                                                                                                int32_t j_8 = 3;
                                                                                                int32_t j_1;

                                                                                                do
                                                                                                {
                                                                                                    long double fpu_val_7_64 = (source_9[-1]
                                                                                                        - *context_6) * item_4dc_1 / item_4e0_1
                                                                                                        + context_6[1];
                                                                                                    long double fpu_val_6_32 = *context_6;
                                                                                                    long double f35_1 = *item_51c_1;
                                                                                                    fpu_val_6_32 - f35_1;
                                                                                                    long double f36_1 = *source_9;
                                                                                                    fpu_val_7_64 - f36_1;
                                                                                                    int16_t data_94 =
                                                                                                        (fpu_val_7_64 < f36_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(fpu_val_7_64, f36_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (fpu_val_7_64 == f36_1 ? 1 : 0)
                                                                                                        << 0xe;
                                                                                                    int32_t data_95;

                                                                                                    if (*(&(
                                                                                                        (fpu_val_6_32 < f35_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(fpu_val_6_32, f35_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (fpu_val_6_32 == f35_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3800) + 1) & 0x41)
                                                                                                    {
                                                                                                        if (*(&data_94 + 1) & 1)
                                                                                                            data_95 = 0;
                                                                                                        else
                                                                                                            data_95 = 1;
                                                                                                    }
                                                                                                    else if (!(*(&data_94 + 1) & 0x41))
                                                                                                        data_95 = 0;
                                                                                                    else
                                                                                                        data_95 = 1;

                                                                                                    *entity_39 = data_95;
                                                                                                    temp_48 += data_95;
                                                                                                    source_9 = &source_9[2];
                                                                                                    entity_39 = &entity_39[1];
                                                                                                    j_1 = j_8;
                                                                                                    j_8 -= 1;
                                                                                                } while (j_1 != 1);
                                                                                            label_524721:

                                                                                                if (temp_48)
                                                                                                {
                                                                                                    if (temp_48 == 3)
                                                                                                        *item_490_1 = 1;
                                                                                                    else if (temp_48 != 2)
                                                                                                    {
                                                                                                        int32_t j_2 = 0;
                                                                                                        int32_t* entity_44 = &item_3f0;
                                                                                                        int32_t j_5;

                                                                                                        do
                                                                                                        {
                                                                                                            if (*entity_44)
                                                                                                                j_5 = j_2;

                                                                                                            j_2 += 1;
                                                                                                            entity_44 = &entity_44[1];
                                                                                                        } while (j_2 < 3);

                                                                                                        int32_t f1_5 = (j_5 + 1) % 3;
                                                                                                        float dest_8 = &item_504_1[f1_5 * 2];
                                                                                                        item_46c_1[-2] = item_504_1[f1_5 * 2];
                                                                                                        item_46c_1[-1] = *(dest_8 + 4);
                                                                                                        float* source_15 = &item_504_1[j_5 * 2];
                                                                                                        float flagP5 =
                                                                                                            &item_504_1[(j_5 + 2) % 3 * 2];
                                                                                                        Light_CalculateAttenuation_4(item_46c_1, flagP5, source_15,
                                                                                                            context_6, item_51c_1);
                                                                                                        Light_CalculateAttenuation_4(&item_46c_1[2], dest_8,
                                                                                                            source_15, context_6, item_51c_1);
                                                                                                        item_4f8_1 += 1;
                                                                                                        item_46c_1 = &item_46c_1[6];
                                                                                                        Light_CalculateAttenuation_4(source_15, flagP5, source_15,
                                                                                                            context_6, item_51c_1);
                                                                                                        flagP3 = item_504_1;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        int32_t j_3 = 0;
                                                                                                        int32_t* entity_41 = &item_3f0;
                                                                                                        int32_t j_6;

                                                                                                        do
                                                                                                        {
                                                                                                            if (!*entity_41)
                                                                                                                j_6 = j_3;

                                                                                                            j_3 += 1;
                                                                                                            entity_41 = &entity_41[1];
                                                                                                        } while (j_3 < 3);

                                                                                                        float* source_11 = &flagP3[j_6 * 2];
                                                                                                        float data_100 =
                                                                                                            &flagP3[(j_6 + 1) % 3 * 2];
                                                                                                        Light_CalculateAttenuation_4(data_100, data_100, source_11,
                                                                                                            context_6, item_51c_1);
                                                                                                        float* data_101 =
                                                                                                            &flagP3[(j_6 + 2) % 3 * 2];
                                                                                                        Light_CalculateAttenuation_4(data_101, data_101, source_11,
                                                                                                            context_6, item_51c_1);
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }

                                                                                        flagP3 = &flagP3[6];
                                                                                        flag_15_1 = item_448_1 != 1;
                                                                                        item_504_1 = flagP3;
                                                                                        item_490_1 = &item_490_1[1];
                                                                                        item_448_1 -= 1;
                                                                                    } while (flag_15_1);
                                                                                    dest_6 = item_4f8_1;
                                                                                    entity_36 = item_450_1;
                                                                                    source_7 = item_524_2;
                                                                                }

                                                                                entity_36 += 1;
                                                                                source_7 = &source_7[1];
                                                                                item_450_1 = entity_36;
                                                                                item_524_2 = source_7;
                                                                            } while (entity_36 - 1 < 3);

                                                                            if (!item_4bc_1)
                                                                            {
                                                                                int32_t context_7 = 1;
                                                                                void** dest_11 = &item_4ec;
                                                                                int32_t source_16 = 1;

                                                                                do
                                                                                {
                                                                                    float* entity_49;
                                                                                    float* temp_62;

                                                                                    if (!item_514_1)
                                                                                    {
                                                                                        entity_49 = (&item_4ec)[source_16 % 3];
                                                                                        temp_62 = *dest_11;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        entity_49 = *dest_11;
                                                                                        temp_62 = (&item_4ec)[source_16 % 3];
                                                                                    }

                                                                                    long double fpu_val_7_66 =
                                                                                        *temp_62 - *entity_49;
                                                                                    long double fpu_val_6_34 =
                                                                                        temp_62[1] - entity_49[1];
                                                                                    long double f28_1 = 0.0f;
                                                                                    fpu_val_6_34 - f28_1;
                                                                                    long double fpu_val_5_18 = fpu_val_6_34;

                                                                                    if (*(&(
                                                                                            (fpu_val_6_34 < f28_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(fpu_val_6_34, f28_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (fpu_val_6_34 == f28_1 ? 1 : 0)
                                                                                            << 0xe | 0x2800) + 1) & 1)
                                                                                        fpu_val_5_18 = -(fpu_val_5_18);

                                                                                    long double f31_1 = 0.0f;
                                                                                    fpu_val_7_66 - f31_1;
                                                                                    long double fpu_val_4_18 = fpu_val_7_66;

                                                                                    if (*(&(
                                                                                            (fpu_val_7_66 < f31_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(fpu_val_7_66, f31_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (fpu_val_7_66 == f31_1 ? 1 : 0)
                                                                                            << 0xe | 0x2000) + 1) & 1)
                                                                                        fpu_val_4_18 = -(fpu_val_4_18);

                                                                                    fpu_val_5_18 - fpu_val_4_18;
                                                                                    int16_t data_120;

                                                                                    if (*(&(
                                                                                        (fpu_val_5_18 < fpu_val_4_18 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(fpu_val_5_18, fpu_val_4_18) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (fpu_val_5_18 == fpu_val_4_18 ? 1 : 0)
                                                                                        << 0xe | 0x2800) + 1) & 0x41)
                                                                                    {
                                                                                        long double f37_1 = 0.0f;
                                                                                        fpu_val_7_66 - f37_1;

                                                                                        if (*(&(
                                                                                                (fpu_val_7_66 < f37_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(fpu_val_7_66, f37_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (fpu_val_7_66 == f37_1 ? 1 : 0)
                                                                                                << 0xe | 0x3000) + 1) & 0x40)
                                                                                            context_7 = 0;
                                                                                        else
                                                                                        {
                                                                                            long double fpu_val_5_26 =
                                                                                                (item_4d8 - *entity_49) * fpu_val_6_34;
                                                                                            long double fpu_val_6_42 =
                                                                                                fpu_val_5_26 / fpu_val_5_26 + entity_49[1];
                                                                                            long double fpu_val_6_45 = *entity_49;
                                                                                            long double f40_1 = *temp_62;
                                                                                            fpu_val_6_45 - f40_1;
                                                                                            long double f41_1 = item_4d4_1;
                                                                                            fpu_val_6_42 - f41_1;
                                                                                            data_120 =
                                                                                                (fpu_val_6_42 < f41_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(fpu_val_6_42, f41_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (fpu_val_6_42 == f41_1 ? 1 : 0)
                                                                                                << 0xe;

                                                                                            if (*(&(
                                                                                                (fpu_val_6_45 < f40_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(fpu_val_6_45, f40_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (fpu_val_6_45 == f40_1 ? 1 : 0)
                                                                                                << 0xe | 0x3800) + 1) & 0x41)
                                                                                            {
                                                                                                if (*(&data_120 + 1) & 1)
                                                                                                    context_7 &= 1;
                                                                                                else
                                                                                                    context_7 = 0;
                                                                                            }
                                                                                            else if (!(*(&data_120 + 1) & 0x41))
                                                                                                context_7 &= 1;
                                                                                            else
                                                                                                context_7 = 0;
                                                                                        }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        long double fpu_val_6_37 = fpu_val_7_66
                                                                                            * (item_4d4_1 - entity_49[1]) / fpu_val_6_34
                                                                                            + *entity_49;
                                                                                        long double fpu_val_6_40 = entity_49[1];
                                                                                        long double f38_1 = temp_62[1];
                                                                                        fpu_val_6_40 - f38_1;
                                                                                        long double f39_1 = item_4d8;
                                                                                        fpu_val_6_37 - f39_1;
                                                                                        data_120 =
                                                                                            (fpu_val_6_37 < f39_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(fpu_val_6_37, f39_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (fpu_val_6_37 == f39_1 ? 1 : 0)
                                                                                            << 0xe;

                                                                                        if (!(*(&(
                                                                                            (fpu_val_6_40 < f38_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(fpu_val_6_40, f38_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (fpu_val_6_40 == f38_1 ? 1 : 0)
                                                                                            << 0xe | 0x3800) + 1) & 1))
                                                                                        {
                                                                                            if (*(&data_120 + 1) & 1)
                                                                                                context_7 &= 1;
                                                                                            else
                                                                                                context_7 = 0;
                                                                                        }
                                                                                        else if (!(*(&data_120 + 1) & 0x41))
                                                                                            context_7 &= 1;
                                                                                        else
                                                                                            context_7 = 0;
                                                                                    }
                                                                                    source_16 += 1;
                                                                                    dest_11 = &dest_11[1];
                                                                                } while (source_16 - 1 < 3);

                                                                                if (context_7)
                                                                                {
                                                                                    int32_t item_414 = entity_26;
                                                                                    int16_t item_410_1 = source_5;
                                                                                    item_4bc_1 = &item_414;
                                                                                    item_520_2 = item_508_1;
                                                                                }
                                                                            }

                                                                            float item_484_1 = 0.0f;

                                                                            if (item_4f8_1 > 0)
                                                                            {
                                                                                int32_t* flagP6 = &item_3c0;
                                                                                float* source_17 = &item_370;
                                                                                int32_t item_524_3 = item_4f8_1;
                                                                                bool flag_17_1;

                                                                                do
                                                                                {
                                                                                    if (!*flagP6)
                                                                                    {
                                                                                        float item_424_1 =
                                                                                            Sys_FreeMemory_10(&source_17[-4], &source_17[-2]);
                                                                                        float item_420_1 =
                                                                                            Sys_FreeMemory_10(&source_17[-2], source_17);
                                                                                        long double fp0_6 =
                                                                                            Sys_FreeMemory_10(source_17, &source_17[-4]);
                                                                                        long double fpu_val_6_50 =
                                                                                            (fp0_6 + item_420_1 + item_424_1) * 0.5f;
                                                                                        long double fpu_val_6_52 = (fpu_val_6_50
                                                                                            - fp0_6) * (fpu_val_6_50 - item_420_1)
                                                                                            * (fpu_val_6_50 - item_424_1) * fpu_val_6_50;
                                                                                        long double f27_1 = 0.0f;
                                                                                        fpu_val_6_52 - f27_1;
                                                                                        long double fpu_val_7_82;

                                                                                        fpu_val_7_82 = *(&(
                                                                                            (fpu_val_6_52 < f27_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(fpu_val_6_52, f27_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (fpu_val_6_52 == f27_1 ? 1 : 0)
                                                                                            << 0xe | 0x3800) + 1) & 1 ? 0.0f
                                                                                            : sqrtl(fpu_val_6_52);

                                                                                        item_484_1 = fpu_val_7_82 + item_484_1;
                                                                                    }

                                                                                    flagP6 = &flagP6[1];
                                                                                    source_17 = &source_17[6];
                                                                                    flag_17_1 = item_524_3 != 1;
                                                                                    item_524_3 -= 1;
                                                                                } while (flag_17_1);
                                                                                long double fpu_val_7_85 = item_484_1;
                                                                                long double f30_1 = 0.0f;
                                                                                fpu_val_7_85 - f30_1;

                                                                                if (!(*(&(
                                                                                    (fpu_val_7_85 < f30_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(fpu_val_7_85, f30_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (fpu_val_7_85 == f30_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41))
                                                                                {
                                                                                    long double fpu_val_7_86 = item_470_1;
                                                                                    long double f34_1 = 0.0f;
                                                                                    fpu_val_7_86 - f34_1;

                                                                                    if (!(*(&(
                                                                                        (fpu_val_7_86 < f34_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(fpu_val_7_86, f34_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (fpu_val_7_86 == f34_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x40))
                                                                                    {
                                                                                        float* data_130 =
                                                                                            item_464_1[4] + (item_494_1 << 2);
                                                                                        *data_130 =
                                                                                            item_484_1 * item_458_1 / item_470_1
                                                                                            + *data_130;
                                                                                    }

                                                                                    float* item_504_2 = &item_380;
                                                                                    int32_t* item_514_2 = &item_3c0;
                                                                                    int32_t item_524_4 = item_4f8_1;
                                                                                    bool flag_22_1;

                                                                                    do
                                                                                    {
                                                                                        if (!*item_514_2)
                                                                                        {
                                                                                            float* source_18 = item_504_2;
                                                                                            int32_t j_9 = 3;
                                                                                            int32_t j_4;

                                                                                            do
                                                                                            {
                                                                                                long double fp0_7 =
                                                                                                    Sys_FreeMemory_10(source_18, &item_4d8);
                                                                                                long double fpu_val_6_55 = item_444_1;
                                                                                                fpu_val_6_55 - fp0_7;

                                                                                                if (!(*(&(
                                                                                                    (fpu_val_6_55 < fp0_7 ? 1 : 0) << 8
                                                                                                    | (FCMP_UO(fpu_val_6_55, fp0_7) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (fpu_val_6_55 == fp0_7 ? 1 : 0) << 0xe
                                                                                                    | 0x3800) + 1) & 0x41))
                                                                                                {
                                                                                                    float data_133 = *source_18;
                                                                                                    item_444_1 = fp0_7;
                                                                                                    int16_t item_3fc_1 = source_5;
                                                                                                    float entity_62 = source_18[1];
                                                                                                    int32_t item_400 = entity_26;
                                                                                                    item_454_1 = &item_400;
                                                                                                    item_48c_2 = item_508_1;
                                                                                                    item_40c = data_133;
                                                                                                    item_408 = entity_62;
                                                                                                }
