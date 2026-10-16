#include "004E6AB0-SoundSys_Update3DPosition_7.h"
/* 0x004e6ab0 SoundSys_Update3DPosition_7 full linked: callers=6 callees=4 */
int32_t* sub_4e6ab0(int32_t a1)

{
    Qhash_Init(1);
    int32_t* result = Mem_Alloc((a1 << 2) + 4, 4);
    Qhash_Reset();

    if (result)
    {
        *result = a1;

        if (a1 > 0)
            __builtin_memset(&result[1], 0, a1 << 2);
    }

    return result;
}
