#include "004E7200-Sound_EventTrigger.h"
/* 0x004e7200 Sound_EventTrigger full linked: callers=7 callees=9 */
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
            char* var_60 = a1;
            int32_t* result_1 = nullptr;
            int32_t i = 0;

            if (*result > 0)
            {
                int32_t* ebx_1 = 8;

                do
                {
                    void* esi_1 = *(ebx_1 + result);
                    uint32_t eax_1 = sub_4e6630();
                    int32_t ecx_3 = 0;
                    ecx_3 = *(esi_1 + 0x1c);
                    (*(((eax_1 * 0x180 + ecx_3) << 2) + &g_a96ae0))(esi_1, &var_60);
                    result = g_a5e610;
                    i += 1;
                    ebx_1 = &ebx_1[1];
                } while (i < *result);

                result = result_1;

                if (result)
                {
                    result = sub_4eba80();

                    if (result_1[7] != result)
                    {
                        result = sub_4ead10();

                        if (result_1[7] != result)
                        {
                            result = sub_4e9eb0();

                            if (result_1[7] != result)
                            {
                                uint32_t eax_6 = sub_497450(result_1 + 0xff);
                                char* var_78 = result_1 + 0xff;
                                int32_t eax_7 = sub_497410(var_78);
                                void var_58;

                                if (!a3)
                                    sub_4974a0(&var_58);
                                else
                                    memcpy(&var_58, a3, 0x20);

                                int32_t eax_8 = g_a5e5f8;
                                g_a5e5f8 = eax_8 + 1;
                                char* eax_10 = a2;
                                eax_10 |= 1;
                                float* var_74_4 = &var_58;
                                var_78 = eax_10;
                                return sub_4e6db0(eax_8, eax_6, eax_7, var_78, var_74_4);
                            }
                        }
                    }
                }
            }
        }
    }

    return result;
}
