#include "gi_platform.h"
#include "004E9AA0-SoundDefTriggerOnce_Setup.h"
int32_t SoundDefTriggerOnce_Setup(int32_t a1)

{
    int32_t* srcS = a1;

    if (srcS[0x49])
        return QTask_FindType(srcS);

    int32_t result;

    if (!(*(int32_t*)(uintptr_t)(srcS + 0x123)))
        result = SoundSys_SetMasterVolume_14(srcS);
    else
    {
        SoundSys_SetMasterVolume_14(srcS);
        result = SoundSys_SetFrequency_4();
        srcS[0x4a] = 1.0f / result + srcS[0x4a];
    }

    int32_t* i = srcS[2];

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA5;

            if (!srcS1)
                valA5 = nullptr;
            else
            {
                int32_t valA2 = *srcS1;
                int32_t valA3 = -(valA2);
                valA5 = (valA3 - valA3) & srcS1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA5;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA6 = 0;
            g_afa7e0 = tmpD2;
            valA6 = i[7];
            result = *((valA6 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    return result;
}
