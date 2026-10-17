// IGI native provenance: GunM16A2_Setup - 0x00473620 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00473620-GunM16A2_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GunM16A2_Setup.h"
int32_t GunM16A2_Setup(int32_t context, float param_2)

{
    int32_t* dest_val = param_2;
    int32_t flagP = 0;
    int32_t* item_18 = nullptr;
    int32_t source_val = *dest_val;
    (*(((FX_DebrisSpawn_8() * 0x180 + Weapon_ComputeAccuracy_5()) << 2) + &g_a96ae0))(context, dest_val);
    void* context_3 = *(context + 0x14);
    uint32_t data_6 = Weapon_ReloadClip_8();
    int32_t entity_val = 0;
    entity_val = *(context_3 + 0x1c);
    int32_t data_10 = *(((data_6 * 0x180 + entity_val) << 2) + &g_a96ae0);

    if (data_10)
        data_10(context_3, &item_18);

    int32_t data_11 = Weapon_FireBullet_8("AMMO_ID_M203");
    int32_t* data_13 = Weapon_UpdateMuzzleFlash_8(item_18, data_11);

    if (data_13)
        flagP = data_13[1];

    float item_14;
    Weapon_UpdateRecoil_6(&param_2, &item_14, context, source_val);
    int32_t item_3c = flagP;
    void item_10;
    Game_DataSymbolLoad(&item_10, "%-4d");
    Sys_FreeMemory_18(*(source_val + 0x4e0), &item_10);
    long double fpu7 = Sys_CheckHeap_21(*(source_val + 0x4e0));
    long double fpu_val_7_1 = param_2 - fpu7;
    param_2 = fpu_val_7_1;
    *(*(source_val + 0x4e0) + 4) = fpu_val_7_1;
    *(*(source_val + 0x4e0) + 8) = item_14;
    Sys_CloseFileStream_18(*(source_val + 0x4e0));
    param_2 = param_2 - 8.0f;
    int32_t data_17 = Sys_CloseFileStream_17(source_val + 0x14c);
    float temp_2 = item_14;
    param_2 = param_2 - data_17;
    return Sys_ResolveSymbol_14(source_val + 0x14c, param_2, temp_2, 128.0f, 128.0f, 128.0f, 0, 0, 0);
}
