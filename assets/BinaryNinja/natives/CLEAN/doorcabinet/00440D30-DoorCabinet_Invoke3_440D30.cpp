// IGI native provenance: DoorCabinet_Invoke3_440D30 - 0x00440D30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00440D30-DoorCabinet_Invoke3_440D30.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_Invoke3_440D30.h"

int32_t* DoorCabinet_Invoke3_440D30(void* arg1, int32_t arg2)

{
    (*((Env_UpdateCameraLens_3() << 2) + &g_a96ae0))(arg1, arg2);
    *(arg1 + 0x2a0) = 0;
    *(arg1 + 0x2a1) = 0;
    return Script_ExecuteLevelScript_6(arg1 + 0x2a4);
}
