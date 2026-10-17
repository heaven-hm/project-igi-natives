// IGI native provenance: Weapon_UpdateRecoil_6 - 0x0047AAB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047AAB0-Weapon_UpdateRecoil_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_UpdateRecoil_6.h"
int32_t Weapon_UpdateRecoil_6(float* context, float* param_2, int32_t param_3, int32_t param_4)

{
    int32_t source_val = param_3;
    int32_t dest_val = 0;
    int32_t* flagP = *(source_val + 0x128);
    int32_t* context_val = *(source_val + 0x12c);
    param_3 = 0;
    int32_t data_val = g_c28b44;
    int32_t entity_val = g_c28b48;
    void* source_1 = *(source_val + 0x14);
    uint32_t data_2 = Weapon_ReloadClip_8();
    int32_t data_3 = 0;
    data_3 = *(source_1 + 0x1c);
    int32_t data_4 = *(((data_2 * 0x180 + data_3) << 2) + &g_a96ae0);

    if (data_4)
        data_4(source_1, &param_3);

    int32_t* data_6 = Weapon_UpdateMuzzleFlash_8(param_3, *context_val);

    if (data_6)
        dest_val = data_6[1];

    int32_t item_2c_3 = dest_val;
    void item_10;
    Game_DataSymbolLoad(&item_10, "%-4d");
    Sys_FreeMemory_18(*(param_4 + 0x4e0), &item_10);
    void* data_9 = param_4 + 0x14c;

    if (*flagP != 0xc)
        data_9 = param_4 + 0xec;

    *context = data_val * 0.984375f - 4.0f - 8.0f;
    *param_2 = entity_val * 0.895833313f + 4.0f;
    long double fpu_val_7_7 = Sys_CloseFileStream_17(data_9);
    *context = *context - fpu_val_7_7;
    int32_t result = Sys_CheckHeap_21(*(param_4 + 0x4e0));
    param_3 = result;
    *context = *context - param_3;
    return result;
}
