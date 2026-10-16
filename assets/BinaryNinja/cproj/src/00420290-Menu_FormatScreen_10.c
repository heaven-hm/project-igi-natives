#include "gi_platform.h"
#include "00420290-Menu_FormatScreen_10.h"
int32_t Menu_FormatScreen_10(int32_t a1)

{
    int32_t valA = (*(int32_t*)(uintptr_t)(a1 + 0x248));

    if (!valA)
        return 0;

    return (valA - 1) * (*(int32_t*)(uintptr_t)(a1 + 0xa0)) + 0.5;
}
