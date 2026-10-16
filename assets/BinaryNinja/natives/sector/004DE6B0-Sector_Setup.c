#include "Sector_Setup.h"
int32_t Sector_Setup(uint32_t a1, int32_t* a2)

{
    DynObj_LookupHashItem_6(a2[1], a1, 0);
    memcpy(a1 + 0x20, &a2[2], 0x18);
    memcpy(a1 + 0x70, &a2[0xe], 0x28);
    *(a1 + 0x6c) = DynObj_Missing(*a2);
    struct status_msg* valA2 = CarGun_Create(nullptr, a1);
    *(a1 + 0xe8) = valA2;
    Car_GunCreate(valA2, a1, a1);
    memcpy(a1 + 0xf0, &a2[8], 0x18);
    memcpy(a1 + 0x108, &a2[0x18], 0x28);
    return Sys_FreeMemory_2(a1 + 0x130, 4, 0x64, 0);
}
