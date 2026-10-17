// IGI native provenance: DoorCabinet_Invoke9_445820 - 0x00445820 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00445820-DoorCabinet_Invoke9_445820.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_Invoke9_445820.h"

int32_t DoorCabinet_Invoke9_445820(int32_t* arg1)

{
    void* result_val = *arg1;
    return FX_FireBallUpdate_9(result_val, result_val + 0x44c);
}
