// Original IGI.EXE function: Weapon_ReloadClip_6 (VA 0x0047A540; static CFG gate PASS, CFG score 1.000).
#include "Weapon_ReloadClip_6.h"
int32_t Weapon_ReloadClip_6(int32_t* context, float param_2)

{
    int32_t* source_val = context;
    int32_t flagP = 0;
    int32_t* context_val = source_val[0x4b];
    context = nullptr;
    int32_t data_val = g_c28b44;
    int32_t entity_val = g_c28b48;
    int32_t temp_val = source_val[0x51];
    void* dest_val = source_val[5];
    uint32_t data_2 = Weapon_ReloadClip_8();
    int32_t entity_1 = 0;
    entity_1 = *(dest_val + 0x1c);
    int32_t data_6 = *(((data_2 * 0x180 + entity_1) << 2) + &g_a96ae0);

    if (data_6)
        data_6(dest_val, &context);

    int32_t* data_8 = Weapon_UpdateMuzzleFlash_8(context, *context_val);

    if (data_8)
        flagP = data_8[1];

    int32_t context_1 = source_val[0x67] + (6 - temp_val) * 0xa;

    if (context_1 < 0)
        context_1 = 0;

    int32_t item_60_3 = flagP;
    void item_10;
    Game_DataSymbolLoad(&item_10, "%-4d");
    float source_1 = param_2;
    Sys_FreeMemory_18(*(source_1 + 0x4e0), &item_10);
    long double fpu_val_7_2 = data_val * 0.984375f - 4.0f;
    param_2 = fpu_val_7_2;
    long double fpu_val_7_6 = entity_val * 0.895833313f + 4.0f;
    float item_3c = fpu_val_7_6;
    float item_40_2 = fpu_val_7_2 - 8.0f - Sys_CloseFileStream_17(source_1 + 0x104) - Sys_CheckHeap_21(*(source_1 + 0x4e0));
    float item_34 = Sys_CloseFileStream_17(source_1 + 0x104);
    long double fpu_val_7_13 = Sys_ExecuteBytecode_17(source_1 + 0x104) + item_3c;
    long double fpu_val_6_1 = item_34 + item_40_2;
    Qsprite_Register4Az(source_1 + 0x104, item_40_2, item_3c, item_40_2, fpu_val_7_13, fpu_val_6_1, item_3c,
        fpu_val_6_1, fpu_val_7_13, 128.0f, 128.0f, 128.0f, 0, 0, context_1, 0, 0);
    *(*(source_1 + 0x4e0) + 4) = param_2 - Sys_CheckHeap_21(*(source_1 + 0x4e0));
    *(*(source_1 + 0x4e0) + 8) = fpu_val_7_6;
    return Sys_CloseFileStream_18(*(source_1 + 0x4e0));
}
