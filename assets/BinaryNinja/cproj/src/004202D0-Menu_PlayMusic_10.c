#include "gi_platform.h"
#include "004202D0-Menu_PlayMusic_10.h"
int32_t Menu_PlayMusic_10(int32_t a1, int32_t a2)

{
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x248));

    if (result)
        (*(int32_t*)(uintptr_t)(a1 + 0xa0)) = (a2 + 0.5.0f) / result;

    return result;
}
