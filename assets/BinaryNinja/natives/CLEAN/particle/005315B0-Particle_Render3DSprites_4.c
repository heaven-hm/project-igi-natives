// IGI native provenance: Particle_Render3DSprites_4 - 0x005315B0 - CFG score 57.1% (FAIL; structural only); runtime behavior not verified.
// Evidence: 005315B0-Particle_Render3DSprites_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Particle_Render3DSprites_4.h"
int32_t Particle_Render3DSprites_4()

{
    Camera_UpdateTransform();
    Display_SwapBuffers_17();
    MagicObjContainer_Update();
    Render_TransformVertices_15();
    Particle_RenderTrails_4();
    Render_DrawRigidMesh_2();
    SoundSys_SetMasterVolume();
    SoundSys_InitSoundSys_2();
    Display_SetGammaRamp_18();
    j_Render_ClipMesh_11();
    MagicObj_Shutdown();
    j_DynObj_FindSymbol_5();
    Sprite3D_Update();
    Terrain_ConnectGraphNode_8();
    PointlightDynCubeObj_Update();
    DynObj_RemoveSymbol_13();
    /* tailcall */
    return Particle_ResetEmitters_4();
}
