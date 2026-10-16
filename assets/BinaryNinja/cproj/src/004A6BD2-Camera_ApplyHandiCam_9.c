#include "gi_platform.h"
#include "004A6BD2-Camera_ApplyHandiCam_9.h"
int32_t Camera_ApplyHandiCam_9(int32_t* a1)

{
    int32_t result = 0;
    int16_t valA = a1[3];

    if ((valA & 3) == 2 && valA & 0x108)
    {
        char* valA1 = a1[2];
        uint32_t dstD2 = *a1 - valA1;

        if (dstD2 > 0)
        {
            if (Camera_ApplyHandiCam_23(a1[4], valA1, dstD2) != dstD2)
            {
                a1[3] |= 0x20;
                result = 0xffffffff;
            }
            else
            {
                int32_t valA3 = a1[3];

                if (valA3 & 0x80)
                {
                    valA3 &= 0xfd;
                    a1[3] = valA3;
                }
            }
        }
    }

    int32_t valA4 = a1[2];
    a1[1] = 0;
    *a1 = valA4;
    return result;
}
