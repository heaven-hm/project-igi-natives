// IGI native provenance: Weapon_FireBullet_6 - 0x0047A360 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047A360-Weapon_FireBullet_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_FireBullet_6.h"
int32_t Weapon_FireBullet_6(void* context, float param_2)

{
    void* dest_val = context;
    int32_t* data_val = *(dest_val + 0x128);
    int32_t* context_val = *(dest_val + 0x12c);
    int32_t* item_24 = nullptr;
    context = nullptr;
    int32_t entity_val = g_c28b44;
    int32_t temp_val = g_c28b48;
    int32_t flagP = *(dest_val + 0x144);
    void* source_val = *(dest_val + 0x14);
    uint32_t data_2 = Weapon_ReloadClip_8();
    int32_t entity_1 = 0;
    entity_1 = *(source_val + 0x1c);
    int32_t data_6 = *(((data_2 * 0x180 + entity_1) << 2) + &g_a96ae0);

    if (data_6)
        data_6(source_val, &item_24);

    int32_t* data_8 = Weapon_UpdateMuzzleFlash_8(item_24, *context_val);

    if (data_8)
        context = data_8[1];

    int32_t f0 = flagP * 0x3c / data_val[0x192];
    data_val[0x192];
    int32_t flagP1 = 0x3c - f0;

    if (0x3c - f0 < 0)
        flagP1 = 0;

    float source_1 = param_2;
    int32_t* context_1;

    if (*data_val != 0xc)
        context_1 = source_1 + 0xec;
    else
    {
        flagP1 = 0;
        context_1 = source_1 + 0xd4;

        if (!flagP)
            context_1 = nullptr;

        if (*(dest_val + 0x144))
            context += 1;
    }

    void* item_38_3 = context;
    void item_10;
    Game_DataSymbolLoad(&item_10, "%-4d");
    Sys_FreeMemory_18(*(source_1 + 0x4e0), &item_10);
    param_2 = entity_val * 0.984375f - 4.0f;
    *(*(source_1 + 0x4e0) + 4) = param_2 - Sys_CheckHeap_21(*(source_1 + 0x4e0));
    long double fpu_val_7_7 = temp_val * 0.895833313f + 4.0f;
    float item_14_1 = fpu_val_7_7;
    *(*(source_1 + 0x4e0) + 8) = fpu_val_7_7;
    int32_t result = Sys_CloseFileStream_18(*(source_1 + 0x4e0));

    if (!context_1)
        return result;

    return Sys_ResolveSymbol_14(context_1, param_2 - 8.0f - Sys_CloseFileStream_17(context_1) - Sys_CheckHeap_21(*(source_1 + 0x4e0)),
        item_14_1, 128.0f, 128.0f, 128.0f, flagP1, 0, 0);
}
