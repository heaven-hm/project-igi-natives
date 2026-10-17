// IGI native provenance: FX_SmokeEmit - 0x00480FE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00480FE0-FX_SmokeEmit.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_SmokeEmit.h"
struct status_msg* FX_SmokeEmit(int32_t context, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, int32_t param_7, uint32_t param_8, uint32_t param_9, int32_t* param_10, int32_t param_11, int32_t param_12, int32_t* param_13, int32_t param_14, int32_t param_15, uint32_t param_16)

{
    float item_c = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
    float item_8 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
    float item_4 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.300000012f;
    return FX_DebrisSpawn(context, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, param_11, param_12,
        param_13, param_14, param_15, &item_c, 0x3fc90fdb, 0x43880000, 0x44aa0000, param_16);
}
