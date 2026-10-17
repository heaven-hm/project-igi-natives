// IGI native provenance: DisplayRender_Invoke4_4918F0 - 0x004918F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004918F0-DisplayRender_Invoke4_4918F0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_Invoke4_4918F0.h"

int32_t DisplayRender_Invoke4_4918F0(PSTR arg1)

{
    if (g_5ca02c)
        Display_OpenDevice_4(0);

    return Display_RestoreDevice_16(arg1);
}
