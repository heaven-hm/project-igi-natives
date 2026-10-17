// IGI native provenance: DisplayRender_DefaultHandler_498260 - 0x00498260 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00498260-DisplayRender_DefaultHandler_498260.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_DefaultHandler_498260.h"

int32_t DisplayRender_DefaultHandler_498260()

{
    int32_t ecx_1 = (g_bcaaa4 * g_bcaaa0) << 2;
    __builtin_memset(__builtin_memset(g_bcaaa8, 0, ecx_1 & 0xfffffffc), 0, ecx_1 & 3);
    return 0;
}
