#include "gi_platform.h"
#include "0051EC30-FlatSky_Action.h"
int32_t FlatSky_Action(void* a1)

{
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x44));

    if (result)
    {
        result = Struct_Clear36(a1 + 0x20);
        (*(int32_t*)(uintptr_t)(a1 + 0x44)) = 0;
    }

    return result;
}
