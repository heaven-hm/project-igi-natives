// Original IGI.EXE function: Weapon_FireBullet_6 (VA 0x0047A360; static CFG gate PASS, CFG score 1.000).
#include "Weapon_FireBullet_6.h"
int32_t Weapon_FireBullet_6(void* a1, float a2)

{
    void* dstD = a1;
    int32_t* valA = *(dstD + 0x128);
    int32_t* ctxB = *(dstD + 0x12c);
    int32_t* v_24 = nullptr;
    a1 = nullptr;
    int32_t objC = g_c28b44;
    int32_t tmpD = g_c28b48;
    int32_t flagP = *(dstD + 0x144);
    void* srcS = *(dstD + 0x14);
    uint32_t valA2 = Weapon_ReloadClip_8();
    int32_t objC1 = 0;
    objC1 = *(srcS + 0x1c);
    int32_t valA6 = *(((valA2 * 0x180 + objC1) << 2) + &g_a96ae0);

    if (valA6)
        valA6(srcS, &v_24);

    int32_t* valA8 = Weapon_UpdateMuzzleFlash_8(v_24, *ctxB);

    if (valA8)
        a1 = valA8[1];

    int32_t f0 = flagP * 0x3c / valA[0x192];
    valA[0x192];
    int32_t flagP1 = 0x3c - f0;

    if (0x3c - f0 < 0)
        flagP1 = 0;

    float srcS1 = a2;
    int32_t* ctxB1;

    if (*valA != 0xc)
        ctxB1 = srcS1 + 0xec;
    else
    {
        flagP1 = 0;
        ctxB1 = srcS1 + 0xd4;

        if (!flagP)
            ctxB1 = nullptr;

        if (*(dstD + 0x144))
            a1 += 1;
    }

    void* v_38_3 = a1;
    void v_10;
    Game_DataSymbolLoad(&v_10, "%-4d");
    Sys_FreeMemory_18(*(srcS1 + 0x4e0), &v_10);
    a2 = objC * 0.984375f - 4f;
    *(*(srcS1 + 0x4e0) + 4) = a2 - Sys_CheckHeap_21(*(srcS1 + 0x4e0));
    long double x87_r7_7 = tmpD * 0.895833313f + 4f;
    float v_14_1 = x87_r7_7;
    *(*(srcS1 + 0x4e0) + 8) = x87_r7_7;
    int32_t result = Sys_CloseFileStream_18(*(srcS1 + 0x4e0));

    if (!ctxB1)
        return result;

    return Sys_ResolveSymbol_14(ctxB1, a2 - 8f - Sys_CloseFileStream_17(ctxB1) - Sys_CheckHeap_21(*(srcS1 + 0x4e0)),
        v_14_1, 128f, 128f, 128f, flagP1, 0, 0);
}
