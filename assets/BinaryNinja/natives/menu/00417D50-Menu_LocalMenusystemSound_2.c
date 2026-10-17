// Original IGI.EXE function: Menu_LocalMenusystemSound_2 (VA 0x00417D50; static CFG gate PASS, CFG score 0.939).
#include "Menu_LocalMenusystemSound_2.h"
int32_t Menu_LocalMenusystemSound_2(void* context)

{
    int32_t i = 0xffffffff;
    void* dest_val = context + 0xd4;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_val = ~i;
    void item_100;
    int32_t source_1;
    int32_t dest_2;
    dest_2 = memcpy(&item_100, dest_val - entity_val, entity_val & 0xfffffffc);
    memcpy(dest_2, source_1, entity_val & 3);
    char* data_1 = Camera_SetFieldOfView_5(&item_100, 0x2f);

    if (data_1)
        *data_1 = 0;

    Menu_LocalMenusystemSound(context);
    int32_t data_2;
    void* entity_4;
    int32_t temp_val;
    data_2 = SoundSys_StopSoundSample_6("LOCAL:menusystem/sound/sounds.res");
    void* item_120 = context + 0xd4;
    *(context + 0x26bf) = 1;
    *(context + 0x1d4) = Resource_Load(data_2, temp_val, entity_4, nullptr);
    void* data_4;
    void* entity_5;
    int32_t temp_1;
    data_4 = Sys_OpenFileStream_16(&item_100, sub_417e20, context);
    char* item_134 = "LOCAL:menusystem/missionsprites.res";
    *(context + 0x1d8) = Resource_Load(data_4, temp_1, entity_5, nullptr);
    Sys_OpenFileStream_16(&item_100, sub_417e20, context);
    Menu_LocalLanguageSS(context, "menusystem.res");
    Menu_LocalLanguageSS(context, "missions.res");
    return 6;
}
