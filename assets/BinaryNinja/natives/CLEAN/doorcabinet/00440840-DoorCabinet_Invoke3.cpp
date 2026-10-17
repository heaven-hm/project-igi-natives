// IGI native provenance: DoorCabinet_Invoke3 - 0x00440840 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00440840-DoorCabinet_Invoke3.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_Invoke3.h"

int32_t* DoorCabinet_Invoke3(void* arg1, int32_t arg2)

{
    (*((Env_UpdateCameraLens_3() << 2) + &g_a96ae0))(arg1, arg2);
    *(arg1 + 0x2a0) = 0;
    *(arg1 + 0x2a1) = 0;
    *(arg1 + 0x2a2) = 0;
    *(arg1 + 0x2a4) = 0xffffd8f0;
    *(arg1 + 0x2a8) = 0;
    Script_ExecuteLevelScript_6(arg1 + 0x2ac);
    return Script_ExecuteLevelScript_6(arg1 + 0x2fc);
}
