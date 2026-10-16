#include "gi_platform.h"
#include "0041D660-menu_k01.h"
int32_t menu_k01(void* a1, int32_t a2)

{
    char* valA = a1 + a2 + 0x54;

    if ((*(int32_t*)(uintptr_t)(a1 + a2 + 0x54)))
    {
        char i;

        do
        {
            *valA = valA[1];
            i = valA[1];
            valA = &valA[1];
        } while (i);
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x1a0)) = a2;
    return SoundSys_AttachLipsync_8("menu_k01", 0, 0);
}
