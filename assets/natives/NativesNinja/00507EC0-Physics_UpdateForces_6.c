#include "00507EC0-Physics_UpdateForces_6.h"
/* 0x00507ec0 Physics_UpdateForces_6 full linked: callers=1 callees=0 */
int16_t* sub_507ec0(int32_t* a1, int32_t a2)

{
    a1[6] = a1[7];
    int32_t eax_1 = *a1;

    if (eax_1)
        eax_1(a1, a2);

    int32_t edx = a1[7];
    int32_t i = 0;
    a1[5] = ~a1[6] & edx;
    int16_t* result = &a1[8];

    do
    {
        if (!(edx & 1 << (i & 0x1f)))
            *result = 0;
        else
            *result += 1;

        i += 1;
        result = &result[1];
    } while (i < 0x20);

    return result;
}
