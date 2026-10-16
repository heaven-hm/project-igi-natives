#include "Script_CallNativeHandler_14.h"
int32_t* Script_CallNativeHandler_14(void* a1, int32_t* a2)

{
    void* valA1 = Script_ExecuteLevelScript_4(*(a1 + 0x2014c));
    int32_t* result = a2;
    int32_t srcS = *result;
    int32_t v_4 = result[1];
    int32_t v_8 = srcS;
    v_8 = srcS + 0xe8;
    memcpy(a1 + 0x6c, srcS, 0xe8);
    *(a1 + 0x20154) = result[1];

    if (valA1)
    {
        uint32_t valA3 = Script_SpawnNewTask_16();
        int32_t objC2 = 0;
        objC2 = *(valA1 + 0x1c);
        result = *(((valA3 * 0x180 + objC2) << 2) + &g_a96ae0);

        if (result)
            return result(valA1, &v_8);
    }

    return result;
}
