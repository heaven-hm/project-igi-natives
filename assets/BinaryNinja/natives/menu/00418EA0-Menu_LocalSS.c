// Original IGI.EXE function: Menu_LocalSS (VA 0x00418EA0; static CFG gate PASS, CFG score 0.939).
#include "Menu_LocalSS.h"
int32_t* Menu_LocalSS(void* context, int32_t param_2)

{
    int32_t saved_frame = param_2;
    void* item_114 = Config_English_2(*(context + 0x27e4));
    char item_100[0x100];
    Game_DataSymbolLoad(&item_100, "LOCAL:%s/%s");
    int32_t data_2;
    void* entity_val;
    int32_t temp_val;
    data_2 = Sys_CheckHeap_16(&item_100);

    if (data_2)
    {
        char (* saved_ebp_1)[0x100] = &item_100;
        return Resource_Load(&item_100, temp_val, entity_val, nullptr);
    }

    for (char* i = *(context + 0x260); i; i = *(i + 0x84))
    {
        data_2 = Camera_UpdateTransform_6(data_2, temp_val, &item_100, &item_100, i);

        if (!data_2)
            return &i[0x40];
    }

    Qhash_Init(1);
    void* data_5 = Mem_Alloc(0x88, 4);
    int32_t item_120_1 = param_2;
    Game_DataSymbolLoad(data_5 + 0x40, "RM: %s");
    char (* dest_1)[0x100] = &item_100;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool flag_0_1 = 0 != *dest_1;
        dest_1 = &(*dest_1)[1];
        i_1 -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_2 = ~i_1;
    int32_t source_2;
    int32_t dest_4;
    dest_4 = memcpy(data_5, dest_1 - entity_2, entity_2 & 0xfffffffc);
    memcpy(dest_4, source_2, entity_2 & 3);
    Qhash_Reset();
    *(data_5 + 0x84) = *(context + 0x260);
    *(context + 0x260) = data_5;
    return data_5 + 0x40;
}
