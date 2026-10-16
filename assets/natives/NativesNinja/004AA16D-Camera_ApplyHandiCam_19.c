#include "004AA16D-Camera_ApplyHandiCam_19.h"
/* 0x004aa16d Camera_ApplyHandiCam_19 full linked: callers=1 callees=0 */
int32_t sub_4aa16d(char a1, int32_t a2, char a3)

{
    uint32_t eax_2 = a1;

    if (!(*(eax_2 + 0xc32321) & a3))
    {
        int32_t result;

        if (!a2)
            result = 0;
        else
            result = g_54407a[eax_2] & a2;

        if (!result)
            return result;
    }

    return 1;
}
