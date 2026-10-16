#include "FlatSky_Setup.h"
void* FlatSky_Setup(void* a1)

{
    Light_CalculateAttenuation_9(*(a1 + 0x84));
    return DynObj_RemoveSymbol_7(*(a1 + 0x68), a1, 0xffffffff);
}
