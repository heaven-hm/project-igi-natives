// IGI native provenance: DoorCabinet_Invoke9_446CE0 - 0x00446CE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00446CE0-DoorCabinet_Invoke9_446CE0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_Invoke9_446CE0.h"

int32_t DoorCabinet_Invoke9_446CE0(void* arg1, int32_t* arg2)

{
    void* result_val = *arg2;
    int32_t ecx_1 = result_val + 0x41c;

    if (!*(arg1 + 0x198))
        ecx_1 = result_val + 0x464;

    return FX_FireBallUpdate_9(result_val, ecx_1);
}
