// Original IGI.EXE function: Particle_Render3DSprites_6 (VA 0x005323D0; static CFG gate FAIL, CFG score 0.483).
#include "Particle_Render3DSprites_6.h"
int32_t Particle_Render3DSprites_6()

{
    QTask_Process();
    /* tailcall */
    return Particle_RenderTrails_6();
}
