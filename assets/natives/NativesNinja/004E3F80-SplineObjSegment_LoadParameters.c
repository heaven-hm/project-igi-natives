#include "004E3F80-SplineObjSegment_LoadParameters.h"
/* 0x004e3f80 SplineObjSegment_LoadParameters full linked: callers=0 callees=2 */
void* sub_4e3f80(void* a1)

{
    sub_4c7560(*(a1 + 0xf0), a1);
    int32_t* esi_1 = a1 + 0x5a0;
    int32_t i_1 = 2;
    void* result;
    int32_t i;

    do
    {
        result = *esi_1;

        if (result)
        {
            result = sub_4b0d10(result);
            *esi_1 = 0;
        }

        esi_1 = &esi_1[2];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
