#include "gi_platform.h"
#include "0047EAD0-Weapon_EjectShell_9.h"
struct status_msg* Weapon_EjectShell_9(int32_t a1, int32_t a2, int32_t* a3, int32_t a4, int16_t a5, int32_t a6, int32_t a7)

{
    uint32_t tmpD2 = g_5c1160 + 0x18;
    int32_t v_10 = 0x400eb90c;
    int32_t v_24;
    __builtin_strncpy(&v_24, "33KA33KA33KA", 0x14);
    void* valA1 = Level_StartMission_4();
    int32_t v_18;
    struct status_msg* result = Script_FormatString_30(Script_FormatString(), valA1, tmpD2, &v_18, &v_24, a3,
        0x49480000, a2, 0, a4, 0, 1, 0);
    Script_ParseEnumReal32_31(result, 1);
    int32_t v_c = 0;
    int32_t v_8 = 0;
    int32_t v_4 = 0x3f800000;
    float v_38_2 = Sys_AllocateMemory_14(Level_SetMission_5()) * 6.28318548.0f;
    Script_SpawnNewTask_31(result, a1 + 0x28, &v_c, a7,
        (0.5.0f - Sys_AllocateMemory_14(Level_SetMission_5())) * 0.0188495573.0f, v_38_2, 0x3f800000, a5,
        a6);
    return result;
}
