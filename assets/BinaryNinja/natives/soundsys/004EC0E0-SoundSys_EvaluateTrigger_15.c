#include "SoundSys_EvaluateTrigger_15.h"
int32_t SoundSys_EvaluateTrigger_15(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t tmpD3 = g_a5ef84;
    int32_t result = 0;

    if (tmpD3 <= 0)
        return result;

    int32_t* objC1 = &g_a5ec80;

    do
    {
        if (*objC1 == a1)
        {
            int32_t valA1 = result * 0xc;
            int32_t v_c = a2;
            int32_t v_4_1 = a3;
            int32_t v_8_1 = *(valA1 + &g_a5ec88);
            int32_t tmpD1 = 0;
            tmpD1 = *(valA1 + 0xa5ec84);
            return (*(((tmpD1 + *g_54db80 * 0x180) << 2) + &g_a96ae0))(0, &v_c);
        }

        result += 1;
        objC1 = &objC1[3];
    } while (result < tmpD3);

    return result;
}
