// IGI native provenance: PhysicsTerrain_Invoke25 - 0x004F1CF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F1CF0-PhysicsTerrain_Invoke25.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_Invoke25.h"

int32_t PhysicsTerrain_Invoke25(int32_t arg1)

{
    return DynObj_LinkDynamicCube(Sys_CloseFileStream_25(), PhysicsTerrain_Invoke3, arg1);
}
