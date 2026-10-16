#include "SoundSys_AttachLipsync_9.h"
int32_t** SoundSys_AttachLipsync_9(void* a1, int32_t a2, int32_t a3)

{
    int32_t** result = Mem_Alloc(0x24, 4);
    int32_t* valA1;

    if (!a1)
        valA1 = nullptr;
    else
        valA1 = Sys_DispatchOpcode_20(a2, a3, a1);

    *result = valA1;
    result[6] = 0;
    result[7] = 0;
    result[2] = 0;
    result[3] = 0;
    result[1] = 0;
    result[4] = a2;
    result[5] = a3;
    return result;
}
