#include "gi_platform.h"
#include "004226D0-MenuFrame_Setup.h"
int32_t MenuFrame_Setup(void* a1)

{
    int32_t ctxB = (g_c28b44 >> 1) + (*(int32_t*)(uintptr_t)(a1 + 0x20)) - 0x140;
    void* objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x28));
    int32_t dstD = (g_c28b48 >> 1) + (*(int32_t*)(uintptr_t)(a1 + 0x24)) - 0xf0;
    int32_t tmpD2 = (*(int32_t*)(uintptr_t)(a1 + 0x2c));
    ((int(*)())(uintptr_t)(*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0)))(a1);
    int32_t valA8 = Menu_PlayMusic_11(a1, ctxB, dstD, objC1, 0.0f, 1, 2, 0);
    int32_t dstD1 = dstD + valA8;
    int32_t flagP5 = tmpD2
        - (Menu_PlayMusic_11(a1, ctxB, dstD + tmpD2, objC1, 8.40779079e-45.0f, 5, 4, 1) + valA8);
    Menu_DrawWidget_11(a1, ctxB, dstD1, flagP5, 7, 0);
    return Menu_DrawWidget_11(a1, objC1 + ctxB, dstD1, flagP5, 3, 1);
}
