#include "LevelTimer_Init_2.h"

int32_t LevelTimer_Init_2(long double pThis @ st0, int32_t* param @ 0x8)

{
    float edi = param[2];
    float* ebx = *param;
    Profile_ValueSet(param[1], edi);
    *ebx = pThis;
    ebx[1] = Script_GetArg(param[1], edi + 1);
    int32_t result = Script_GetArg(param[1], edi + 2);
    ebx[2] = result;
    return result;
}
