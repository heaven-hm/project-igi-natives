// IGI native provenance: Camera_UpdateViewCone_19 - 0x004AA381 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AA381-Camera_UpdateViewCone_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateViewCone_19.h"
int32_t Camera_UpdateViewCone_19(int32_t context) {
    if (context == 0x3a4)
        return 0x411;

    if (context == 0x3a8)
        return 0x804;

    if (context == 0x3b5)
        return 0x412;

    if (context == 0x3b6)
        return 0x404;

    return 0;
}
