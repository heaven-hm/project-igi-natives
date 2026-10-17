// IGI native provenance: Human_Init - 0x0045E450 - CFG score 99.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045E450-Human_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Human_Init.h"
int32_t Human_Init()

{
    QTask_DispatchEvent_3(1);
    int32_t item_d0c = 0;
    int16_t data_1 = TaskType_Register("Human", 0xcf8, Render_DrawRigidMesh_12(), 0);
    g_5bdaf8 = data_1;
    QTask_RegisterEventCallback_3(data_1, 1);
    g_53f316 = QTask_UnableToAllocateEvent(0);
    g_53f317 = QTask_UnableToAllocateEvent(0);
    int32_t* data_4 = Mem_Alloc8(0x80);
    g_5bdc24 = data_4;
    data_4 = g_5bdaf8;
    QTask_RemoveEventCallback(data_4, 0, sub_45eb30);
    QTask_TriggerEvent(g_5bdaf8, 1, sub_45eea0);
    QTask_TriggerEvent(g_5bdaf8, 2, sub_45ef40);
    QTask_RemoveEventCallback(g_5bdaf8, 4, Human_LoadParameters);
    int32_t data_6 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_5bdaf8, data_6, Human_Setup);
    QTask_RemoveEventCallback(g_5bdaf8, 9, Human_Process);
    QTask_RemoveEventCallback(g_5bdaf8, 8, Human_Update);
    int32_t data_8 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5bdaf8, data_8, sub_45f880);
    int32_t data_9 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5bdaf8, data_9, Human_OnEvent);
    int32_t data_10 = Script_ParseEnumInt32_11();
    int32_t item_d10_3 = data_10;
    data_10 = g_5bdaf8;
    QTask_RemoveEventCallback(data_10, item_d10_3, sub_45f900);
    int32_t data_11 = Weapon_ReloadClip_8();
    QTask_RemoveEventCallback(g_5bdaf8, data_11, sub_45f910);
    int32_t data_12 = Level_StartMission_2();
    QTask_RemoveEventCallback(g_5bdaf8, data_12, Human_Action);
    int32_t data_13 = Level_LoadLevel_3();
    int32_t item_d10_6 = data_13;
    data_13 = g_5bdaf8;
    QTask_RemoveEventCallback(data_13, item_d10_6, Human_BaseDamage);
    int32_t data_14 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_5bdaf8, data_14, sub_45f920);
    int32_t data_15 = Script_EvaluateCondition_30();
    QTask_RemoveEventCallback(g_5bdaf8, data_15, sub_45f920);
    int32_t data_16 = Level_InitTextures_3();
    int32_t item_d10_9 = data_16;
    data_16 = g_5bdaf8;
    QTask_RemoveEventCallback(data_16, item_d10_9, Human_Cleanup);
    int32_t data_17 = AI_CheckHearing_24();
    QTask_RemoveEventCallback(g_5bdaf8, data_17, Human_Cleanup_2);
    int32_t data_18 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5bdaf8, data_18, sub_416ab0);
    int32_t data_19 = FX_FragmentSimulate_5();
    int32_t item_d10_12 = data_19;
    data_19 = g_5bdaf8;
    QTask_RemoveEventCallback(data_19, item_d10_12, Human_Cleanup_3);
    int32_t data_20 = AI_CheckHearing();
    QTask_RemoveEventCallback(g_5bdaf8, data_20, sub_45fda0);
    int32_t data_21 = FX_ExplosionSpawn_13();
    QTask_RemoveEventCallback(g_5bdaf8, data_21, sub_45fe30);
    int32_t data_22 = FX_TrailUpdate_12();
    int32_t item_d10_15 = data_22;
    data_22 = g_5bdaf8;
    QTask_RemoveEventCallback(data_22, item_d10_15, sub_42fc50);
    int32_t data_23 = AI_MoveToNode();
    QTask_RemoveEventCallback(g_5bdaf8, data_23, Human_Cleanup_4);
    int32_t data_24 = AI_UpdateSensors_29();
    QTask_RemoveEventCallback(g_5bdaf8, data_24, Weapon_AmmoPickup);
    int32_t data_25 = AI_UpdateOrders_29();
    int32_t item_d10_18 = data_25;
    data_25 = g_5bdaf8;
    QTask_RemoveEventCallback(data_25, item_d10_18, Weapon_GunPickup);
    int32_t data_26 = Weapon_EjectShell_5();
    QTask_RemoveEventCallback(g_5bdaf8, data_26, sub_460070);
    int32_t data_27 = Weapon_FiringStateGet();
    QTask_RemoveEventCallback(g_5bdaf8, data_27, sub_460090);
    int32_t data_28 = Weapon_UpdateRecoil_5();
    int32_t item_d10_21 = data_28;
    data_28 = g_5bdaf8;
    QTask_RemoveEventCallback(data_28, item_d10_21, sub_4600c0);
    int32_t data_29 = Weapon_UpdateMuzzleFlash_5();
    QTask_RemoveEventCallback(g_5bdaf8, data_29, sub_4601a0);
    int32_t data_30 = Weapon_UpdateBarrel_5();
    QTask_RemoveEventCallback(g_5bdaf8, data_30, sub_460210);
    int32_t data_31 = Script_ParseEnumString_29();
    int32_t item_d10_24 = data_31;
    data_31 = g_5bdaf8;
    QTask_RemoveEventCallback(data_31, item_d10_24, AIGraph_LoadParameters);
    int32_t data_32 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(g_5bdaf8, data_32, Human_Cleanup_5);
    int32_t data_33 = FX_DebrisSpawn_8();
    QTask_RemoveEventCallback(g_5bdaf8, data_33, HealthFraction);
    int32_t data_34 = SoundSys_SetFrequency_5();
    int32_t item_d10_27 = data_34;
    data_34 = g_5bdaf8;
    int32_t entity_11 = QTask_RemoveEventCallback(data_34, item_d10_27, sub_4606d0);
    entity_11 = g_53f316;
    QTask_RemoveEventCallback(g_5bdaf8, entity_11, Human_Cleanup_6);
    int32_t data_35 = Weapon_FireBullet_5();
    int32_t item_d10_28 = data_35;
    data_35 = g_5bdaf8;
    QTask_RemoveEventCallback(data_35, item_d10_28, sub_4f64e0);
    QTask_RemoveEventCallback(g_5bdaf8, 0xc, sub_45f920);
    int32_t data_36 = Physics_SimulateRigidBody_8();
    QTask_RemoveEventCallback(g_5bdaf8, data_36, sub_45e3d0);
    int32_t data_37 = Script_FormatString_5();
    int32_t item_d10_30 = data_37;
    data_37 = g_5bdaf8;
    QTask_TriggerEvent(data_37, item_d10_30, Human_Cleanup_7);
    int32_t data_38 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_5bdaf8, data_38, Human_Cleanup_8);
    int32_t data_39 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_5bdaf8, data_39, Human_Cleanup_9);
    int32_t data_40 = DynObj_LinkDynamicCube_12();
    int32_t item_d10_33 = data_40;
    data_40 = g_5bdaf8;
    QTask_RemoveEventCallback(data_40, item_d10_33, Human_Cleanup_10);
    int32_t data_41 = AI_AlertAllies_27();
    QTask_RemoveEventCallback(g_5bdaf8, data_41, sub_4609f0);
    QTask_TriggerEvent(g_5bdaf8, 3, Human_Cleanup_11);
    g_5bdc18 = Script_EvaluateCondition_7(9);
    int32_t data_43 = Script_ParseEnumReal32_4();
    void item_cf8;
    void item_c18;
    Script_UndefinedParameterTy(g_5bdc18, &item_cf8, &item_c18, data_43, 7, 0);
    int32_t data_44 = Script_ParseEnumString_2();
    void item_c00;
    Script_UndefinedParameterTy(g_5bdc18, &item_cf8, &item_c00, data_44, 7, 0);
    int32_t data_45 = Script_EvaluateCondition_3();
    void item_bf8;
    Script_UndefinedParameterTy(g_5bdc18, &item_cf8, &item_bf8, data_45, 7, 0);
    int32_t data_46 = Script_ParseEnumString_3();
    void item_bfc;
    Script_UndefinedParameterTy(g_5bdc18, &item_cf8, &item_bfc, data_46, 7, 0);
    g_5bdb00 = Physics_UnableToRegisterArea("CRITERIA_HUMAN", sub_460a70);
    int32_t dest_val = 0;
    int32_t* context_val = &g_5bdad8;

    for (int32_t* i = &g_5bdb18; i < &g_5bdc18; )
    {
        int32_t item_d0c_1 = dest_val;
        Game_DataSymbolLoad(i, "CRITERIA_HUMAN%d");
        *context_val = Physics_UnableToRegisterArea(i, sub_460a10);
        i = &i[8];
        dest_val += 1;
        context_val = &context_val[1];
    }

    int32_t dest_1 = 0;

    for (char (** i_1)[0x10] = &g_53f348; i_1 < "HUMAN_TEAM_BAD"; )
    {
        TaskType_Set(*i_1, dest_1);
        i_1 = &i_1[1];
        dest_1 += 1;
    }

    memset(&g_5bdc28, 0, 0x14);
    Game_DefineOptions("Human_GetCutSceneDeltaTime", Human_GetCutSceneDeltaTime, 0, 0);
    g_5bdb0c = Level_LoadLevel_5("shadow1.tex");
    g_5bdb08 = Level_LoadLevel_5("hole_blood1.tex");
    g_5bdb10 = Level_LoadLevel_5("hole_blood2.tex");
    g_5bdb14 = Level_LoadLevel_5("hole_blood3.tex");
    g_5bdb04 = Level_LoadLevel_5("hole_blood4.tex");
    g_5bdad4 = Level_LoadObjects_6("blood1.spr");
    char* data_56 = Level_LoadObjects_6("blood2.spr");
    int16_t entity_15 = g_5bdaf8;
    g_5bdad0 = data_56;
    int32_t result = FX_AidetectionQtaskMask(entity_15);
    g_5bdc3c = result;
    return result;
}
