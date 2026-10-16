#include "gi_platform.h"
#include "0041D6A0-Menu_MenuK01D.h"
int32_t Menu_MenuK01D(void* a1, int32_t a2, char a3)

{
    int32_t i = 0xffffffff;
    void* dstD = a1 + 0x54;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    for (int32_t i_1 = ~i - 1; i_1 >= a2; i_1 -= 1)
        (*(int32_t*)(uintptr_t)(a1 + i_1 + 0x55)) = (*(int32_t*)(uintptr_t)(a1 + i_1 + 0x54));

    (*(int32_t*)(uintptr_t)(a1 + a2 + 0x54)) = a3;
    (*(int32_t*)(uintptr_t)(a1 + 0x1a0)) = a2 + 1;
    int32_t valA4;
    int32_t tmpD;
    tmpD = HIGHD(a3);
    valA4 = LOWD(a3);
    int32_t v_4c = ((valA4 ^ tmpD) - tmpD) % 7 + 1;
    char v_40;
    Game_DataSymbolLoad(&v_40, "menu_k0%.1d");
    return SoundSys_AttachLipsync_8(&v_40, 0, 0);
}
