// IGI native provenance: Camera_UpdateTransform_23 - 0x004ABD42 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ABD42-Camera_UpdateTransform_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateTransform_23.h"
int32_t Camera_UpdateTransform_23(int32_t context, HANDLE param_2)

{
    if (context < g_c32540 && (&g_c32440)[context >> 5][(context & 0x1f) * 2] == 0xffffffff)
    {
        if (g_543e80 == 1)
        {
            if (!context)
                SetStdHandle(STD_INPUT_HANDLE, param_2);
            else if (context == 1)
                SetStdHandle(STD_OUTPUT_HANDLE, param_2);
            else if (context == 2)
                SetStdHandle(STD_ERROR_HANDLE, param_2);
        }

        (&g_c32440)[context >> 5][(context & 0x1f) * 2] = param_2;
        return 0;
    }

    g_936068 = 0;
    g_936064 = 9;
    return 0xffffffff;
}
