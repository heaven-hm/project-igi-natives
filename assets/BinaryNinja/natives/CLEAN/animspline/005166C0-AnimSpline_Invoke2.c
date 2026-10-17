// IGI native provenance: AnimSpline_Invoke2 - 0x005166C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005166C0-AnimSpline_Invoke2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_Invoke2.h"

int32_t AnimSpline_Invoke2()

{
    Sys_OpenFileStream_2(&g_a7f878);
    int32_t* a7f890_1 = g_a7f890;
    int32_t result = (*(*a7f890_1 + 8))(a7f890_1);
    g_a7f890 = 0;
    return result;
}
