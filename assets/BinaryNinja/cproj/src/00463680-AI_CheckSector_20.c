#include "gi_platform.h"
#include "00463680-AI_CheckSector_20.h"
int32_t AI_CheckSector_20(void* a1)

{
    int32_t* objC = (*(int32_t*)(uintptr_t)(a1 + 0x768));

    if (!objC)
        return 0;

    return *objC;
}
