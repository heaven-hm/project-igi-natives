#include "004EC0E0-SoundSys_EvaluateTrigger_15.h"
/* 0x004ec0e0 SoundSys_EvaluateTrigger_15 full linked: callers=2 callees=0 */
int32_t sub_4ec0e0(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t edx_3 = g_a5ef84;
    int32_t result = 0;

    if (edx_3 <= 0)
        return result;

    int32_t* ecx_1 = &g_a5ec80;

    do
    {
        if (*ecx_1 == a1)
        {
            int32_t eax_1 = result * 0xc;
            int32_t var_c = a2;
            int32_t var_4_1 = a3;
            int32_t var_8_1 = *(eax_1 + &g_a5ec88);
            int32_t edx_1 = 0;
            edx_1 = *(eax_1 + 0xa5ec84);
            return (*(((edx_1 + *g_54db80 * 0x180) << 2) + &g_a96ae0))(0, &var_c);
        }

        result += 1;
        ecx_1 = &ecx_1[3];
    } while (result < edx_3);

    return result;
}
