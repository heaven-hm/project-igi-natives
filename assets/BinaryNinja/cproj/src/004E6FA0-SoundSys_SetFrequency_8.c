#include "gi_platform.h"
#include "004E6FA0-SoundSys_SetFrequency_8.h"
void* SoundSys_SetFrequency_8(void* a1)

{
    void* i = g_a5e5f4;

    if (i)
    {
        int32_t tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 4));

        do
        {
            if (*(i + 0x10) == tmpD1 && *(i + 0x14) == (*(int32_t*)(uintptr_t)(a1 + 8)))
            {
                void* valA = *(i + 0x1c);

                if (valA)
                    return Display_SyncVSync_11(valA, tmpD1, a1, valA);

                valA = 1;
                return valA;
            }

            i = *(i + 4);
        } while (i);
    }

    i = 0;
    return i;
}
