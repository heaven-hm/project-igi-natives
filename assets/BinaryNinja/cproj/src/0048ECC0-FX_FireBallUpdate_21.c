#include "gi_platform.h"
#include "0048ECC0-FX_FireBallUpdate_21.h"
int32_t FX_FireBallUpdate_21(int32_t a1, int32_t* a2)

{
    int32_t* srcS1 = a2[0xa] + 8;
    void* valA2 = Table_GetAt((*(int32_t*)(uintptr_t)(a1 + 0x14)) + 0x4c4, 0);
    int32_t v_24 = srcS1[1];
    int32_t v_28 = *srcS1;
    char* v_2c = "Fire At Node - %d, %d";
    int32_t v_30 = 0xffffffff;
    int32_t v_34 = a1;
    int32_t valA4 = srcS1[1];
    srcS1[1] = valA4 - 1;

    if (valA4 < 0 || !valA2)
        return AI_CombatTarget_2(a1, a2);

    int32_t v_8;
    Script_ParseEnumReal32_13(valA2, &v_8);
    int32_t valA5 = v_8;

    if (!valA5)
    {
        valA5 = srcS1[4];

        if (valA5)
        {
            (*(int32_t*)(uintptr_t)(a1 + 0x3c94)) = 0x3f800000;
            return valA5;
        }

        Script_SpawnNewTask_13(valA2, 1);
        *(srcS1 + 0x11) = 0;
    }

    Script_CallNativeHandler_23(a1 + 0x3e88, Script_ExecuteLevelScript_23((*(int32_t*)(uintptr_t)(a1 + 0x3b6c)), *srcS1));
    char valA10;

    if (!*(srcS1 + 0x11))
    {
        Combat_BeginBurst(a1, 0);
        *(srcS1 + 0x11) = 1;
        valA10 = *(srcS1 + 0x11);
    }

    if (*(srcS1 + 0x11) || valA10)
    {
        int32_t valA11 = srcS1[3];

        if (valA11 >= 0)
        {
            srcS1[3] = valA11 - 1;
            return valA11 - 1;
        }

        valA10 = Combat_RunFire(a1);

        if (valA10)
        {
            int32_t objC2 = srcS1[2];
            *(srcS1 + 0x11) = 0;
            srcS1[3] = objC2;
        }
    }

    return valA10;
}
