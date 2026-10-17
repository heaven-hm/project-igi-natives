// Original IGI.EXE function: Weapon_CheckAmmo_5 (VA 0x0047A260; static CFG gate PASS, CFG score 1.000).
#include "Weapon_CheckAmmo_5.h"
int32_t Weapon_CheckAmmo_5(int32_t* context, int32_t param_2)

{
    int32_t* source_val = context;
    int32_t context_val = 0;
    context = nullptr;
    int32_t* dest_val = source_val[0x4b];
    int32_t data_val = g_c28b44;
    int32_t entity_val = g_c28b48;
    void* source_1 = source_val[5];
    uint32_t data_2 = Weapon_ReloadClip_8();
    int32_t data_3 = 0;
    data_3 = *(source_1 + 0x1c);
    int32_t data_4 = *(((data_2 * 0x180 + data_3) << 2) + &g_a96ae0);

    if (data_4)
        data_4(source_1, &context);

    int32_t* data_6 = Weapon_UpdateMuzzleFlash_8(context, *dest_val);

    if (data_6)
        context_val = data_6[1];

    int32_t item_28_3 = context_val;
    void item_10;
    Game_DataSymbolLoad(&item_10, "%-4d");
    Sys_FreeMemory_18(*(param_2 + 0x4e0), &item_10);
    *(*(param_2 + 0x4e0) + 4) = data_val * 0.984375f - 4.0f - Sys_CheckHeap_21(*(param_2 + 0x4e0));
    *(*(param_2 + 0x4e0) + 8) = entity_val * 0.895833313f + 4.0f;
    return Sys_CloseFileStream_18(*(param_2 + 0x4e0));
}
