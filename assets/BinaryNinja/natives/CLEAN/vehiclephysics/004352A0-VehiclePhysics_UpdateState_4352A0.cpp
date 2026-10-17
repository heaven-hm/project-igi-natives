// IGI native provenance: VehiclePhysics_UpdateState_4352A0 - 0x004352A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004352A0-VehiclePhysics_UpdateState_4352A0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_UpdateState_4352A0.h"

void* VehiclePhysics_UpdateState_4352A0(void* arg1)

{
    void* result = *(arg1 + 0x130);
    long double x87_r7_1;

    if (!*(result + 0x82c))
        x87_r7_1 = 0f;
    else
        x87_r7_1 = **(arg1 + 0x138) * 0.0174532924f;

    long double temp1 = *(arg1 + 0x13c);
    x87_r7_1 - temp1;
    result = (x87_r7_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 0x40)
        return result;

    *(arg1 + 0x13c) = *(arg1 + 0x13c) * 0.980000019f + x87_r7_1 * 0.0199999809f;
    return result;
}
