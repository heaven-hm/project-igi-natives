#include "gi_platform.h"
#include "00429920-Missile_Action.h"
int32_t* Missile_Action(int32_t* a1 )

{
    void* valA1 = (*(int32_t*)(uintptr_t)(a1[1] + 0x6e4));

    if (valA1)
    {
        Sys_ExecuteBytecode_2(valA1);
        (*(int32_t*)(uintptr_t)(a1[1] + 0x6e4)) = 0;
    }

    int32_t v_10 = g_53bcd8[0];
    int32_t* valA3 = Script_FormatString_31(*a1, "Missile - Model");

    if (!valA3)
        valA3 = Script_EvaluateCondition_31(*a1, "Missile - Model", &v_10);

    void* dstD = &valA3[0x49];
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC3 = ~i;
    int32_t srcS1;
    int32_t dstD2;
    dstD2 = memcpy(&v_10, dstD - objC3, objC3 & 0xfffffffc);
    memcpy(dstD2, srcS1, objC3 & 3);
    (*(int32_t*)(uintptr_t)(a1[1] + 0x6e4)) = Mem_Alloc(0x10, 4);
    int32_t* result = (*(int32_t*)(uintptr_t)(a1[1] + 0x6e4));
    *result = v_10;
    result[1] = g_53bcd8[4][0];
    result[2] = g_53bcd8[8][0];
    int32_t v_4;
    result[3] = v_4;
    return result;
}
