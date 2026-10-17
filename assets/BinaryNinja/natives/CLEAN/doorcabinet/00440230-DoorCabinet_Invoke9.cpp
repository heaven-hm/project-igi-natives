// IGI native provenance: DoorCabinet_Invoke9 - 0x00440230 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00440230-DoorCabinet_Invoke9.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_Invoke9.h"

int32_t DoorCabinet_Invoke9(int32_t* arg1)

{
    void* result_val = *arg1;
    return FX_FireBallUpdate_9(result_val, result_val + 0x47c);
}
