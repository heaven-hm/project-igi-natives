#include "gi_platform.h"
#include "00488140-FX_FireBallUpdate_10.h"
void* FX_FireBallUpdate_10(void* a1)

{
    void* result = (*(int32_t*)(uintptr_t)(a1 + 0x7c));

    if (result)
        result = FX_FragmentSimulate_10(result);

    return result;
}
