// IGI native provenance: DisplayRender_InvokeRestoreDevice_4A4C90 - 0x004A4C90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A4C90-DisplayRender_InvokeRestoreDevice_4A4C90.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_InvokeRestoreDevice_4A4C90.h"

int32_t DisplayRender_InvokeRestoreDevice_4A4C90(void* arg1)

{
    int32_t result = *((g_935bfc << 2) + &g_a94e84);

    if (result)
        result = result(*(arg1 + 0xc));

    return result;
}
