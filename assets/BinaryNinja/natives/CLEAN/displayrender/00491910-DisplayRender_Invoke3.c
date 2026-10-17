// IGI native provenance: DisplayRender_Invoke3 - 0x00491910 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00491910-DisplayRender_Invoke3.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_Invoke3.h"

int32_t DisplayRender_Invoke3(int32_t* arg1, int32_t* arg2)

{
    return Sys_DispatchOpcode_3(*arg1, *arg2, arg2[1]);
}
