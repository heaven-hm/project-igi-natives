// Original IGI.EXE function: LevelTimer_Init_2 (VA 0x0051BA60; static CFG gate PASS, CFG score 1.000).
#include "LevelTimer_Init_2.h"

int32_t LevelTimer_Init_2(long double pThis , int32_t* param )

{
    float dest_ptr = param[2];
    float* base_ptr = *param;
    Profile_ValueSet(param[1], dest_ptr);
    *base_ptr = pThis;
    base_ptr[1] = Script_GetArg(param[1], dest_ptr + 1);
    int32_t result = Script_GetArg(param[1], dest_ptr + 2);
    base_ptr[2] = result;
    return result;
}
