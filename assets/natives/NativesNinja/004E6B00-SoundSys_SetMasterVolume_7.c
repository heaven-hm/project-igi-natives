#include "004E6B00-SoundSys_SetMasterVolume_7.h"
/* 0x004e6b00 SoundSys_SetMasterVolume_7 full linked: callers=83 callees=3 */
struct status_msg* sub_4e6b00(void* a1, char* a2)

{
    if (!g_a5e60a)
    {
        int32_t* eax = g_a5e610;

        if (*eax && *a2)
        {
            char* var_10 = a2;
            int32_t* flags_1 = nullptr;
            int32_t i = 0;

            if (*eax > 0)
            {
                int32_t ebp_1 = 8;
                int32_t kind_1;

                do
                {
                    void* esi_1 = *(eax + ebp_1);
                    uint32_t eax_2 = sub_4e6630();
                    int32_t ecx_3 = 0;
                    ecx_3 = *(esi_1 + 0x1c);
                    kind_1 = (*(((eax_2 * 0x180 + ecx_3) << 2) + &g_a96ae0))(esi_1, &var_10);
                    eax = g_a5e610;
                    i += 1;
                    ebp_1 += 4;
                } while (i < *eax);

                if (flags_1)
                {
                    kind_1 = flags_1[7];
                    int32_t* flags = flags_1;
                    char var_4 = 0;
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
