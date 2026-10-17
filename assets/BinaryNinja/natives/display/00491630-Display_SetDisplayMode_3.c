// IGI native provenance: Display_SetDisplayMode_3 - 0x00491630 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00491630-Display_SetDisplayMode_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetDisplayMode_3.h"
int32_t* Display_SetDisplayMode_3(int32_t context)

{
    return Display_NoMoreDisplayCallbac(context, &g_bcadec);
}
