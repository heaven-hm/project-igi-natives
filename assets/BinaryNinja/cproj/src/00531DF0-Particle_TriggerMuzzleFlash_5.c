#include "gi_platform.h"
#include "00531DF0-Particle_TriggerMuzzleFlash_5.h"
int32_t Particle_TriggerMuzzleFlash_5()

{
    Render_ClipMesh_12();
    Render_ClipMesh_4();
    DynCubeObj_Update();
    Qtask_Shutdown();
    /* tailcall */
    return QObj_Update();
}
