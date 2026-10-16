#include "gi_platform.h"
#include "0048E7D0-FX_DebrisSpawn_20.h"
int32_t* FX_DebrisSpawn_20(int32_t a1, int32_t* a2)

{
    if (!(*(int32_t*)(uintptr_t)(a2[0xa] + 0x14)))
        AI_AlertAllies_3(a1);
    else
        AI_SelectTarget_3(a1);

    void* valA1 = a2[0xa];
    int32_t objC1 = *(valA1 + 0xc);
    int32_t* valA2;

    if (objC1 != 0xffffffff)
    {
    label_48e80e: ;
        valA2 = AI_MoveToNode_3(a1, objC1, nullptr, 0);

        if (!valA2)
            return valA2;

        void* objC2 = a2[0xa];
        void* v_c_1 = objC2;
        void* valA3 = AI_WriteChannel(a1, 4, *(objC2 + 8));
        (*(int32_t*)(uintptr_t)(a2[0xa] + 0xc)) = 0xffffffff;
        return valA3;
    }

    if (*(valA1 + 0x10) == objC1)
        return AI_CombatTarget_2(a1, a2);

    if (objC1 != objC1)
        goto label_48e80e;

    valA2 = *(valA1 + 0x10);

    if (valA2 == 0xffffffff)
        return valA2;

    valA2 = AI_MoveToNode_3(a1, valA2, nullptr, 0);

    if (!valA2)
        return valA2;

    (*(int32_t*)(uintptr_t)(a2[0xa] + 0x10)) = 0xffffffff;
    return AI_CombatTarget_2(a1, a2);
}
