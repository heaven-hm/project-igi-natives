// Original IGI.EXE function: Display_CloseDevice_11 (VA 0x00496650; static CFG gate PASS, CFG score 1.000).
#include "Display_CloseDevice_11.h"
int32_t Display_CloseDevice_11(int32_t* a1)

{
    char result = g_6840e9;

    if (!result)
        return result;

    int32_t* valA = a1[4];
    (*(*valA + 8))(valA);

    if (a1[2] & 4)
    {
        int32_t* valA1 = a1[5];
        (*(*valA1 + 8))(valA1);
    }

    int32_t* valA2 = a1[6];

    if (valA2)
    {
        Sys_ReadFileBlock_4(valA2);
        a1[6] = 0;
    }

    Display_SetDisplayMode_11(a1, &g_6840f4);
    return Display_SetGammaRamp_8(a1, &g_6840f8);
}
