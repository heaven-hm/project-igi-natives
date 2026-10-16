#include "gi_platform.h"
#include "00419CB0-DialogWindow_LoadParameters.h"
int32_t DialogWindow_LoadParameters(int32_t a1)

{
    int32_t srcS = a1;
    long double x87_r7_1 = Menu_FormatScreen_4((*(int32_t*)(uintptr_t)(srcS + 0x44))) * 0.125.0f;
    long double f0 = 1.0f;
    x87_r7_1 - f0;

    a1 = !(*(&((x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
        | (x87_r7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0x3f800000 : x87_r7_1;

    ((int(*)())(uintptr_t)(*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0)))(srcS);
    return Menu_FormatScreen_6(srcS, a1);
}
