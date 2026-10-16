#include "004A6612-Camera_ApplyWideScreen_8.h"
/* 0x004a6612 Camera_ApplyWideScreen_8 full linked: callers=1 callees=1 */
HMODULE sub_4a6612(int32_t* a1)

{
    *a1 = 0;
    HMODULE result = GetModuleHandleA(nullptr);

    if (result->unused == 0x5a4d)
    {
        int32_t ecx_1 = *(result + 0x3c);

        if (ecx_1)
        {
            result += ecx_1;
            *a1 = *(result + 0x1a);
            result = *(result + 0x1b);
            *(a1 + 1) = result;
        }
    }

    return result;
}
