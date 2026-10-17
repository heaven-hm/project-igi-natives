// IGI native provenance: Env_WeaponNotInitialized - 0x0044FBA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044FBA0-Env_WeaponNotInitialized.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_WeaponNotInitialized.h"
void Env_WeaponNotInitialized(void* context)

{
    void* context_val = *(context + 0x14);
    int32_t* i = *(context_val + 8);

    if (!*i || !i)
        return;

    do
    {
        int32_t data_1 = Weapon_ComputeAccuracy_5();
        int16_t item_1c_1 = data_1;
        data_1 = i[7];
        int32_t data_val;
        int32_t entity_1;
        data_val = TaskType_IsDerivedFrom(data_1, item_1c_1);

        if (data_val)
        {
            int32_t* data_2;
            float* temp_val;
            data_2 = HumanPlayer_LoadParameters_13(data_val, temp_val, entity_1, i);

            if (data_2)
            {
                data_val = data_2[0x184];

                if (data_val >= 0)
                {
                    if (data_val <= 2)
                    {
                        *(context + 0x3dfc) = 1;
                        *(context + 0x3e00) = *data_2;
                        data_val = Script_ExecuteLevelScript_12(context_val + 0x4c4, nullptr, i);
                    }
                    else if (data_val == 4)
                    {
                        temp_val = *(SoundSys_EvaluateTrigger_18(&data_2[0x187]) + 0x2d4);
                        long double fpu_val_7_2 = *temp_val * 30.0f;
                        *(context + 0x3dfd) = 1;
                        *(context + 0x3e08) = fpu_val_7_2;
                        *(context + 0x3e04) = *data_2;
                    }
                }
            }
            else
            {
                int32_t item_20_2 = Script_EvaluateCondition_4(context_val);
                data_val = Warning_Show("Weapon not initialized, human #%d");
            }
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    } while (i);
}
