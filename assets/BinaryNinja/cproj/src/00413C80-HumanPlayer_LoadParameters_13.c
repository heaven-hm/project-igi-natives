#include "gi_platform.h"
#include "00413C80-HumanPlayer_LoadParameters_13.h"
int32_t __convention("regparm") HumanPlayer_LoadParameters_13(int32_t a1, int32_t a2, int32_t a3, void* a4)

{
    int32_t result = a3;
    int32_t objC = 0;
    objC = g_5391b1;
    int32_t srcS = 0;
    srcS = (*(int32_t*)(uintptr_t)(a4 + 0x1c));
    result = 0;
    int32_t objC4 = (*(int32_t*)(uintptr_t)(((objC * 0x180 + srcS) << 2) + &g_a96ae0));

    if (!objC4)
        return 0;

    objC4(a4, &result);
    return result;
}
