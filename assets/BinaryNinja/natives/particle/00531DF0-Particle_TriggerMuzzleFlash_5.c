// IGI native provenance: Particle_TriggerMuzzleFlash_5 - 0x00531DF0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00531DF0-Particle_TriggerMuzzleFlash_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Particle_TriggerMuzzleFlash_5.h"
int32_t Particle_TriggerMuzzleFlash_5()

{
    Render_ClipMesh_12();
    Render_ClipMesh_4();
    DynCubeObj_Update();
    Qtask_Shutdown();
    /* tailcall */
    return QObj_Update();
}
