// IGI native provenance: Camera_ApplyWideScreen_13 - 0x004A86C4 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A86C4-Camera_ApplyWideScreen_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyWideScreen_13.h"
int32_t Camera_ApplyWideScreen_13(int32_t context, int32_t param_2) {
    if (param_2 != 0x7ff00000)
    {
        if (param_2 == 0xfff00000 && !context)
            return 2;
    }
    else if (!context)
        return 1;

    int16_t entity_2 = *(&param_2 + 2) & 0x7ff8;

    if (entity_2 == 0x7ff8)
        return 3;

    if (entity_2 == 0x7ff0 && (param_2 & 0x7ffff || context))
        return 4;

    return 0;
}
