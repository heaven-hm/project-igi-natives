// Original IGI.EXE function: Display_08X04X04X02X02X02X02 (VA 0x00492370; static CFG gate PASS, CFG score 1.000).
#include "Display_08X04X04X02X02X02X02.h"
int32_t Display_08X04X04X02X02X02X02(char* context, int32_t param_2, int16_t param_3, int16_t param_4 , char param_5, char param_6 , char param_7 , char param_8 , char param_9, char param_10 , char param_11 , char param_12 )

{
    uint32_t item_4 = param_12;
    uint32_t item_8 = param_11;
    uint32_t item_c = param_10;
    uint32_t item_10 = param_9;
    uint32_t item_14 = param_8;
    uint32_t item_18 = param_7;
    uint32_t item_1c = param_6;
    uint32_t item_20 = param_5;
    uint32_t item_24 = param_4;
    uint32_t item_28 = param_3;
    int32_t item_2c = param_2;
    return Game_DataSymbolLoad(context, "{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}");
}
