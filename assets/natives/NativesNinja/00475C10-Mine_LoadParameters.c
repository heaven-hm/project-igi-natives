#include "00475C10-Mine_LoadParameters.h"
/* 0x00475c10 Mine_LoadParameters full linked: callers=0 callees=9 */
int32_t sub_475c10(void* a1, int32_t a2)

{
    sub_4c1790(Level_LoadLevel_4(), a1);
    sub_4c1790(sub_476030(), a1);
    sub_4c1790(Level_CheckQTaskID_4(), a1);
    (*((sub_481340() << 2) + &g_a96ae0))(a1, a2);
    sub_481360(a1, 1f, 0x40000000, 0, 0x3f800000, 0, 5, 1, "explo_proxy");
    int32_t result = Game_DataSymbolLoad(a1 + 0x170, "136_01_1");
    *(a1 + 0x238) = 0;
    *(a1 + 0x23c) = 0;
    *(a1 + 0x240) = 0x3f400000;
    *(a1 + 0x244) = 0x40400000;
    *(a1 + 0x248) = 0;
    return result;
}
