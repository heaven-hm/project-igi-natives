#include "SoundSys_SetMasterVolume_7.h"
struct status_msg* SoundSys_SetMasterVolume_7(void* a1, char* a2)

{
    if (!g_a5e60a)
    {
        int32_t* valA = g_a5e610;

        if (*valA && *a2)
        {
            char* v_10 = a2;
            int32_t* flags_1 = nullptr;
            int32_t i = 0;

            if (*valA > 0)
            {
                int32_t flagP1 = 8;
                int32_t kind_1;

                do
                {
                    void* srcS1 = *(valA + flagP1);
                    uint32_t valA2 = SoundSys_StopSoundSample_5();
                    int32_t objC3 = 0;
                    objC3 = *(srcS1 + 0x1c);
                    kind_1 = (*(((valA2 * 0x180 + objC3) << 2) + &g_a96ae0))(srcS1, &v_10);
                    valA = g_a5e610;
                    i += 1;
                    flagP1 += 4;
                } while (i < *valA);

                if (flags_1)
                {
                    kind_1 = flags_1[7];
                    int32_t* flags = flags_1;
                    char v_4 = 0;
                    struct status_msg* kind = QTask_HandleInput(a1, kind_1, &flags);
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
