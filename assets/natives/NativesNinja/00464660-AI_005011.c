#include "00464660-AI_005011.h"
/* 0x00464660 AI_005011 full linked: callers=2 callees=7 */
int32_t sub_464660(int32_t* a1)

{
    int32_t var_18;
    __builtin_memset(&var_18, 0, 0x18);
    a1[0x36] = 1;
    *(a1 + 0xd9) = 1;
    int32_t* eax = sub_4cec10("005_01_1");
    int32_t var_2c = Level_StartMission_4();
    sub_4d9620(a1, 5, eax);
    sub_4c7140(Level_StartMission_4(), a1, &var_18, a1[0x28], 2);
    int32_t result = sub_4d6110(&a1[0x1a], 0, 2, 0);
    a1[0x35] = 0;
    return result;
}
