// IGI native provenance: Level_LoadObjects_2 - 0x00416010 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00416010-Level_LoadObjects_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Level_LoadObjects_2.h"
uint32_t Level_LoadObjects_2()

{
    void* data_val = Config_GetActivePlayerProfileRecord();
    void item_11c;
    memset(&item_11c, 0, 0x11c);
    int32_t item_104 = Display_CheckCapabilities_7();
    char item_106 = 1;
    int32_t item_110 = 1;
    int32_t item_10c = 0x10;
    int32_t item_118 = *(data_val + 0xc);
    int32_t item_114 = *(data_val + 0x10);
    char item_108 = 1;
    int32_t item_110_1 = 1;
    int32_t item_10c_1 = *(data_val + 0x14);
    int32_t item_104_1 = Display_CheckCapabilities_7();
    char* data_4 = data_val + 0x11f;
    char item_106_1 = 1;

    if (!data_4)
        data_4 = &g_567c74;

    char* dest_val = data_4;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_1_1 = 0 != *dest_val;
        dest_val = &dest_val[1];
        i -= 1;

        if (!flag_1_1)
            break;
    }

    int32_t entity_1 = ~i;
    void item_80;
    int32_t source_1;
    int32_t dest_2;
    dest_2 = memcpy(&item_80, dest_val - entity_1, entity_1 & 0xfffffffc);
    char* data_6 = data_val + 0x1f;
    memcpy(dest_2, source_1, entity_1 & 3);

    if (!data_6)
        data_6 = &g_567c74;

    char* dest_3 = data_6;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool flag_3_1 = 0 != *dest_3;
        dest_3 = &dest_3[1];
        i_1 -= 1;

        if (!flag_3_1)
            break;
    }

    int32_t entity_5 = ~i_1;
    void item_100;
    int32_t source_3;
    int32_t dest_5;
    dest_5 = memcpy(&item_100, dest_3 - entity_5, entity_5 & 0xfffffffc);
    memcpy(dest_5, source_3, entity_5 & 3);
    Display_SetMode(&item_11c);
    return Display_SetBackgroundColourFn(-0x56, -0x7c, -0x7c);
}
