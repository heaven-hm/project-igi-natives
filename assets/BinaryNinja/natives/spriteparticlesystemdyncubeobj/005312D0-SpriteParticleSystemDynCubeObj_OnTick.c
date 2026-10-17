// Original IGI.EXE function: SpriteParticleSystemDynCubeObj_OnTick (VA 0x005312D0; static CFG gate PASS, CFG score 1.000).
#include "SpriteParticleSystemDynCubeObj_OnTick.h"
int32_t SpriteParticleSystemDynCubeObj_OnTick(void* context, void* param_2, double* param_3, float param_4)

{
    *(param_2 + 0x74) = param_4;
    return WorldObject_CommitTransform(context, param_2, param_3, param_4);
}
