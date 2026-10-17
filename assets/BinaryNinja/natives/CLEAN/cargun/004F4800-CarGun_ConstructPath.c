// IGI native provenance: CarGun_ConstructPath - 0x004F4800 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F4800-CarGun_ConstructPath.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CarGun_ConstructPath.h"
int32_t* CarGun_ConstructPath(uint32_t context)

{
    struct status_msg* data_val = CarGun_Create(nullptr, context);
    *(context + 0xe8) = data_val;
    return Car_GunCreate(data_val, context, context);
}
