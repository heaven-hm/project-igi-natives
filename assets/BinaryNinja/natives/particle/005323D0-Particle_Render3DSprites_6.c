#include "Particle_Render3DSprites_6.h"
int32_t Particle_Render3DSprites_6()

{
    QTask_Process();
    /* tailcall */
    return Particle_RenderTrails_6();
}
