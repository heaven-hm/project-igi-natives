// IGI native provenance: Camera_ApplyWideScreen_8 - 0x004A6612 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A6612-Camera_ApplyWideScreen_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyWideScreen_8.h"
HMODULE Camera_ApplyWideScreen_8(int32_t* context)

{
    *context = 0;
    HMODULE result = GetModuleHandleA(nullptr);

    if (result->unused == 0x5a4d)
    {
        int32_t entity_1 = *(result + 0x3c);

        if (entity_1)
        {
            result += entity_1;
            *context = *(result + 0x1a);
            result = *(result + 0x1b);
            *(context + 1) = result;
        }
    }

    return result;
}
