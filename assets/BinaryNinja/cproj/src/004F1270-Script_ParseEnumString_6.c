#include "gi_platform.h"
#include "004F1270-Script_ParseEnumString_6.h"
int32_t Script_ParseEnumString_6(char* a1, void* a2)

{
    uint32_t valA1 = Script_EvaluateCondition_5();
    int32_t objC = 0;
    objC = (*(int32_t*)(uintptr_t)(a2 + 0x1c));

    if (!*(((valA1 * 0x180 + objC) << 2) + &g_a96ae0))
    {
        int32_t __saved_edi_2 = Script_EvaluateCondition_4(a2);
        int32_t __saved_edi_1 = __saved_edi_2;
        __saved_edi_2 = (*(int32_t*)(uintptr_t)(a2 + 0x1c));
        int32_t v_4c_2 = QTask_RegisterEventCallback_2(__saved_edi_2);
        return Game_DataSymbolLoad(a1, "%s_%d");
    }

    uint32_t valA6 = Script_EvaluateCondition_5();
    int32_t valA7 = 0;
    valA7 = (*(int32_t*)(uintptr_t)(a2 + 0x1c));
    char v_40;
    ((int(*)())(uintptr_t)(*(((valA6 * 0x180 + valA7) << 2) + &g_a96ae0)))(a2, &v_40);
    void* dstD = &v_40;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC2 = ~i;
    int32_t srcS2;
    int32_t dstD3;
    dstD3 = memcpy(a1, dstD - objC2, objC2 & 0xfffffffc);
    memcpy(dstD3, srcS2, objC2 & 3);
    return 0;
}
