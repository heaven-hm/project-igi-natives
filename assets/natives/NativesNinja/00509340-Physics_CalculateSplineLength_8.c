#include "00509340-Physics_CalculateSplineLength_8.h"
/* 0x00509340 Physics_CalculateSplineLength_8 full linked: callers=1 callees=1 */
int32_t sub_509340(void* a1)

{
    int32_t ebx = 0;
    int32_t result = *(a1 + 0x58);

    if (result > 0)
    {
        do
        {
            int32_t i = 0;

            if (result > 0)
            {
                do
                {
                    int32_t* eax = sub_509390(a1, ebx, i);
                    *eax = 0xffffffff;
                    eax[1] = 0xbf800000;
                    i += 1;
                } while (i < *(a1 + 0x58));
            }

            result = *(a1 + 0x58);
            ebx += 1;
        } while (ebx < result);
    }

    return result;
}
