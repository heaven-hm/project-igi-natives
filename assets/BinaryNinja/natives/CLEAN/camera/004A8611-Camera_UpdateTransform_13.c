// IGI native provenance: Camera_UpdateTransform_13 - 0x004A8611 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8611-Camera_UpdateTransform_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateTransform_13.h"
int32_t Camera_UpdateTransform_13(int32_t context)

{
    if (context == 1)
        g_936064 = 0x21;
    else if (context > 1 && context <= 3)
        g_936064 = 0x22;

    return context;
}
