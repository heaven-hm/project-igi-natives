// Original IGI.EXE function: CarGun_ConstructPath (VA 0x004F4800; static CFG gate PASS, CFG score 1.000).
#include "CarGun_ConstructPath.h"
int32_t* CarGun_ConstructPath(uint32_t context)

{
    struct status_msg* data_val = CarGun_Create(nullptr, context);
    *(context + 0xe8) = data_val;
    return Car_GunCreate(data_val, context, context);
}
