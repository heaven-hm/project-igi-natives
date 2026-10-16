#include "004AD6F7-Camera_ApplyBandFilter_28.h"
/* 0x004ad6f7 Camera_ApplyBandFilter_28 full linked: callers=1 callees=0 */
void* sub_4ad6f7(char* a1, int32_t a2)

{
    char* eax = a1;
    int32_t ecx = a2 - 1;

    if (a2)
    {
        while (*eax)
        {
            eax = &eax[1];
            int32_t esi_1 = ecx;
            ecx -= 1;

            if (!esi_1)
                break;
        }
    }

    if (*eax)
        return a2;

    return eax - a1;
}
