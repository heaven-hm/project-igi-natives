#include "gi_platform.h"
#include "00477D10-Weapon_EjectMagazine_5.h"
struct status_msg* Weapon_EjectMagazine_5(float a1, float a2, int32_t* a3, int32_t a4, char* a5)

{
    int32_t kind;
    kind = g_5be3c4;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    DynObj_CreateMagicObject_5(result, DynObj_Missing(a5));
    memcpy(&result->head[8], a2, 0x18);
    int32_t tmpD1 = *a3;
    result->sprite[0x68] = tmpD1;
    result->sprite[0x69] = *(&tmpD1 + 1);
    result->sprite[0x6a] = *(&tmpD1 + 2);
    result->sprite[0x6b] = *(&tmpD1 + 3);
    int32_t tmpD2 = a3[1];
    result->sprite[0x6c] = tmpD2;
    result->sprite[0x6d] = *(&tmpD2 + 1);
    result->sprite[0x6e] = *(&tmpD2 + 2);
    result->sprite[0x6f] = *(&tmpD2 + 3);
    int32_t objC2 = a3[2];
    result->sprite[0x70] = objC2;
    result->sprite[0x71] = *(&objC2 + 1);
    result->sprite[0x72] = *(&objC2 + 2);
    result->sprite[0x73] = *(&objC2 + 3);
    memcpy(&result->head[0x1c], a4, 0x28);
    result->sprite[0x3c] = 0x13;
    result->sprite[0x3d] = 0;
    result->sprite[0x3e] = 0;
    result->sprite[0x3f] = 0;
    int32_t v_4 = 0;
    a2 = Sys_FreeMemory_14(Level_SetMission_5(), 2) * 0.0174532924.0f;
    int32_t v_4_1 = 0;
    a5 = Sys_FreeMemory_14(Level_SetMission_5(), 5) * 0.0174532924.0f;
    int32_t v_4_2 = 0;
    Sys_ReadFileBlock_12(&result->sprite[0x40], a2, a5,
        Sys_FreeMemory_14(Level_SetMission_5(), 5) * 0.0174532924.0f);
    return result;
}
