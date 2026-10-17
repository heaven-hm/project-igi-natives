// IGI native provenance: Particle_Render3DSprites_5 - 0x00531DD0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00531DD0-Particle_Render3DSprites_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Particle_Render3DSprites_5.h"
int32_t Particle_Render3DSprites_5()

{
    QObj_Init();
    Qtask_Initialize();
    DynCubeObj_Init();
    Render_BindTexture_4();
    /* tailcall */
    return Render_BindTexture_12();
}
