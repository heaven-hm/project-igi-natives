// IGI native provenance: Terrain_CalculateNormals_8 - 0x005183D0 - CFG score 82.5% (FAIL; structural only); runtime behavior not verified.
// Evidence: 005183D0-Terrain_CalculateNormals_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_CalculateNormals_8.h"
int32_t Terrain_CalculateNormals_8()

{
    CamTask_Process();
    Particle2DDynCubeObjTask_Init();
    CamTask_Init();
    Physics_SimulateRigidBody_6();
    InputPort_Init();
    Sync_Init();
    MenuItemTask_Init();
    MenuItem_Init();
    PushButton_Init();
    Script_FormatString_10();
    SimBoneDynCubeObj_Init();
    Script_ExecuteLevelScript_7();
    CameraBase_Init();
    Script_Enumint32();
    LevelScript_Init();
    SkyTask_Init();
    SoundSys_Definephysicsobjtype();
    PhysicsObj_Init();
    PhysicsMagicObj_Init();
    EditorRigidObj_Init();
    DiscardTerrain_Init();
    DiscardTerrainArea_Init();
    CubeModifier_Init();
    AnimTask_Init();
    TagItem_Init();
    SplineObj_Init();
    Script_FormatString_13();
    EditRigidObj_Init();
    TextureModifier_Init();
    Water_Init();
    EditHazinglayer_Init();
    LODSettings_Init();
    EditRigidObjAttachedToBone_Init();
    CutScene_TaskCreate();
    AnimScaleTask_Init();
    AnimRigidDynCubeObj_Init();
    Graph_Init();
    GraphNode_Init();
    AnimCam_Init();
    AreaActivate_Init();
    Vehicle_Init();
    GlobalLight_Init();
    Dirlight_Init();
    LightmapInfo_Init();
    Lensflare_Init();
    Container_Init();
    Origo_Init();
    NoiseQTask_Init();
    MoveRigidObj_Init();
    SmoothQTask_Init();
    MipMapControl_Init();
    ScreenGrab_Init();
    FlatSky_Init();
    FlatWater_Init();
    SoundManager_Init();
    EditCamera_Init();
    LevelTimer_Init();
    EditorMagicObj_Init();
    AnimSound_Init();
    RainDynCubeObj_Init();
    TerrainLightMap_Init();
    SimpointObj_Init();
    SplinePathNodeQTask_Init();
    SplinePathDynCubeObj_Init();
    SplinePathGuideQTask_Init();
    HeightMap_Init();
    ShadowTask_Init();
    /* tailcall */
    return GFXCapsViewer_Init();
}
