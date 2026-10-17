// IGI native provenance: AIAction_Patrol_2 - 0x0044CCA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044CCA0-AIAction_Patrol_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIAction_Patrol_2.h"
void* AIAction_Patrol_2()

{
    Game_DefineOptions("AIAction_Patrol", AIAction_Patrol, 0, 3);
    Game_DefineOptions("AIAction_Combat", AIAction_Combat, 0, 1);
    Game_DefineOptions("AIAction_Dead", AIAction_Dead, 0, 1);
    Game_DefineOptions("AIAction_FallFlat", AIAction_FallFlat, 0, 2);
    Game_DefineOptions("AIAction_Activate", AIAction_Activate, 0, 3);
    Game_DefineOptions("AIAction_WalkToNode", AIAction_WalkToNode, 0, 2);
    Game_DefineOptions("AIAction_RunToNode", AIAction_RunToNode, 0, 2);
    Game_DefineOptions("AIAction_FireAtNode", AIAction_FireAtNode, 0, 5);
    Game_DefineOptions("AIAction_FireAtTask", AIAction_FireAtTask, 0, 5);
    Game_DefineOptions("AIAction_PlayAnimation", AIAction_PlayAnimation, 0, 2);
    Game_DefineOptions("AIAction_PlaySound", AIAction_PlaySound, 0, 3);
    Game_DefineOptions("AIAction_MoveToEvent", AIAction_MoveToEvent, 0, 2);
    Game_DefineOptions("AIAction_LookAtEvent", AIAction_LookAtEvent, 0, 2);
    Game_DefineOptions("AIAction_Stunned", AIAction_Stunned, 0, 2);
    Game_DefineOptions("AIAction_KickGrenade", AIAction_KickGrenade, 0, 1);
    Game_DefineOptions("AIAction_RunPanicking", AIAction_RunPanicking, 0, 2);
    Game_DefineOptions("AIAction_Idle", AIAction_Idle, 0, 1);
    Game_DefineOptions("AIAction_SetCombat", AIAction_SetCombat, 0, 1);
    Game_DefineOptions("AIFunction_DefaultHandler", AIFunction_DefaultHandler, 0, 0);
    Game_DefineOptions("AIFunction_RemoveAlarmActions", AIFunction_RemoveAlarmActions, 0, 0);
    Game_DefineOptions("AIFunction_SetViewLength", AIFunction_SetViewLength, 0, 1);
    Game_DefineOptions("AIFunction_SetAlarmViewLength", AIFunction_SetAlarmViewLength, 0, 1);
    Game_DefineOptions("AIFunction_SetViewAlpha", AIFunction_SetViewAlpha, 0, 1);
    Game_DefineOptions("AIFunction_SetViewGamma", AIFunction_SetViewGamma, 0, 1);
    Game_DefineOptions("AIFunction_SetSecondaryViewLength", AIFunction_SetSecondaryViewLength, 0,
        1);
    Game_DefineOptions("AIFunction_SetSecondaryAlarmViewLength",
        AIFunction_SetSecondaryAlarmViewLength, 0, 1);
    Game_DefineOptions("AIFunction_SetSecondaryViewAlpha", AIFunction_SetSecondaryViewAlpha, 0, 1);
    Game_DefineOptions("AIFunction_SetSecondaryViewGamma", AIFunction_SetSecondaryViewGamma, 0, 1);
    Game_DefineOptions("AIFunction_SetEventPriority", AIFunction_SetEventPriority, 0, 1);
    Game_DefineOptions("AIFunction_SetInvulnerability", AIFunction_SetInvulnerability, 0, 1);
    Game_DefineOptions("AIFunction_SetInstantDeath", AIFunction_SetInstantDeath, 0, 1);
    Game_DefineOptions("AIFunction_SetDeathAnimation", AIFunction_SetDeathAnimation, 0, 1);
    Game_DefineOptions("AIFunction_SetAlarmTriggerID", AIFunction_SetAlarmTriggerID, 0, 1);
    Game_DefineOptions("AIFunction_SetAlarmControlID", AIFunction_SetAlarmControlID, 0, 1);
    Game_DefineOptions("AIFunction_SetAlarmAccess", AIFunction_SetAlarmAccess, 0, 1);
    Game_DefineOptions("AIFunction_SetGunnerID", AIFunction_SetGunnerID, 0, 1);
    Game_DefineOptions("AIFunction_SetScriptIntegerValue", AIFunction_SetScriptIntegerValue, 0, 2);
    Game_DefineOptions("AIFunction_SetScriptRealValue", AIFunction_SetScriptRealValue, 0, 2);
    Sys_OpenFileStream_23("AIFunction_GetAlarmTriggerID", AIFunction_GetAlarmTriggerID, 0, 0);
    Sys_OpenFileStream_23("AIFunction_GetAlarmControlID", AIFunction_GetAlarmControlID, 0, 0);
    Sys_OpenFileStream_23("AIFunction_GetAlarmAccess", AIFunction_GetAlarmAccess, 0, 0);
    Sys_OpenFileStream_23("AIFunction_GetGunnerID", AIFunction_GetGunnerID, 0, 0);
    Sys_OpenFileStream_23("AIFunction_GetAlarmControlStatus", AIFunction_GetAlarmControlStatus, 0, 0);
    Sys_OpenFileStream_23("AIFunction_GetGunnerStatus", AIFunction_GetGunnerStatus, 0, 0);
    Sys_OpenFileStream_23("AIFunction_GetScriptIntegerValue", AIFunction_GetScriptIntegerValue, 0, 1);
    Sys_OpenFileStream_23("AIFunction_GetCurrentEventType", AIFunction_GetCurrentEventType, 0, 0);
    Sys_OpenFileStream_23("AIFunction_IsEventBehind", AIFunction_IsEventBehind, 0, 0);
    Sys_ReadFileBlock_23("AIFunction_GetScriptRealValue", AIFunction_GetScriptRealValue, 0, 1);
    Sys_ReadFileBlock_23("AIFunction_GetRandomValue", AIFunction_GetRandomValue, 0, 1);
    Sys_ReadFileBlock_23("AIFunction_GetEventDistance", AIFunction_GetEventDistance, 0, 0);
    Sys_ReadFileBlock_23("AIFunction_GetAlarmTriggerDistance", AIFunction_GetAlarmTriggerDistance, 0, 0);
    Game_DefineOptions("AIFunction_SetAnimationInterval", AIFunction_SetAnimationInterval, 0, 2);
    Game_DefineOptions("AIFunction_AddAnimationEntry", AIFunction_AddAnimationEntry, 0, 2);
    Sys_OpenFileStream_23("AIFunction_GetAnimationToPlay", AIFunction_GetAnimationToPlay, 0, 0);
    return Game_DefineOptions("AIFunction_SendResponse", AIFunction_SendResponse, 0, 0);
}
