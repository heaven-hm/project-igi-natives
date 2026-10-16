#include "00475D30-Mine_Setup.h"
/* 0x00475d30 Mine_Setup full linked: callers=0 callees=7 */
int32_t sub_475d30(int32_t a1)

{
    sub_4c17c0(Level_LoadLevel_4(), a1);
    sub_4c17c0(sub_476030(), a1);
    sub_4c17c0(Level_CheckQTaskID_4(), a1);
    return (*((sub_481340() << 2) + &g_a976e0))(a1);
}
