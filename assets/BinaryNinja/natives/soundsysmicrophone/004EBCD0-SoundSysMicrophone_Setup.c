#include "SoundSysMicrophone_Setup.h"
int32_t* SoundSysMicrophone_Setup(void* a1)

{
    void* v_8 = a1;
    char v_4 = 1;
    int32_t i = 0;
    int32_t* result = SoundSys_InitSoundSys_9();

    if (*result > 0)
    {
        int32_t srcS1 = 8;

        do
        {
            int32_t objC1 = 0;
            objC1 = *(*(SoundSys_InitSoundSys_9() + srcS1) + 0x1c);
            int32_t valA2 = 0;
            valA2 = g_54db6a;
            (*(((objC1 + valA2 * 0x180) << 2) + &g_a96ae0))(*(SoundSys_InitSoundSys_9() + srcS1), &v_8);
            i += 1;
            srcS1 += 4;
            result = SoundSys_InitSoundSys_9();
        } while (i < *result);
    }

    int32_t* i_1 = *(a1 + 8);

    if (*i_1 && i_1)
    {
        int32_t tmpD3 = g_afa7e0;

        do
        {
            int32_t* srcS2 = *i_1;
            void* valA7;

            if (!srcS2)
                valA7 = nullptr;
            else
            {
                int32_t valA4 = *srcS2;
                int32_t valA5 = -(valA4);
                valA7 = (valA5 - valA5) & srcS2;
            }

            *((tmpD3 << 2) + &g_afa6e0) = valA7;
            int32_t tmpD4 = tmpD3 + 1;
            int32_t valA8 = 0;
            g_afa7e0 = tmpD4;
            valA8 = i_1[7];
            result = *((valA8 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i_1);
                tmpD4 = g_afa7e0;
            }

            i_1 = *((tmpD4 << 2) + &g_afa6dc);
            tmpD3 = tmpD4 - 1;
            g_afa7e0 = tmpD3;
        } while (i_1);
    }

    return result;
}
