#include "gi_platform.h"
#include "00531540-Particle_UpdateParticlePhysics_4.h"
int32_t Particle_UpdateParticlePhysics_4()

{
    Particle_FadeParticles_4();
    DynObj_Initmodels();
    PointlightDynCubeObj_Init();
    Light_UpdateGlobalLight_10();
    Terrain_RenderWaterSurface_8();
    Sprite3D_Init();
    Camera_ApplyLineFilter();
    MagicObj_Initialize();
    Terrain_BuildMipMaps();
    PolyListDynCubeObj_Init();
    SplineObjSegment_Init();
    Shadow_Init();
    Render_Genericuvfromrenderm();
    BoneMagicObj_Init();
    Sector_Init();
    MagicObjContainer_Init();
    Rain_Init();
    Light_RenderLensflare_10();
    /* tailcall */
    return Display_CloseDevice_19();
}
