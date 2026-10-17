// IGI native provenance: SoundSys_SetMasterVolume_7 - 0x004E6B00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E6B00-SoundSys_SetMasterVolume_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_SetMasterVolume_7.h"
struct status_msg* SoundSys_SetMasterVolume_7(void* context, char* param_2)

{
    if (!g_a5e60a)
    {
        int32_t* data_val = g_a5e610;

        if (*data_val && *param_2)
        {
            char* item_10 = param_2;
            int32_t* flags_1 = nullptr;
            int32_t i = 0;

            if (*data_val > 0)
            {
                int32_t flagP1 = 8;
                int32_t kind_1;

                do
                {
                    void* source_1 = *(data_val + flagP1);
                    uint32_t data_2 = SoundSys_StopSoundSample_5();
                    int32_t entity_3 = 0;
                    entity_3 = *(source_1 + 0x1c);
                    kind_1 = (*(((data_2 * 0x180 + entity_3) << 2) + &g_a96ae0))(source_1, &item_10);
                    data_val = g_a5e610;
                    i += 1;
                    flagP1 += 4;
                } while (i < *data_val);

                if (flags_1)
                {
                    kind_1 = flags_1[7];
                    int32_t* flags = flags_1;
                    char item_4 = 0;
                    struct status_msg* kind = QTask_HandleInput(context, kind_1, &flags);
                    struct status_msg* ctx = kind;
                    int32_t* i_1 = flags_1[2];

                    if (*i_1 && i_1)
                    {
                        do
                        {
                            kind = i_1[7];
                            flags = i_1;
                            kind = QTask_HandleInput(ctx, kind, &flags);
                            i_1 = *i_1;

                            if (!i_1)
                                break;

                            if (!*i_1)
                                break;
                        } while (i_1);
                    }

                    return ctx;
                }
            }
        }
    }

    return 0;
}
