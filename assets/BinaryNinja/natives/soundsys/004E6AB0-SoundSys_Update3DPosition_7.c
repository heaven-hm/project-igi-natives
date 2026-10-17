// Original IGI.EXE function: SoundSys_Update3DPosition_7 (VA 0x004E6AB0; static CFG gate PASS, CFG score 0.917).
#include "SoundSys_Update3DPosition_7.h"
int32_t* SoundSys_Update3DPosition_7(int32_t context)

{
    Qhash_Init(1);
    int32_t* result = Mem_Alloc((context << 2) + 4, 4);
    Qhash_Reset();

    if (result)
    {
        *result = context;

        if (context > 0)
            memset(&result[1], 0, context << 2);
    }

    return result;
}
