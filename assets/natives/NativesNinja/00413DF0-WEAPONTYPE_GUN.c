#include "00413DF0-WEAPONTYPE_GUN.h"
/* 0x00413df0 WEAPONTYPE_GUN full linked: callers=1 callees=32 */
void* WEAPONTYPE_GUN()

{
    g_5391ac = QTask_UnableToAllocateEven(0);
    g_5391ad = QTask_UnableToAllocateEven(0);
    g_5391ae = QTask_UnableToAllocateEven(0);
    g_5391af = QTask_UnableToAllocateEven(0);
    g_5391b0 = QTask_UnableToAllocateEven(0);
    g_5391b1 = QTask_UnableToAllocateEven(0);
    g_5391b2 = QTask_UnableToAllocateEven(0);
    Game_DefineOptions("DefineWeaponType", DefineWeaponType, 0, 0xffffffff);
    TaskType_Set("WEAPONTYPE_GUN", 0);
    TaskType_Set("WEAPONTYPE_PISTOL", 1);
    TaskType_Set("WEAPONTYPE_SHOTGUN", 2);
    TaskType_Set("WEAPONTYPE_KNIFE", 3);
    TaskType_Set("WEAPONTYPE_GRENADE", 4);
    TaskType_Set("WEAPONTYPE_BINOCULAR", 5);
    TaskType_Set("WEAPONTYPE_MEDIPACK", 6);
    TaskType_Set("WEAPONTYPE_PROXIMITYMINE", 7);
    TaskType_Set("SIGHTDISPLAYTYPE_NONE", 0);
    TaskType_Set("SIGHTDISPLAYTYPE_CROSSHAIR", 1);
    TaskType_Set("AMMODISPLAYTYPE_NONE", 0);
    TaskType_Set("AMMODISPLAYTYPE_NORMAL", 1);
    TaskType_Set("AMMODISPLAYTYPE_CLIP", 2);
    TaskType_Set("AMMODISPLAYTYPE_BARREL", 3);
    TaskType_Set("AMMODISPLAYTYPE_SHELL", 4);
    TaskType_Set("AMMODISPLAYTYPE_GRENADE", 5);
    sub_4f1cd0(0x56e248);
    sub_4f1db0(0x56e248, "WEAPONTYPE_.*");
    sub_4f1cd0(0x56e238);
    sub_4f1db0(0x56e238, "SIGHTDISPLAYTYPE_.*");
    sub_4f1cd0(0x56e218);
    sub_4f1db0(0x56e218, "AMMODISPLAYTYPE_.*");
    sub_4f1cd0(0x56e228);
    return sub_4f1db0(0x56e228, "WEAPON_ID_.*");
}
