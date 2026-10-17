// IGI native provenance: Sys_ExecuteBytecode_2 - 0x004B0D10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0D10-Sys_ExecuteBytecode_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ExecuteBytecode_2.h"
int32_t Sys_ExecuteBytecode_2(void* context)

{
    int32_t* data_val = context - 4;
    data_val &= 0xfc;
    g_942300 -= 1;
    int32_t* source_val = *data_val;
    int32_t* item_c = source_val;
    return Camera_UpdateTransform_9(Camera_ApplyHandiCam_33(source_val));
}
