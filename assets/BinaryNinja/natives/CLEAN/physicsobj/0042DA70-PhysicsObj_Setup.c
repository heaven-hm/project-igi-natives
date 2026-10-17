// IGI native provenance: PhysicsObj_Setup - 0x0042DA70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042DA70-PhysicsObj_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsObj_Setup.h"
void* PhysicsObj_Setup(int32_t* context )

{
    void* result = *(*context + 0x2d4);

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        *(*context + 0x2d4) = 0;
    }

    return result;
}
