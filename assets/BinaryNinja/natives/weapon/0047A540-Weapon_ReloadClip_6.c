#include "Weapon_ReloadClip_6.h"
int32_t Weapon_ReloadClip_6(int32_t* a1, float a2)

{
    int32_t* srcS = a1;
    int32_t flagP = 0;
    int32_t* ctxB = srcS[0x4b];
    a1 = nullptr;
    int32_t valA = g_c28b44;
    int32_t objC = g_c28b48;
    int32_t tmpD = srcS[0x51];
    void* dstD = srcS[5];
    uint32_t valA2 = Weapon_ReloadClip_8();
    int32_t objC1 = 0;
    objC1 = *(dstD + 0x1c);
    int32_t valA6 = *(((valA2 * 0x180 + objC1) << 2) + &g_a96ae0);

    if (valA6)
        valA6(dstD, &a1);

    int32_t* valA8 = Weapon_UpdateMuzzleFlash_8(a1, *ctxB);

    if (valA8)
        flagP = valA8[1];

    int32_t ctxB1 = srcS[0x67] + (6 - tmpD) * 0xa;

    if (ctxB1 < 0)
        ctxB1 = 0;

    int32_t v_60_3 = flagP;
    void v_10;
    Game_DataSymbolLoad(&v_10, "%-4d");
    float srcS1 = a2;
    Sys_FreeMemory_18(*(srcS1 + 0x4e0), &v_10);
    long double x87_r7_2 = valA * 0.984375f - 4f;
    a2 = x87_r7_2;
    long double x87_r7_6 = objC * 0.895833313f + 4f;
    float v_3c = x87_r7_6;
    float v_40_2 = x87_r7_2 - 8f - Sys_CloseFileStream_17(srcS1 + 0x104) - Sys_CheckHeap_21(*(srcS1 + 0x4e0));
    float v_34 = Sys_CloseFileStream_17(srcS1 + 0x104);
    long double x87_r7_13 = Sys_ExecuteBytecode_17(srcS1 + 0x104) + v_3c;
    long double x87_r6_1 = v_34 + v_40_2;
    Qsprite_Register4Az(srcS1 + 0x104, v_40_2, v_3c, v_40_2, x87_r7_13, x87_r6_1, v_3c,
        x87_r6_1, x87_r7_13, 128f, 128f, 128f, 0, 0, ctxB1, 0, 0);
    *(*(srcS1 + 0x4e0) + 4) = a2 - Sys_CheckHeap_21(*(srcS1 + 0x4e0));
    *(*(srcS1 + 0x4e0) + 8) = x87_r7_6;
    return Sys_CloseFileStream_18(*(srcS1 + 0x4e0));
}
