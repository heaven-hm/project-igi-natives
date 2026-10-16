#include "gi_platform.h"
#include "00478290-Gun_Cleanup.h"
void* Gun_Cleanup(void* a1)

{
    DynObj_LookupHashItem_6(Level_StartMission_4(), a1, 0);
    (*(int32_t*)(uintptr_t)(a1 + 0xec)) = 0;
    return DynObj_RegisterSymbol_8(Level_StartMission_4(), a1, 0);
}
