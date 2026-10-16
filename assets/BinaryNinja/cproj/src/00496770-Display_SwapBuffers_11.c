#include "gi_platform.h"
#include "00496770-Display_SwapBuffers_11.h"
int32_t Display_SwapBuffers_11(int32_t a1, int32_t a2, int32_t a3, int32_t* a4)

{
    if (!g_6840e9)
        return 0;

    int32_t* __saved_ebp_4 = a4;

    if (!__saved_ebp_4)
    {
        char v_58;
        Display_SetGammaRamp_12(&v_58);
        __saved_ebp_4 = &v_58;
        a4 = &v_58;
    }

    int32_t* __saved_ebp_2 = __saved_ebp_4;
    int32_t result = Display_ClearSurfaces_11(a1, a2, a3);

    if (!result)
        return result;

    Display_SyncVSync_12(result, __saved_ebp_4);
    void* objC1 = *(result + 0xc);
    int16_t valA2 = *(objC1 + 0x14);

    if (valA2 == 2 || !valA2)
    {
        int32_t* valA12 = *(result + 0x10);
        ((int(*)())(uintptr_t)(*(*valA12 + 0x30)))(valA12, 0, 0, 1);
        return result;
    }

    int32_t valA6;
    int32_t tmpD2;
    tmpD2 = HIGHD(*(objC1 + 0x18) * *(objC1 + 0x16) * *(objC1 + 0x1c));
    valA6 = LOWD(*(objC1 + 0x18) * *(objC1 + 0x16) * *(objC1 + 0x1c));
    int32_t* ctxB = *(result + 0x10);
    ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(*ctxB + 0x34))))(ctxB, ((valA6 + (tmpD2 & 7)) >> 3) * a4[0x14]);
    int32_t* valA10 = *(result + 0x10);
    ((int(*)())(uintptr_t)(*(*valA10 + 0x30)))(valA10, 0, 0, a3 >> 4 & 1);
    return result;
}
