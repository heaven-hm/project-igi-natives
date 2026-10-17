// IGI native provenance: SpriteParticleSystemDynCubeObj_OnTick - 0x005312D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005312D0-SpriteParticleSystemDynCubeObj_OnTick.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SpriteParticleSystemDynCubeObj_OnTick.h"
int32_t SpriteParticleSystemDynCubeObj_OnTick(void* context, void* param_2, double* param_3, float param_4)

{
    *(param_2 + 0x74) = param_4;
    return WorldObject_CommitTransform(context, param_2, param_3, param_4);
}
