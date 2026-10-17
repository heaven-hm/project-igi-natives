// IGI native provenance: Camera_UpdateViewCone_26 - 0x004AD0D4 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AD0D4-Camera_UpdateViewCone_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
