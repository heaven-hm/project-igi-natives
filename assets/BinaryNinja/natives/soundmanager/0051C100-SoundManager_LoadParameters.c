// IGI native provenance: SoundManager_LoadParameters - 0x0051C100 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051C100-SoundManager_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundManager_LoadParameters.h"
int32_t* SoundManager_LoadParameters(char* context, char* param_2)

{
    char* flagP = context;
    int32_t* data_val;
    data_val = flagP[0x20];
    int32_t* dest_val = *(flagP + 0x40);

    if (data_val)
    {
        if (!param_2 || !*param_2)
        {
            int32_t* i = *(flagP + 8);

            if (*i && i)
            {
                int32_t entity_1 = g_afa7e0;

                do
                {
                    int32_t* temp_1 = *i;
                    void* data_6;

                    if (!temp_1)
                        data_6 = nullptr;
                    else
                    {
                        int32_t data_3 = *temp_1;
                        int32_t data_4 = -(data_3);
                        data_6 = (data_4 - data_4) & temp_1;
                    }

                    *((entity_1 << 2) + &g_afa6e0) = data_6;
                    g_afa7e0 = entity_1 + 1;
                    uint32_t data_8 = Script_ParseEnumReal32_8();
                    int32_t entity_3 = 0;
                    entity_3 = i[7];
                    int32_t data_12 = *(((data_8 * 0x180 + entity_3) << 2) + &g_a96ae0);

                    if (data_12)
                        data_12(i, 0);

                    entity_1 = g_afa7e0 - 1;
                    g_afa7e0 = entity_1;
                    i = *((entity_1 << 2) + &g_afa6e0);
                } while (i);
            }
        }

        if (!dest_val)
        {
        label_51c25c:
            data_val = SoundSys_SetMasterVolume_7(flagP, &flagP[0x20]);

            if (data_val)
            {
                data_val = QTask_LinkEventHandler_2(data_val);
                *(flagP + 0x40) = data_val;
            }
        }
        else
        {
            void* source_1 = *dest_val;

            if (!source_1)
            {
            label_51c23b:
                void* data_19 = *dest_val;

                if (data_19)
                {
                    SoundSys_SetFrequency_7(data_19);
                    Qtask_UpdateList(dest_val);
                    *(flagP + 0x40) = 0;
                }

                goto label_51c25c;
            }

            context = nullptr;
            uint32_t data_14 = SoundSys_LoadSoundDef_5();
            int32_t data_15 = 0;
            data_15 = *(source_1 + 0x1c);
            int32_t data_16 = *(((data_14 * 0x180 + data_15) << 2) + &g_a96ae0);

            if (data_16)
                data_16(source_1, &context);

            char* source_2 = context;

            if (!source_2)
                goto label_51c23b;

            char* data_17 = &flagP[0x20];

            while (true)
            {
                char temp_5 = *data_17;
                char f1_1 = *source_2;
                bool c_2 = temp_5 < f1_1;

                if (temp_5 == f1_1)
                {
                    if (!temp_5)
                    {
                        data_val = nullptr;
                        break;
                    }

                    temp_5 = data_17[1];
                    char f4_1 = source_2[1];
                    c_2 = temp_5 < f4_1;

                    if (temp_5 == f4_1)
                    {
                        data_17 = &data_17[2];
                        source_2 = &source_2[2];

                        if (temp_5)
                            continue;

                        data_val = nullptr;
                        break;
                    }
                }

                data_val = data_17 - data_17 + 1;
                break;
            }

            if (data_val)
                goto label_51c23b;
        }
    }
    else if (dest_val)
    {
        data_val = *dest_val;

        if (data_val)
        {
            SoundSys_SetFrequency_7(data_val);
            int32_t data_1 = Qtask_UpdateList(dest_val);
            *(flagP + 0x40) = 0;
            return data_1;
        }
    }

    return data_val;
}
