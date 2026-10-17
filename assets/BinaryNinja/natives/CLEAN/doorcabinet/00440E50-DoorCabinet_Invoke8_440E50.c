// IGI native provenance: DoorCabinet_Invoke8_440E50 - 0x00440E50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00440E50-DoorCabinet_Invoke8_440E50.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_Invoke8_440E50.h"

int32_t DoorCabinet_Invoke8_440E50(void* arg1, int32_t arg2)

{
    (*(((Script_ParseEnumReal32_8() * 0x180 + Env_UpdateCameraLens_3()) << 2) + &g_a96ae0))(arg1,
        arg2);
    Script_Isexists(arg1 + 0x2a4, arg1);
    return 0;
}
