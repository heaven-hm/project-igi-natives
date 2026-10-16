#include "gi_platform.h"
#include "0042A100-Train_LoadParameters.h"
int32_t Train_LoadParameters(void* a1)

{
    Script_EvaluateCondition_16(a1);
    void* valA = (*(int32_t*)(uintptr_t)(a1 + 0x14));

    if ((*(int32_t*)(uintptr_t)(valA + 0x1c)) == g_57bcb8)
        (*(int32_t*)(uintptr_t)(valA + 0x778)) -= 1;

    Script_CallNativeHandler_6(a1 + 0x890);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
    return DynObj_CreateMagicObject_4((*(int32_t*)(uintptr_t)(a1 + 0x884)));
}
