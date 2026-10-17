// Original IGI.EXE function: Particle_Render3DSprites_5 (VA 0x00531DD0; static CFG gate FAIL, CFG score 0.833).
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
