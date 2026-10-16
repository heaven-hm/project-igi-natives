#include "gi_platform.h"
#include "004252E0-Menu_DrawWidget_15.h"
int32_t* Menu_DrawWidget_15(void* a1)

{
    int32_t* result;

    if (!(*(int32_t*)(uintptr_t)(a1 + 0xa8)))
    {
        result = (*(int32_t*)(uintptr_t)(a1 + 0x120));

        if (result)
        {
            if (*result)
            {
                (*(int32_t*)(uintptr_t)(a1 + 0xb2)) = 1;
                return result;
            }

            (*(int32_t*)(uintptr_t)(a1 + 0xb2)) = 0;
        }
    }
    else
    {
        result = SoundSys_SetFrequency_8(a1 + 0xb8);
        (*(int32_t*)(uintptr_t)(a1 + 0xb2)) = result;

        if (result)
            return SoundSys_Update3DPosition_8(a1 + 0xb8);
    }

    return result;
}
