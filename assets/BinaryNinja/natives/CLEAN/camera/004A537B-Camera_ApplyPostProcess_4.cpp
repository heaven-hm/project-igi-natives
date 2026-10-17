// IGI native provenance: Camera_ApplyPostProcess_4 - 0x004A537B - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A537B-Camera_ApplyPostProcess_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyPostProcess_4.h"
int32_t Camera_ApplyPostProcess_4()

{
    g_544054 = sub_4a722a;
    g_544050 = Camera_ApplyLineFilter_11;
    g_544058 = Camera_ApplyPostProcess_10;
    g_54405c = Camera_ApplyWideScreen_10;
    g_544060 = sub_4a7278;
    g_544064 = Camera_ApplyLineFilter_11;
    return Camera_ApplyLineFilter_11;
}
