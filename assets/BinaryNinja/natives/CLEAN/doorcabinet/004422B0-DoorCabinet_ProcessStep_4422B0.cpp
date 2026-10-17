// IGI native provenance: DoorCabinet_ProcessStep_4422B0 - 0x004422B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004422B0-DoorCabinet_ProcessStep_4422B0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_ProcessStep_4422B0.h"

void* DoorCabinet_ProcessStep_4422B0(void* arg1, void* arg2)

{
    void* result = *(arg1 + 0x25d0);

    if (!*(result + 0x170))
    {
        long double x87_r7_2 = *(arg2 + 4) + *(arg1 + 0x104);
        *(arg1 + 0x104) = x87_r7_2;
        long double temp0_1 = *(arg1 + 0x108);
        x87_r7_2 - temp0_1;
        result = (x87_r7_2 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
            *(arg1 + 0x25cc) = 1;
    }

    return result;
}
