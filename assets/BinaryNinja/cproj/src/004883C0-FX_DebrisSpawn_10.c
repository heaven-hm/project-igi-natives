#include "gi_platform.h"
#include "004883C0-FX_DebrisSpawn_10.h"
void** FX_DebrisSpawn_10(void* a1, void* a2)

{
    void** result = Mem_Alloc(0x2c, 4);
    result[0xa] = 0;
    result[9] = 0;
    result[8] = Script_EvaluateCondition_4(a2);
    result[7] = (*(int32_t*)(uintptr_t)(a2 + 0x1c));
    result[5] = a1;
    result[1] = 0;
    *result = nullptr;
    result[2] = &result[3];
    result[4] = &result[2];
    result[3] = 0;

    if (a1)
        Camera_SetFieldOfView_33(a1 + 8, result);

    return result;
}
