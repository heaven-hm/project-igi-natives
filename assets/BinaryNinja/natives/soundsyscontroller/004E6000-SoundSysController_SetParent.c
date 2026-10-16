#include "SoundSysController_SetParent.h"

int32_t SoundSysController_SetParent(int32_t pThis, int32_t param)

{
    int32_t param_1 = param;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *param_1;
        param_1 += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t result = ~i;
    int32_t esi_1;
    int32_t edi_2;
    edi_2 = __builtin_memcpy(pThis + 0x20, param_1 - result, result & 0xfffffffc);
    __builtin_memcpy(edi_2, esi_1, result & 3);
    return result;
}
