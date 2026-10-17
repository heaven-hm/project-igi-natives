// IGI native provenance: Binocular_Update - 0x00470890 - CFG score 95.8% (PASS; structural only); runtime behavior not verified.
// Evidence: 00470890-Binocular_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Binocular_Update.h"
int32_t* Binocular_Update(void* context, int32_t* param_2)

{
    void* temp_val = param_2[0xb];
    int32_t* i = *(context + 8);
    void* data_val = *(temp_val + 0x4ec);
    int32_t* data_1 = *(*(context + 0x128) + 0x6e4);
    void* item_4 = temp_val;

    if (*i && i)
    {
        int32_t data_2 = g_afa7e0;

        do
        {
            int32_t* dest_1 = *i;
            void* entity_4;

            if (!dest_1)
                entity_4 = nullptr;
            else
            {
                int32_t entity_1 = *dest_1;
                int32_t entity_2 = -(entity_1);
                entity_4 = (entity_2 - entity_2) & dest_1;
            }

            *((data_2 << 2) + &g_afa6e0) = entity_4;
            g_afa7e0 = data_2 + 1;
            uint32_t data_5 = AI_AlertAllies_17();
            int32_t temp_1 = 0;
            temp_1 = i[7];
            (*(((data_5 * 0x180 + temp_1) << 2) + &g_a96ae0))(i, param_2);
            data_2 = g_afa7e0 - 1;
            g_afa7e0 = data_2;
            i = *((data_2 << 2) + &g_afa6e0);
        } while (i);

        temp_val = item_4;
    }

    if (*(temp_val + 0xcf5))
    {
        *(context + 0x1b0) = 0;
        *(context + 0x1b8) = 0;
        return 0;
    }

    if (param_2[5] && !*(context + 0x1b8))
    {
        int32_t source_val = param_2[1];

        if (source_val)
            memcpy(context + 0x150, source_val, 0x18);

        void* data_9 = param_2[2];

        if (!data_9)
        {
            int32_t data_13 = *(context + 0x80);
            *(context + 0x168) = *(context + 0x74);
            int32_t entity_12 = *(context + 0x8c);
            *(context + 0x16c) = data_13;
            *(context + 0x170) = entity_12;
        }
        else
        {
            *(context + 0x168) = *(data_9 + 4);
            *(context + 0x16c) = *(param_2[2] + 0x10);
            *(context + 0x170) = *(param_2[2] + 0x1c);
        }

        if (*(context + 0x1b0))
        {
            long double fpu7 = *(temp_val + 0x1cc);
            long double f1 = 0.0f;
            fpu7 - f1;

            if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
                | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                long double fpu_val_7_1 = *(temp_val + 0x12c);
                long double f3_1 = 0.0f;
                fpu_val_7_1 - f3_1;

                if (!(*(&((fpu_val_7_1 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_1, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_1 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                    int32_t data_16 = 0;
                    data_16 = !*(context + 0x1bc);
                    *(context + 0x1bc) = data_16;
                }
            }

            long double fpu_val_7_2 = *(temp_val + 0x1cc);
            long double f2 = 0.0f;
            fpu_val_7_2 - f2;
            long double fpu_val_7_3;
            long double f5_1;

            if (!(*(&((fpu_val_7_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f2) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f2 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                fpu_val_7_3 = *(temp_val + 0x12c);
                f5_1 = 0.0f;
                fpu_val_7_3 - f5_1;
            }

            int32_t* data_19;

            if (*(&((fpu_val_7_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f2) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f2 ? 1 : 0) << 0xe) + 1) & 0x40 || !(*(&(
                (fpu_val_7_3 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_7_3 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !*(context + 0x1bc))
            {
                long double fpu_val_7_4 = *(temp_val + 0x1e8);
                long double f4_1 = 0.0f;
                fpu_val_7_4 - f4_1;
                long double fpu_val_7_5;
                long double f7_1;

                if (*(&((fpu_val_7_4 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_4, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_4 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    fpu_val_7_5 = *(temp_val + 0x1cc);
                    f7_1 = 0.0f;
                    fpu_val_7_5 - f7_1;
                }

                void* entity_15;
                long double fpu_val_7_9;

                if (*(&((fpu_val_7_4 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_4, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_4 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40 && (*(&(
                    (fpu_val_7_5 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_5 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40 || *(context + 0x1bc)))
                {
                    long double fpu_val_7_6 = *(temp_val + 0x1ec);
                    long double f8_1 = 0.0f;
                    fpu_val_7_6 - f8_1;

                    if (*(&((fpu_val_7_6 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_6, f8_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_6 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                        data_19 = Binocular_Process(context);
                    else
                    {
                        entity_15 = data_val;
                        long double fpu_val_7_7 = *(entity_15 + 0x1e4);
                        long double f9_1 = data_1[2];
                        fpu_val_7_7 - f9_1;

                        if (*(&((fpu_val_7_7 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_7, f9_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_7 == f9_1 ? 1 : 0) << 0xe) + 1) & 1)
                        {
                            fpu_val_7_9 = *(entity_15 + 0x1e4) * 1.03999996f;
                            goto label_470ae3;
                        }

                        data_19 = Binocular_Process(context);
                    }
                }
                else
                {
                    entity_15 = data_val;
                    long double fpu_val_7_10 = *(entity_15 + 0x1e4);
                    long double f6_1 = data_1[1];
                    fpu_val_7_10 - f6_1;

                    if (*(&((fpu_val_7_10 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_10, f6_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_10 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        data_19 = Binocular_Process(context);
                    else
                    {
                        fpu_val_7_9 = *(entity_15 + 0x1e4) * 0.959999979f;
                    label_470ae3:
                        *(entity_15 + 0x1e4) = fpu_val_7_9;
                        data_19 = *(context + 0x1c4);

                        if (!data_19 || !*data_19)
                        {
                            Binocular_Process(context);
                            struct status_msg* data_21 = SoundSys_SetMasterVolume_7(item_4, "bin_zoom_1");

                            if (!data_21)
                            {
                                *(context + 0x1b8) = 0;
                                return data_21;
                            }

                            int32_t* data_22 = QTask_LinkEventHandler_2(data_21);
                            *(context + 0x1b8) = 0;
                            *(context + 0x1c4) = data_22;
                            return data_22;
                        }
                    }
                }
            }
            else
            {
                *(data_val + 0x1e4) = *data_1;
                Binocular_Process(context);
                data_19 = Binocular_Process(context);
            }

            *(context + 0x1b8) = 0;
            return data_19;
        }

        AI_CombatTarget_24(*(temp_val + 0x4ec));
        *(data_val + 0x1e4) = *data_1;
        *(context + 0x1b4) = 0;
        *(context + 0x1b0) = 1;
        *(context + 0x1bc) = 0;
    }

    *(context + 0x1b8) = 0;
    return 0;
}
