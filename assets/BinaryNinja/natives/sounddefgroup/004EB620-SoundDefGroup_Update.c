// Original IGI.EXE function: SoundDefGroup_Update (VA 0x004EB620; static CFG gate PASS, CFG score 1.000).
#include "SoundDefGroup_Update.h"
int32_t SoundDefGroup_Update(void* a1, void** a2)

{
    void* srcS = *(a1 + 0x14);
    uint32_t valA1 = SoundSys_SetFrequency_5();
    int32_t objC = 0;
    objC = *(srcS + 0x1c);
    int32_t result = *(((valA1 * 0x180 + objC) << 2) + &g_a96ae0);

    if (result)
        result = result(srcS, a2);

    if (!*a2)
        *a2 = a1 + 0x48;

    return result;
}
