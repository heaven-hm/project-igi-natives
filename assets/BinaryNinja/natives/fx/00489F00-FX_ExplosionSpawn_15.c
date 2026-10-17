// Original IGI.EXE function: FX_ExplosionSpawn_15 (VA 0x00489F00; static CFG gate PASS, CFG score 1.000).
#include "FX_ExplosionSpawn_15.h"
void** Collision_Reset(void* context, float param_2)

{
    return Render_ClipMesh_9(context + 0x68, 1, param_2);
}
