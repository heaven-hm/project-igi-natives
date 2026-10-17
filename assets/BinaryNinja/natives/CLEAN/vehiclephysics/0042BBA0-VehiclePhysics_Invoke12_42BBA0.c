// IGI native provenance: VehiclePhysics_Invoke12_42BBA0 - 0x0042BBA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042BBA0-VehiclePhysics_Invoke12_42BBA0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_Invoke12_42BBA0.h"

int32_t* VehiclePhysics_Invoke12_42BBA0(void* arg1, int32_t arg2)

{
    (*(((DynObj_LinkDynamicCube_12() * 0x180 + Script_ExecuteLevelScript_16()) << 2) + &g_a96ae0))(
        arg1, arg2);
    int32_t* result = *(arg1 + 0x88c);

    if (result)
    {
        result = QTask_FindType(result);
        *(arg1 + 0x88c) = 0;
    }

    return result;
}
