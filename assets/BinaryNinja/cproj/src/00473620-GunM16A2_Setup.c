#include "gi_platform.h"
#include "00473620-GunM16A2_Setup.h"
int32_t GunM16A2_Setup(int32_t a1, float a2)

{
    int32_t* dstD = a2;
    int32_t flagP = 0;
    int32_t* v_18 = nullptr;
    int32_t srcS = *dstD;
    ((int(*)())(uintptr_t)(*(((FX_DebrisSpawn_8() * 0x180 + Weapon_ComputeAccuracy_5()) << 2) + &g_a96ae0)))(a1, dstD);
    void* ctxB3 = (*(int32_t*)(uintptr_t)(a1 + 0x14));
    uint32_t valA6 = Weapon_ReloadClip_8();
    int32_t objC = 0;
    objC = *(ctxB3 + 0x1c);
    int32_t valA10 = *(((valA6 * 0x180 + objC) << 2) + &g_a96ae0);

    if (valA10)
        valA10(ctxB3, &v_18);

    int32_t valA11 = Weapon_FireBullet_8("AMMO_ID_M203");
    int32_t* valA13 = Weapon_UpdateMuzzleFlash_8(v_18, valA11);

    if (valA13)
        flagP = valA13[1];

    float v_14;
    Weapon_UpdateRecoil_6(&a2, &v_14, a1, srcS);
    int32_t v_3c = flagP;
    char v_10;
    Game_DataSymbolLoad(&v_10, "%-4d");
    Sys_FreeMemory_18((*(int32_t*)(uintptr_t)(srcS + 0x4e0)), &v_10);
    long double fpu7 = Sys_CheckHeap_21((*(int32_t*)(uintptr_t)(srcS + 0x4e0)));
    long double x87_r7_1 = a2 - fpu7;
    a2 = x87_r7_1;
    (*(int32_t*)(uintptr_t)(*(srcS + 0x4e0) + 4)) = x87_r7_1;
    (*(int32_t*)(uintptr_t)(*(srcS + 0x4e0) + 8)) = v_14;
    Sys_CloseFileStream_18((*(int32_t*)(uintptr_t)(srcS + 0x4e0)));
    a2 = a2 - 8.0f;
    int32_t valA17 = Sys_CloseFileStream_17(srcS + 0x14c);
    float tmpD2 = v_14;
    a2 = a2 - valA17;
    return Sys_ResolveSymbol_14(srcS + 0x14c, a2, tmpD2, 128.0f, 128.0f, 128.0f, 0, 0, 0);
}
