#include "Display_08X04X04X02X02X02X02.h"
int32_t Display_08X04X04X02X02X02X02(char* a1, int32_t a2, int16_t a3, int16_t a4 @ 0xe, char a5, char a6 @ 0x11, char a7 @ 0x12, char a8 @ 0x13, char a9, char a10 @ 0x15, char a11 @ 0x16, char a12 @ 0x17)

{
    uint32_t v_4 = a12;
    uint32_t v_8 = a11;
    uint32_t v_c = a10;
    uint32_t v_10 = a9;
    uint32_t v_14 = a8;
    uint32_t v_18 = a7;
    uint32_t v_1c = a6;
    uint32_t v_20 = a5;
    uint32_t v_24 = a4;
    uint32_t v_28 = a3;
    int32_t v_2c = a2;
    return Game_DataSymbolLoad(a1, "{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}");
}
