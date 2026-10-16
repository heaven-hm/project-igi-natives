#include "Gun_Cleanup.h"
void* Gun_Cleanup(void* a1)

{
    DynObj_LookupHashItem_6(Level_StartMission_4(), a1, 0);
    *(a1 + 0xec) = 0;
    return DynObj_RegisterSymbol_8(Level_StartMission_4(), a1, 0);
}
