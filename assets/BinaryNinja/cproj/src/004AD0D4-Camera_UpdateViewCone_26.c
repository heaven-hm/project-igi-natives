#include "gi_platform.h"
#include "004AD0D4-Camera_UpdateViewCone_26.h"
BOOL Camera_UpdateViewCone_26(BOOL a1, wchar16 a2)

{
    BOOL lpMultiByteStr = a1;

    if (!lpMultiByteStr)
        return lpMultiByteStr;

    if (g_9361e4)
    {
        a1 = 0;
        int32_t valA1 = WideCharToMultiByte(g_9361f4, 0x220, &a2, 1, lpMultiByteStr,
            g_54427c, nullptr, &a1);

        if (valA1 && !a1)
            return valA1;
    }
    else
    {
        wchar16 objC1 = a2;

        if (objC1 <= 0xff)
        {
            *lpMultiByteStr = objC1;
            return 1;
        }
    }

    g_936064 = 0x2a;
    return 0xffffffff;
}
