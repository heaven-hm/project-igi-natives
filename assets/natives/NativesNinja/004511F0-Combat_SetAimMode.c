#include "004511F0-Combat_SetAimMode.h"
/* 0x004511f0 Combat_SetAimMode full linked: callers=22 callees=0 */
int32_t sub_4511f0(void* a1, void* a2, int32_t a3)

{
    int32_t result = 0;
    int32_t ecx = *(a1 + 0x128);

    if (ecx > 0)
    {
        int32_t* edx_1 = a1 + 0x10;

        while (*(a2 + 0x14) != *edx_1)
        {
            result += 1;
            edx_1 = &edx_1[1];

            if (result >= ecx)
                return result;
        }

        *(a1 + (result << 2) + 0x90) = a3;
    }

    return result;
}
