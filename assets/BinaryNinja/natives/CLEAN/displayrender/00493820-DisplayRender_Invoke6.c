// IGI native provenance: DisplayRender_Invoke6 - 0x00493820 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00493820-DisplayRender_Invoke6.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_Invoke6.h"

int32_t DisplayRender_Invoke6()

{
    Display_ClearSurfaces_6();
    /* tailcall */
    return Display_CouldnTCreateDynamic();
}
