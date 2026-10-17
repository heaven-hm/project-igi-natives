// IGI native provenance: FX_Font4Fnt - 0x00485FB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00485FB0-FX_Font4Fnt.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_Font4Fnt.h"
void* FX_Font4Fnt(int32_t context, int32_t param_2)

{
    void* data_val = FX_FragmentSimulate_6(context, param_2);

    if (!data_val)
        return 0;

    if (!*(data_val + 0x1c6))
        return Menu_HandleInput_3(*(g_bc2360 + 0x120), "font1.fnt");

    return Menu_HandleInput_3(*(g_bc2360 + 0x120), "font4.fnt");
}
