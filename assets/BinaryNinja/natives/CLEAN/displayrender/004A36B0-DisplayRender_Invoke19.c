// IGI native provenance: DisplayRender_Invoke19 - 0x004A36B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A36B0-DisplayRender_Invoke19.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_Invoke19.h"

int32_t DisplayRender_Invoke19(void* arg1)

{
    int32_t result = *((g_935c00 << 2) + &g_a94e84);

    if (result)
        result = result(*(arg1 + 0xc));

    return result;
}
