// IGI native provenance: Camera_ApplyWideScreen_15 - 0x004A8BE2 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8BE2-Camera_ApplyWideScreen_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyWideScreen_15.h"
long double Camera_ApplyWideScreen_15(void* context , long double param_2 )

{
    *(context - 0x9e) = param_2;
    long double result = *(context - 0x9e);

    if (!(*(context - 0x97) & 0x40))
    {
        *(context - 0x90) = 1;
        return result + g_5443c4;
    }

    *(context - 0x90) = 7;
    return result;
}
