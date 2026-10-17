// Original IGI.EXE function: GunCABarrel_Cleanup (VA 0x00477B10; static CFG gate PASS, CFG score 0.889).
#include "GunCABarrel_Cleanup.h"
void* GunCABarrel_Cleanup(void* context)

{
    void* source_val = *(*(context + 0x14) + 0x20);
    void* result = SoundSys_InitSoundSys_12();

    if (!*(result + 0x5c))
        return result;

    char data_1 = Weapon_UpdateBarrel_5();
    void* temp_1 = *(source_val + 0x14);
    int32_t data_3 = 0;
    data_3 = *(temp_1 + 0x1c);
    void* item_50;

    if (*(((data_1 * 0x180 + data_3) << 2) + &g_a96ae0))
    {
        uint32_t data_6 = Weapon_UpdateBarrel_5();
        int32_t temp_2 = 0;
        temp_2 = *(temp_1 + 0x1c);
        int32_t data_7 = *(((data_6 * 0x180 + temp_2) << 2) + &g_a96ae0);
        void item_40;
        item_50 = &item_40;
        data_7(temp_1, item_50);
        memcpy(context + 0x20, &item_40, 0x18);
        void item_28;
        memcpy(context + 0x70, &item_28, 0x28);
    }

    uint32_t data_9 = DynObj_LookupHashItem_5();
    int32_t saved_edi_1 = 0;
    item_50 = context;
    return (*((data_9 << 2) + &g_a982e0))(item_50, saved_edi_1);
}
