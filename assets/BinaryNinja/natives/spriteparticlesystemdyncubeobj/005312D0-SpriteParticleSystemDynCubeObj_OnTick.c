#include "SpriteParticleSystemDynCubeObj_OnTick.h"
int32_t SpriteParticleSystemDynCubeObj_OnTick(void* a1, void* a2, double* a3, float a4)

{
    *(a2 + 0x74) = a4;
    return WorldObject_CommitTransform(a1, a2, a3, a4);
}
