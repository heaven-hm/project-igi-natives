#include "00477D10-Weapon_EjectMagazine_5.h"
/* 0x00477d10 Weapon_EjectMagazine_5 full linked: callers=2 callees=12 */
struct status_msg* sub_477d10(float a1, float a2, int32_t* a3, int32_t a4, char* a5)

{
    int32_t kind;
    kind = g_5be3c4;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    sub_4c48d0(result, sub_4cec10(a5));
    memcpy(&result->head[8], a2, 0x18);
    int32_t edx_1 = *a3;
    result->sprite[0x68] = edx_1;
    result->sprite[0x69] = *(&edx_1 + 1);
    result->sprite[0x6a] = *(&edx_1 + 2);
    result->sprite[0x6b] = *(&edx_1 + 3);
    int32_t edx_2 = a3[1];
    result->sprite[0x6c] = edx_2;
    result->sprite[0x6d] = *(&edx_2 + 1);
    result->sprite[0x6e] = *(&edx_2 + 2);
    result->sprite[0x6f] = *(&edx_2 + 3);
    int32_t ecx_2 = a3[2];
    result->sprite[0x70] = ecx_2;
    result->sprite[0x71] = *(&ecx_2 + 1);
    result->sprite[0x72] = *(&ecx_2 + 2);
    result->sprite[0x73] = *(&ecx_2 + 3);
    memcpy(&result->head[0x1c], a4, 0x28);
    result->sprite[0x3c] = 0x13;
    result->sprite[0x3d] = 0;
    result->sprite[0x3e] = 0;
    result->sprite[0x3f] = 0;
    int32_t var_4 = 0;
    a2 = sub_4b47c0(Level_SetMission_5(), 2) * 0.0174532924f;
    int32_t var_4_1 = 0;
    a5 = sub_4b47c0(Level_SetMission_5(), 5) * 0.0174532924f;
    int32_t var_4_2 = 0;
    sub_4b38e0(&result->sprite[0x40], a2, a5,
        sub_4b47c0(Level_SetMission_5(), 5) * 0.0174532924f);
    return result;
}
