// IGI native provenance: VehiclePhysics_Invoke12 - 0x0042BB60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042BB60-VehiclePhysics_Invoke12.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_Invoke12.h"

int32_t VehiclePhysics_Invoke12(int32_t arg1, int32_t arg2)

{
    return (
        *(((DynObj_UpdateDynTree_12() * 0x180 + Script_ExecuteLevelScript_16()) << 2) + &g_a96ae0))(
        arg1, arg2);
}
