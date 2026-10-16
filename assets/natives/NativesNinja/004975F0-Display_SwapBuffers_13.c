#include "004975F0-Display_SwapBuffers_13.h"
/* 0x004975f0 Display_SwapBuffers_13 full linked: callers=7 callees=2 */
int32_t sub_4975f0(void* a1)

{
    sub_4b0d10(*(a1 + 0x48));
    void* ecx = *(a1 + 0x44);
    *(a1 + 0x48) = 0;
    int32_t result = sub_4b0d10(ecx);
    *(a1 + 0x44) = 0;
    return result;
}
