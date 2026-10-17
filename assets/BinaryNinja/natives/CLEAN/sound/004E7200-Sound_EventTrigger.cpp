// IGI native provenance: Sound_EventTrigger - 0x004E7200 - CFG score 96.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7200-Sound_EventTrigger.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_EventTrigger.h"
int32_t* Sound_EventTrigger(char* context, char* param_2, int32_t param_3)

// Sig: void Sound_EventTrigger(const char* eventName, uint32_t eventId, const
// SoundEventParams* params)
// Note: Dispatches a named sound/event through active object handlers and
// queues the resulting event. Ghidra/r2 CFG agreement: 15 basic blocks and 24
// edges; see assets/IGI1-Native-Name-Evidence.json.
{
    int32_t* result;
    result = g_a5e60a;

    if (!result)
    {
        result = g_a5e610;

        if (*result && *context)
        {
            char* item_60 = context;
            int32_t* result_1 = nullptr;
            int32_t i = 0;

            if (*result > 0)
            {
                int32_t* context_1 = 8;

                do
                {
                    void* source_1 = *(context_1 + result);
                    uint32_t data_1 = SoundSys_StopSoundSample_5();
                    int32_t entity_3 = 0;
                    entity_3 = *(source_1 + 0x1c);
                    (*(((data_1 * 0x180 + entity_3) << 2) + &g_a96ae0))(source_1, &item_60);
                    result = g_a5e610;
                    i += 1;
                    context_1 = &context_1[1];
                } while (i < *result);

                result = result_1;

                if (result)
                {
                    result = SoundSys_InitSoundSys_15();

                    if (result_1[7] != result)
                    {
                        result = SoundSys_LoadSoundDef_14();

                        if (result_1[7] != result)
                        {
                            result = SoundSys_Update3DPosition_14();

                            if (result_1[7] != result)
                            {
                                uint32_t data_6 = Display_CheckCapabilities_12(result_1 + 0xff);
                                char* item_78 = result_1 + 0xff;
                                int32_t data_7 = Display_RestoreDevice_12(item_78);
                                void item_58;

                                if (!param_3)
                                    Display_SetGammaRamp_12(&item_58);
                                else
                                    memcpy(&item_58, param_3, 0x20);

                                int32_t data_8 = g_a5e5f8;
                                g_a5e5f8 = data_8 + 1;
                                char* data_10 = param_2;
                                data_10 |= 1;
                                float* item_74_4 = &item_58;
                                item_78 = data_10;
                                return SoundSys_SetMasterVolume_8(data_8, data_6, data_7, item_78, item_74_4);
                            }
                        }
                    }
                }
            }
        }
    }

    return result;
}
