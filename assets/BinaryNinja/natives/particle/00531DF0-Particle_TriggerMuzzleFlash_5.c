// Original IGI.EXE function: Particle_TriggerMuzzleFlash_5 (VA 0x00531DF0; static CFG gate FAIL, CFG score 0.667).
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
