#include "gi_platform.h"
#include "0047AAB0-Weapon_UpdateRecoil_6.h"
int32_t Weapon_UpdateRecoil_6(float* a1, float* a2, int32_t a3, int32_t a4)

{
    int32_t srcS = a3;
    int32_t dstD = 0;
    int32_t* flagP = (*(int32_t*)(uintptr_t)(srcS + 0x128));
    int32_t* ctxB = (*(int32_t*)(uintptr_t)(srcS + 0x12c));
    a3 = 0;
    int32_t valA = g_c28b44;
    int32_t objC = g_c28b48;
    void* srcS1 = (*(int32_t*)(uintptr_t)(srcS + 0x14));
    uint32_t valA2 = Weapon_ReloadClip_8();
    int32_t valA3 = 0;
    valA3 = *(srcS1 + 0x1c);
    int32_t valA4 = *(((valA2 * 0x180 + valA3) << 2) + &g_a96ae0);

    if (valA4)
        valA4(srcS1, &a3);

    int32_t* valA6 = Weapon_UpdateMuzzleFlash_8(a3, *ctxB);

    if (valA6)
        dstD = valA6[1];

    int32_t v_2c_3 = dstD;
    char v_10;
    Game_DataSymbolLoad(&v_10, "%-4d");
    Sys_FreeMemory_18((*(int32_t*)(uintptr_t)(a4 + 0x4e0)), &v_10);
    void* valA9 = a4 + 0x14c;

    if (*flagP != 0xc)
        valA9 = a4 + 0xec;

    *a1 = valA * 0.984375.0f - 4.0f - 8.0f;
    *a2 = objC * 0.895833313.0f + 4.0f;
    long double x87_r7_7 = Sys_CloseFileStream_17(valA9);
    *a1 = *a1 - x87_r7_7;
    int32_t result = Sys_CheckHeap_21((*(int32_t*)(uintptr_t)(a4 + 0x4e0)));
    a3 = result;
    *a1 = *a1 - a3;
    return result;
}
