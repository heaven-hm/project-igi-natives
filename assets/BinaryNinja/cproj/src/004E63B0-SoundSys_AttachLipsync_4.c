#include "gi_platform.h"
#include "004E63B0-SoundSys_AttachLipsync_4.h"
int32_t* SoundSys_AttachLipsync_4(int32_t* a1, void** a2)

{
    int32_t* result = a1;
    int32_t* objC = result[1];

    if (objC)
        *objC = *result;

    void* objC1 = *result;

    if (objC1)
        *(objC1 + 4) = result[1];

    if (*a2 == result)
    {
        result = result[1];
        *a2 = result;
    }

    return result;
}
