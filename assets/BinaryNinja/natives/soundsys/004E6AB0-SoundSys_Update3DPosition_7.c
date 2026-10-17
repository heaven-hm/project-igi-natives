// Original IGI.EXE function: SoundSys_Update3DPosition_7 (VA 0x004E6AB0; static CFG gate PASS, CFG score 0.917).
#include "SoundSys_Update3DPosition_7.h"
int32_t* SoundSys_Update3DPosition_7(int32_t a1)

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
