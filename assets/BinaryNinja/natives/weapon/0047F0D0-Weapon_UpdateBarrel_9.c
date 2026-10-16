#include "Weapon_UpdateBarrel_9.h"
struct status_msg* Weapon_UpdateBarrel_9(void* a1, int32_t a2, int32_t a3, int32_t a4, float a5)

{
    float v_34_1 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.0314159282f;
    float v_38_1 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.0314159282f;
    float v_28[0xa];
    Sys_ReadFileBlock_12(&v_28, Sys_AllocateMemory_14(Level_SetMission_5()) * 0.0314159282f, v_38_1, v_34_1);
    int32_t objC = a3;
    int32_t* v_44 = objC;
    objC = g_5c1156;
    struct status_msg* result = Physics_VirmodelIsNull(*(a1 + 0x80), objC, a2, &v_28, v_44);
    long double x87_r7_7 = a5 * 0.00048828125f;
    int32_t objC1 = *(*(a1 + 0x80) + 0x20);
    result->sprite[0x5c] = x87_r7_7;
    result->head[0x26] = x87_r7_7;
    result->head[0x27] = x87_r7_7;
    result->head[0x28] = x87_r7_7;
    result->sprite[0x4c] = objC1;
    result->sprite[0x4d] = *(&objC1 + 1);
    result->sprite[0x4e] = *(&objC1 + 2);
    result->sprite[0x4f] = *(&objC1 + 3);
    result->sprite[0x54] = 0;
    result->sprite[0x55] = 0;
    result->sprite[0x56] = 0;
    result->sprite[0x57] = 0;
    result->sprite[0x58] = 0;
    result->sprite[0x59] = 0;
    result->sprite[0x5a] = 0;
    result->sprite[0x5b] = 0;
    result->sprite[0x50] = a4;
    result->sprite[0x51] = *(&a4 + 1);
    result->sprite[0x52] = *(&a4 + 2);
    result->sprite[0x53] = *(&a4 + 3);

    if (a4)
    {
        long double x87_r7_8 = a5;
        int32_t v_34_2 = 0;
        Weapon_UpdateRecoil_9(result, x87_r7_8 + x87_r7_8);
    }

    return result;
}
