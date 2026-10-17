// IGI native provenance: VehiclePhysics_Invoke3 - 0x0042D9B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042D9B0-VehiclePhysics_Invoke3.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_Invoke3.h"

int32_t VehiclePhysics_Invoke3(void* arg1, int32_t arg2)

{
    void* source_ptr = *(arg1 + 0x130);
    uint32_t eax_1 = Level_LoadLevel_3();
    int32_t data_val = 0;
    data_val = *(source_ptr + 0x1c);
    int32_t result = *(((eax_1 * 0x180 + data_val) << 2) + &g_a96ae0);

    if (!result)
        return result;

    return result(source_ptr, arg2);
}
