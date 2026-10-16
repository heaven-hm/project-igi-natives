#include "004A6BD2-Camera_ApplyHandiCam_9.h"
/* 0x004a6bd2 Camera_ApplyHandiCam_9 full linked: callers=4 callees=1 */
int32_t sub_4a6bd2(int32_t* a1)

{
    int32_t result = 0;
    int16_t eax = a1[3];

    if ((eax & 3) == 2 && eax & 0x108)
    {
        char* eax_1 = a1[2];
        uint32_t edi_2 = *a1 - eax_1;

        if (edi_2 > 0)
        {
            if (sub_4abec7(a1[4], eax_1, edi_2) != edi_2)
            {
                a1[3] |= 0x20;
                result = 0xffffffff;
            }
            else
            {
                int32_t eax_3 = a1[3];

                if (eax_3 & 0x80)
                {
                    eax_3 &= 0xfd;
                    a1[3] = eax_3;
                }
            }
        }
    }

    int32_t eax_4 = a1[2];
    a1[1] = 0;
    *a1 = eax_4;
    return result;
}
