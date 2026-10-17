// Original IGI.EXE function: Camera_UpdateViewCone_7 (VA 0x004A5F94; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone_7.h"
int32_t* Camera_UpdateViewCone_7(int32_t context)

{
    int32_t entity_val = g_543fa8;
    int32_t* result = &g_543f28;

    if (g_543f28 != context)
    {
        do
        {
            result = &result[3];

            if (result >= &(&g_543f28)[entity_val * 3])
                break;
        } while (*result != context);
    }

    if (result < &(&g_543f28)[entity_val * 3] && *result == context)
        return result;

    return nullptr;
}
