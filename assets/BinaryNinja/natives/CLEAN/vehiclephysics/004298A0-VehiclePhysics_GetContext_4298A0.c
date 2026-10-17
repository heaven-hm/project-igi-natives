// IGI native provenance: VehiclePhysics_GetContext_4298A0 - 0x004298A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004298A0-VehiclePhysics_GetContext_4298A0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_GetContext_4298A0.h"

struct status_msg* VehiclePhysics_GetContext_4298A0(int32_t* arg1)

{
    void* context_val = arg1[8];
    return Menu_VirmodelSNotAvailabl(Script_FormatString(), *arg1, arg1[1], arg1[2], arg1[5],
        *(context_val + 0x660), arg1[6], arg1[7], *(context_val + 0x6e0), context_val);
}
