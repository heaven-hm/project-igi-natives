#include "gi_platform.h"
#include "00496650-Display_CloseDevice_11.h"
int32_t Display_CloseDevice_11(int32_t* a1)

{
    char result = g_6840e9;

    if (!result)
        return result;

    int32_t* valA = a1[4];
    ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(*valA + 8))))(valA);

    if (a1[2] & 4)
    {
        int32_t* valA1 = a1[5];
        ((int(*)())(uintptr_t)(*(*valA1 + 8)))(valA1);
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
