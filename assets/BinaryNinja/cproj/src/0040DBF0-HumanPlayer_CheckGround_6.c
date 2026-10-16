#include "gi_platform.h"
#include "0040DBF0-HumanPlayer_CheckGround_6.h"
void HumanPlayer_CheckGround_6(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x664)) = (*(int32_t*)(uintptr_t)(a2 + 0x664)) * 0.99000001.0f;
    (*(int32_t*)(uintptr_t)(a2 + 0x668)) = (*(int32_t*)(uintptr_t)(a2 + 0x668)) * 0.99000001.0f;
    (*(int32_t*)(uintptr_t)(a2 + 0x66c)) = ((*(int32_t*)(uintptr_t)(a2 + 0x66c)) - 44.6008873.0f) * 0.99000001.0f;

    if (!((*(int32_t*)(uintptr_t)(a1 + 8)) & 4))
        return;

    void* valA1 = (*(int32_t*)(uintptr_t)(a2 + 0xdb4));
    (*(int32_t*)(uintptr_t)(a2 + 0xd7a)) = 1;
    __builtin_memset(a2 + 0x664, 0, 0x18);

    if (valA1)
    {
        SoundSys_SetFrequency_7(valA1);
        (*(int32_t*)(uintptr_t)(a2 + 0xdb4)) = 0;
    }

    int32_t* objC1 = (*(int32_t*)(uintptr_t)(a1 + 4));
    (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0;
    int32_t valA3 = *objC1;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA3;
    valA3(a1, a2);
}
