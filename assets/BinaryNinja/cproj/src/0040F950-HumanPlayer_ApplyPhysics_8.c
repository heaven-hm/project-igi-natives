#include "gi_platform.h"
#include "0040F950-HumanPlayer_ApplyPhysics_8.h"
void* HumanPlayer_ApplyPhysics_8(void* a1, int32_t* a2)

{
    if (!(*(int32_t*)(uintptr_t)(a2 + 0x4d3)))
    {
        void* tmpD = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 1;
        int32_t objC1 = *(tmpD + 4);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = objC1;
        return objC1(a1, a2);
    }

    AI_UpdateSensors_22(a2[0x13b], -0.610865235.0f, 0xbeb2b8c3);
    void* valA4 = Table_GetAt(&a2[0x131], 0);
    char v_8;
    Script_ParseEnumReal32_13(valA4, &v_8);
    int32_t v_4;
    int32_t valA5 = v_4;
    bool cond_0 = valA5;
    valA5 = g_56e214;

    if (!cond_0 && !valA5)
    {
        HumanPlayer_UpdateHealth_8(a2, 1);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = HumanPlayer_CheckCollision_7;
        return a1;
    }

    Script_SpawnNewTask_13(valA4, valA5);
    void* valA7 = AI_SelectTarget_22(a2[0x13b], 0.0f, 0, 0x3d6e4bae, 0x3d082b3f);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = HumanPlayer_PlayFootstep_8;
    return valA7;
}
