#include "Weapon_ComputeAccuracy_6.h"
int32_t Weapon_ComputeAccuracy_6(int32_t a1, float a2)

{
    int32_t dstD = 0;
    int32_t* ctxB = *(a1 + 0x12c);
    int32_t* v_1c = nullptr;
    int32_t valA = g_c28b44;
    int32_t objC = g_c28b48;
    int32_t flagP = *(a1 + 0x144);
    void* srcS1 = *(a1 + 0x14);
    uint32_t valA2 = Weapon_ReloadClip_8();
    int32_t valA3 = 0;
    valA3 = *(srcS1 + 0x1c);
    int32_t valA4 = *(((valA2 * 0x180 + valA3) << 2) + &g_a96ae0);

    if (valA4)
        valA4(srcS1, &v_1c);

    int32_t* valA6 = Weapon_UpdateMuzzleFlash_8(v_1c, *ctxB);

    if (valA6)
        dstD = valA6[1];

    int32_t ctxB1 = 7 - flagP;

    if (7 - flagP < 0)
        ctxB1 = 0;

    int32_t v_30_3 = dstD;
    void v_10;
    Game_DataSymbolLoad(&v_10, "%-4d");
    float srcS2 = a2;
    Sys_FreeMemory_18(*(srcS2 + 0x4e0), &v_10);
    a2 = valA * 0.984375f - 4f;
    float v_18_2 = objC * 0.895833313f + 4f;
    Sys_ResolveSymbol_14(srcS2 + 0x11c, a2 - 8f - Sys_CloseFileStream_17(srcS2 + 0x11c) - Sys_CheckHeap_21(*(srcS2 + 0x4e0)),
        v_18_2, 128f, 128f, 128f, ctxB1, 0, 0);
    *(*(srcS2 + 0x4e0) + 4) = a2 - Sys_CheckHeap_21(*(srcS2 + 0x4e0));
    *(*(srcS2 + 0x4e0) + 8) = v_18_2;
    return Sys_CloseFileStream_18(*(srcS2 + 0x4e0));
}
