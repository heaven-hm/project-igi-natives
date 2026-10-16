#include "004E63B0-SoundSys_AttachLipsync_4.h"
/* 0x004e63b0 SoundSys_AttachLipsync_4 full linked: callers=7 callees=0 */
int32_t* sub_4e63b0(int32_t* a1, void** a2)

{
    int32_t* result = a1;
    int32_t* ecx = result[1];

    if (ecx)
        *ecx = *result;

    void* ecx_1 = *result;

    if (ecx_1)
        *(ecx_1 + 4) = result[1];

    if (*a2 == result)
    {
        result = result[1];
        *a2 = result;
    }

    return result;
}
