#include "00453730-PatrolPath_OnTick.h"
/* 0x00453730 PatrolPath_OnTick full linked: callers=4 callees=0 */
int32_t* sub_453730(int32_t* a1)

{
    int32_t* result = *a1[1];

    if (!result || !*result || !result)
    {
        result = a1[2];

        if (!result)
        {
            int32_t* ecx_1 = *(*a1 + 8);
            int32_t eax_1 = *ecx_1;
            int32_t eax_2 = -(eax_1);
            return (eax_2 - eax_2) & ecx_1;
        }
    }

    return result;
}
