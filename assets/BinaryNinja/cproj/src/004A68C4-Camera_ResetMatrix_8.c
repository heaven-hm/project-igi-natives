#include "gi_platform.h"
#include "004A68C4-Camera_ResetMatrix_8.h"
int32_t* Camera_ResetMatrix_8()

{
    int32_t* result = g_936054;

    if (result == 1)
    {
    label_4a68e0: ;
        Camera_ProgramNameUnknown(0xfc);
        int32_t valA = g_9361bc;

        if (valA)
            valA();

        result = Camera_ProgramNameUnknown(0xff);
    }
    else if (!result && g_543e80 == 1)
        goto label_4a68e0;

    return result;
}
