#include "004AD0D4-Camera_UpdateViewCone_26.h"
/* 0x004ad0d4 Camera_UpdateViewCone_26 full linked: callers=2 callees=1 */
BOOL sub_4ad0d4(BOOL a1, wchar16 a2)

{
    BOOL lpMultiByteStr = a1;

    if (!lpMultiByteStr)
        return lpMultiByteStr;

    if (g_9361e4)
    {
        a1 = 0;
        int32_t eax_1 = WideCharToMultiByte(g_9361f4, 0x220, &a2, 1, lpMultiByteStr,
            g_54427c, nullptr, &a1);

        if (eax_1 && !a1)
            return eax_1;
    }
    else
    {
        wchar16 ecx_1 = a2;

        if (ecx_1 <= 0xff)
        {
            *lpMultiByteStr = ecx_1;
            return 1;
        }
    }

    g_936064 = 0x2a;
    return 0xffffffff;
}
