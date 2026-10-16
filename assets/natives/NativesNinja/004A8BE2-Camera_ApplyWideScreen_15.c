#include "004A8BE2-Camera_ApplyWideScreen_15.h"
/* 0x004a8be2 Camera_ApplyWideScreen_15 full linked: callers=0 callees=0 */
long double sub_4a8be2(void* a1 @ ebp, int80_t a2 @ st0)

{
    *(a1 - 0x9e) = a2;
    long double result = *(a1 - 0x9e);

    if (!(*(a1 - 0x97) & 0x40))
    {
        *(a1 - 0x90) = 1;
        return result + g_5443c4;
    }

    *(a1 - 0x90) = 7;
    return result;
}
