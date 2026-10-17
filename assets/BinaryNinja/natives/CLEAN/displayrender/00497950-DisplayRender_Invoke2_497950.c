// IGI native provenance: DisplayRender_Invoke2_497950 - 0x00497950 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00497950-DisplayRender_Invoke2_497950.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_Invoke2_497950.h"

int32_t DisplayRender_Invoke2_497950(int32_t* arg1)

{
    return Sys_CheckHeap_2(*arg1, g_543a68, DisplayRender_ProcessTransContextPrim);
}
