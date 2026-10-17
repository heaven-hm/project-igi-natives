// IGI native provenance: SpriteParticleSystemDynCubeObj_Init - 0x00531190 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00531190-SpriteParticleSystemDynCubeObj_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SpriteParticleSystemDynCubeObj_Init.h"
int32_t SpriteParticleSystemDynCubeObj_Init()

{
    int32_t item_4 = 0;
    int16_t result = TaskType_Register("SpriteParticleSystemDynCubeObj", 0xd8, Particle_EmitParticles_4(), 0);
    g_a84608 = result;
    g_a84610 = 1;
    return result;
}
