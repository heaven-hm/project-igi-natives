#include "Vehicle_InitPlane_2.h"
int32_t* Vehicle_InitPlane_2(void* a1)

{
    int32_t* result = *(a1 + 0x74c);

    if (result)
    {
        void* valA = *result;

        if (valA)
            SoundSys_SetFrequency_7(valA);

        result = Qtask_UpdateList(*(a1 + 0x74c));
        *(a1 + 0x74c) = 0;
    }

    return result;
}
