// IGI native provenance: Physics_CheckHullCollision_3 - 0x00504A90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00504A90-Physics_CheckHullCollision_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_CheckHullCollision_3.h"
int32_t Physics_CheckHullCollision_3(int32_t context)

{
    int32_t entity_val = context;
    int32_t data_val = 0;

    while (!(entity_val & 1))
    {
        entity_val s>>= 1;
        data_val += 1;
    }

    int32_t data_2 = data_val * 0xc;
    *(data_2 + &g_a7a640) = 0;
    return Sys_CloseFileStream_23(*(data_2 + 0xa7a644));
}
