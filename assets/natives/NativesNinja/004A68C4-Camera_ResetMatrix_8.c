#include "004A68C4-Camera_ResetMatrix_8.h"
/* 0x004a68c4 Camera_ResetMatrix_8 full linked: callers=2 callees=2 */
int32_t* sub_4a68c4()

{
    int32_t* result = g_936054;

    if (result == 1)
    {
    label_4a68e0:
        sub_4a68fd(0xfc);
        int32_t eax = g_9361bc;

        if (eax)
            eax();

        result = sub_4a68fd(0xff);
    }
    else if (!result && g_543e80 == 1)
        goto label_4a68e0;

    return result;
}
