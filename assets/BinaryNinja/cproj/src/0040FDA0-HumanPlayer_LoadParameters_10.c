#include "gi_platform.h"
#include "0040FDA0-HumanPlayer_LoadParameters_10.h"
void* HumanPlayer_LoadParameters_10(void* a1, void* a2)

{
    void* tmpD = (*(int32_t*)(uintptr_t)(a2 + 0x2f0));
    (*(int32_t*)(uintptr_t)(a2 + 0x2f8)) = (*(int32_t*)(uintptr_t)(a2 + 0x2fc));
    (*(int32_t*)(uintptr_t)(a2 + 0x2fc)) = 0x2d;
    int32_t objC1 = *(tmpD + 0xb4);
    (*(int32_t*)(uintptr_t)(a2 + 0x300)) = objC1;
    objC1(a2 + 0x2ec, a2);
    (*(int32_t*)(uintptr_t)(a2 + 0x4d0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_40fdf0;
    return a1;
}
