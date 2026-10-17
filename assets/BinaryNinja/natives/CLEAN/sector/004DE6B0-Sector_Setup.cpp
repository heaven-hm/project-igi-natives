// IGI native provenance: Sector_Setup - 0x004DE6B0 - CFG score 85.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DE6B0-Sector_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sector_Setup.h"
int32_t Sector_Setup(uint32_t context, int32_t* param_2)

{
    DynObj_LookupHashItem_6(param_2[1], context, 0);
    memcpy(context + 0x20, &param_2[2], 0x18);
    memcpy(context + 0x70, &param_2[0xe], 0x28);
    *(context + 0x6c) = DynObj_Missing(*param_2);
    struct status_msg* data_2 = CarGun_Create(nullptr, context);
    *(context + 0xe8) = data_2;
    Car_GunCreate(data_2, context, context);
    memcpy(context + 0xf0, &param_2[8], 0x18);
    memcpy(context + 0x108, &param_2[0x18], 0x28);
    return Sys_FreeMemory_2(context + 0x130, 4, 0x64, 0);
}
