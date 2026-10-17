// IGI native provenance: Particle_Render3DSprites_6 - 0x005323D0 - CFG score 48.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 005323D0-Particle_Render3DSprites_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Particle_Render3DSprites_6.h"
int32_t Particle_Render3DSprites_6()

{
    QTask_Process();
    /* tailcall */
    return Particle_RenderTrails_6();
}
