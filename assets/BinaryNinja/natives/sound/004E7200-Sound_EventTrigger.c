#include "Sound_EventTrigger.h"
int32_t* Sound_EventTrigger(char* a1, char* a2, int32_t a3)

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

        if (*result && *a1)
        {
            char* v_60 = a1;
            int32_t* result_1 = nullptr;
            int32_t i = 0;

            if (*result > 0)
            {
                int32_t* ctxB1 = 8;

                do
                {
                    void* srcS1 = *(ctxB1 + result);
                    uint32_t valA1 = SoundSys_StopSoundSample_5();
                    int32_t objC3 = 0;
                    objC3 = *(srcS1 + 0x1c);
                    (*(((valA1 * 0x180 + objC3) << 2) + &g_a96ae0))(srcS1, &v_60);
                    result = g_a5e610;
                    i += 1;
                    ctxB1 = &ctxB1[1];
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
                                uint32_t valA6 = Display_CheckCapabilities_12(result_1 + 0xff);
                                char* v_78 = result_1 + 0xff;
                                int32_t valA7 = Display_RestoreDevice_12(v_78);
                                void v_58;

                                if (!a3)
                                    Display_SetGammaRamp_12(&v_58);
                                else
                                    memcpy(&v_58, a3, 0x20);

                                int32_t valA8 = g_a5e5f8;
                                g_a5e5f8 = valA8 + 1;
                                char* valA10 = a2;
                                valA10 |= 1;
                                float* v_74_4 = &v_58;
                                v_78 = valA10;
                                return SoundSys_SetMasterVolume_8(valA8, valA6, valA7, v_78, v_74_4);
                            }
                        }
                    }
                }
            }
        }
    }

    return result;
}
