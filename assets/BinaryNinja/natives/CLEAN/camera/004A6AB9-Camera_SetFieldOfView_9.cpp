// IGI native provenance: Camera_SetFieldOfView_9 - 0x004A6AB9 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A6AB9-Camera_SetFieldOfView_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SetFieldOfView_9.h"
int32_t Camera_SetFieldOfView_9(int32_t context)

{
    int32_t source_3;

    if (context < g_c32540)
        source_3 = (context & 0x1f) << 3;

    if (context >= g_c32540 || !(*((&g_c32440)[context >> 5] + source_3 + 4) & 1))
    {
        g_936068 = 0;
        g_936064 = 9;
    }
    else
    {
        enum WIN32_ERROR flagP2;

        if (Camera_ApplyLineFilter_23(context) == 0xffffffff)
            flagP2 = NO_ERROR;
        else if (context == 1 || context == 2)
        {
            int32_t data_5 = Camera_ApplyLineFilter_23(2);

            if (Camera_ApplyLineFilter_23(1) != data_5)
                goto label_4a6b1e;

            flagP2 = NO_ERROR;
        }
        else
        {
        label_4a6b1e:

            if (CloseHandle(Camera_ApplyLineFilter_23(context)))
                flagP2 = NO_ERROR;
            else
                flagP2 = GetLastError();
        }

        Camera_SetFieldOfView_23(context);
        *((&g_c32440)[context >> 5] + source_3 + 4) = 0;

        if (!flagP2)
            return 0;

        Camera_UpdateViewCone_22(flagP2);
    }

    return 0xffffffff;
}
