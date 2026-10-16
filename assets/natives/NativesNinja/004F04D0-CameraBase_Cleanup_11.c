#include "004F04D0-CameraBase_Cleanup_11.h"
/* 0x004f04d0 CameraBase_Cleanup_11 full linked: callers=0 callees=2 */
int32_t sub_4f04d0(int32_t a1, int32_t* a2)

{
    int32_t edi = a1;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t result = ~i;
    int32_t esi_1;
    int32_t edi_3;
    edi_3 = memcpy(*a2, edi - result, result & 0xfffffffc);
    memcpy(edi_3, esi_1, result & 3);
    return result;
}
