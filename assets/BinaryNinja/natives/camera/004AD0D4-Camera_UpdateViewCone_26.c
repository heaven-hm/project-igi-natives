// Original IGI.EXE function: Camera_UpdateViewCone_26 (VA 0x004AD0D4; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone_26.h"
BOOL Camera_UpdateViewCone_26(BOOL context, wchar16 param_2)

{
    BOOL lpMultiByteStr = context;

    if (!lpMultiByteStr)
        return lpMultiByteStr;

    if (g_9361e4)
    {
        context = 0;
        int32_t data_1 = WideCharToMultiByte(g_9361f4, 0x220, &param_2, 1, lpMultiByteStr,
            g_54427c, nullptr, &context);

        if (data_1 && !context)
            return data_1;
    }
    else
    {
        wchar16 entity_1 = param_2;

        if (entity_1 <= 0xff)
        {
            *lpMultiByteStr = entity_1;
            return 1;
        }
    }

    g_936064 = 0x2a;
    return 0xffffffff;
}
