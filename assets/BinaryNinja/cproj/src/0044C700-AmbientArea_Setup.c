#include "gi_platform.h"
#include "0044C700-AmbientArea_Setup.h"
char* AmbientArea_Setup(void* a1)

{
    int32_t* valA = (*(int32_t*)(uintptr_t)(a1 + 0x1b8));

    if (valA)
        Qtask_UpdateList(valA);

    return Script_CallNativeHandler_6(a1 + 0x1bc);
}
