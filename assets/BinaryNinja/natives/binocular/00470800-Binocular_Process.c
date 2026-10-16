#include "Binocular_Process.h"
int32_t* Binocular_Process(void* a1)

{
    int32_t* result = *(a1 + 0x1c4);

    if (result)
    {
        void* valA = *result;

        if (valA)
            SoundSys_SetFrequency_7(valA);

        result = Qtask_UpdateList(*(a1 + 0x1c4));
        *(a1 + 0x1c4) = 0;
    }

    return result;
}
