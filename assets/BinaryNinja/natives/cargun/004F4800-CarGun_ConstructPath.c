// Original IGI.EXE function: CarGun_ConstructPath (VA 0x004F4800; static CFG gate PASS, CFG score 1.000).
#include "CarGun_ConstructPath.h"
int32_t* CarGun_ConstructPath(uint32_t a1)

{
    struct status_msg* valA = CarGun_Create(nullptr, a1);
    *(a1 + 0xe8) = valA;
    return Car_GunCreate(valA, a1, a1);
}
