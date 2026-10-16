#include "Weapon_CheckAmmo_5.h"
int32_t Weapon_CheckAmmo_5(int32_t* a1, int32_t a2)

{
    int32_t* srcS = a1;
    int32_t ctxB = 0;
    a1 = nullptr;
    int32_t* dstD = srcS[0x4b];
    int32_t valA = g_c28b44;
    int32_t objC = g_c28b48;
    void* srcS1 = srcS[5];
    uint32_t valA2 = Weapon_ReloadClip_8();
    int32_t valA3 = 0;
    valA3 = *(srcS1 + 0x1c);
    int32_t valA4 = *(((valA2 * 0x180 + valA3) << 2) + &g_a96ae0);

    if (valA4)
        valA4(srcS1, &a1);

    int32_t* valA6 = Weapon_UpdateMuzzleFlash_8(a1, *dstD);

    if (valA6)
        ctxB = valA6[1];

    int32_t v_28_3 = ctxB;
    void v_10;
    Game_DataSymbolLoad(&v_10, "%-4d");
    Sys_FreeMemory_18(*(a2 + 0x4e0), &v_10);
    *(*(a2 + 0x4e0) + 4) = valA * 0.984375f - 4f - Sys_CheckHeap_21(*(a2 + 0x4e0));
    *(*(a2 + 0x4e0) + 8) = objC * 0.895833313f + 4f;
    return Sys_CloseFileStream_18(*(a2 + 0x4e0));
}
