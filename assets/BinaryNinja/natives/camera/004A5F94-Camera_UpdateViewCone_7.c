// IGI native provenance: Camera_UpdateViewCone_7 - 0x004A5F94 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A5F94-Camera_UpdateViewCone_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
