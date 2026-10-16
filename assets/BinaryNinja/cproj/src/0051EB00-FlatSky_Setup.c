#include "gi_platform.h"
#include "0051EB00-FlatSky_Setup.h"
void* FlatSky_Setup(void* a1)

{
    Light_CalculateAttenuation_9((*(int32_t*)(uintptr_t)(a1 + 0x84)));
    return DynObj_RemoveSymbol_7((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1, 0xffffffff);
}
