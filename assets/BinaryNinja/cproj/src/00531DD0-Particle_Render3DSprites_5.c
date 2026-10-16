#include "gi_platform.h"
#include "00531DD0-Particle_Render3DSprites_5.h"
int32_t Particle_Render3DSprites_5()

{
    QObj_Init();
    Qtask_Initialize();
    DynCubeObj_Init();
    Render_BindTexture_4();
    /* tailcall */
    return Render_BindTexture_12();
}
