#include "004E7600-SoundSys_AttachLipsync_9.h"
/* 0x004e7600 SoundSys_AttachLipsync_9 full linked: callers=1 callees=2 */
int32_t** sub_4e7600(void* a1, int32_t a2, int32_t a3)

{
    int32_t** result = Mem_Alloc(0x24, 4);
    int32_t* eax_1;

    if (!a1)
        eax_1 = nullptr;
    else
        eax_1 = sub_4b7630(a2, a3, a1);

    *result = eax_1;
    result[6] = 0;
    result[7] = 0;
    result[2] = 0;
    result[3] = 0;
    result[1] = 0;
    result[4] = a2;
    result[5] = a3;
    return result;
}
