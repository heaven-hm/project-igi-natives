#include "gi_platform.h"
#include "004F4800-CarGun_ConstructPath.h"
int32_t* CarGun_ConstructPath(uint32_t a1)

{
    struct status_msg* valA = CarGun_Create(nullptr, a1);
    (*(int32_t*)(uintptr_t)(a1 + 0xe8)) = valA;
    return Car_GunCreate(valA, a1, a1);
}
