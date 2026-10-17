// IGI native provenance: DeathZone_Setup - 0x00465DE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00465DE0-DeathZone_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DeathZone_Setup.h"
int32_t DeathZone_Setup(void* context)

{
    int32_t data_val = *(context + 0x130);

    if (data_val)
    {
        int16_t data_1 = Script_ExecuteLevelScript_16();
        int32_t entity_val;
        entity_val = *(*(context + 0x130) + 0x1c);
        data_val = TaskType_IsDerivedFrom(entity_val, data_1);

        if (data_val)
        {
            void* source_1 = *(context + 0x130);
            int16_t data_3 = Menu_PlayMusic_21();
            void* item_8;

            if (*(source_1 + 0x1c) != data_3)
            {
                data_val = Script_ParseEnumReal32_29(source_1);

                if (!data_val)
                {
                    item_8 = context;
                    void* item_4_2 = source_1 + 0x108;
                    int32_t i = 0;
                    data_val = AI_CombatTarget_18();

                    if (*data_val > 0)
                    {
                        int32_t source_4 = 8;

                        do
                        {
                            int32_t temp_2 = 0;
                            temp_2 = *(*(AI_CombatTarget_18() + source_4) + 0x1c);
                            uint32_t data_13 = AI_CheckHearing_24();
                            (*(((temp_2 + data_13 * 0x180) << 2) + &g_a96ae0))(
                                *(AI_CombatTarget_18() + source_4), &item_8);
                            i += 1;
                            source_4 += 4;
                            data_val = AI_CombatTarget_18();
                        } while (i < *data_val);
                    }
                }
            }
            else
            {
                void* context_1 = *(source_1 + 0x14);
                data_val = Menu_PlayMusic_21();

                if (*(context_1 + 0x1c) == data_val)
                    source_1 = context_1;

                long double fpu_val_7_1 = *(source_1 + 0x108);
                long double f0_1 = 0.0f;
                fpu_val_7_1 - f0_1;
                data_val = (fpu_val_7_1 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe;

                if (!(*(&data_val + 1) & 0x40))
                {
                    item_8 = context;
                    void* item_4_1 = source_1 + 0x108;
                    int32_t i_1 = 0;
                    data_val = AI_CombatTarget_18();

                    if (*data_val > 0)
                    {
                        int32_t source_2 = 8;
                        int32_t* data_10;

                        do
                        {
                            int32_t data_5 = 0;
                            data_5 = *(*(AI_CombatTarget_18() + source_2) + 0x1c);
                            uint32_t data_7 = AI_CheckHearing_24();
                            (*(((data_5 + data_7 * 0x180) << 2) + &g_a96ae0))(
                                *(AI_CombatTarget_18() + source_2), &item_8);
                            i_1 += 1;
                            source_2 += 4;
                            data_10 = AI_CombatTarget_18();
                        } while (i_1 < *data_10);

                        return data_10;
                    }
                }
            }
        }
    }

    return data_val;
}
