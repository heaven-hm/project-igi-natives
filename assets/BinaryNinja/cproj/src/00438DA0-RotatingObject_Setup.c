#include "gi_platform.h"
#include "00438DA0-RotatingObject_Setup.h"
char* RotatingObject_Setup(void* a1)

{
    DynObj_RegisterSymbol_9((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1);
    int32_t* valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x1a0));

    if (valA1)
        Qtask_UpdateList(valA1);

    void* valA2 = (*(int32_t*)(uintptr_t)(a1 + 0x1a4));

    if (valA2)
        DynObj_CreateMagicObject_4(valA2);

    return Script_CallNativeHandler_6(a1 + 0x1ac);
}
