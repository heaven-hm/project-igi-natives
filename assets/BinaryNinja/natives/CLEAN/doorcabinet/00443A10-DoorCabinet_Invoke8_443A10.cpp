// IGI native provenance: DoorCabinet_Invoke8_443A10 - 0x00443A10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00443A10-DoorCabinet_Invoke8_443A10.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_Invoke8_443A10.h"

int32_t DoorCabinet_Invoke8_443A10(void* arg1, int32_t arg2)

{
    (*(((Script_ParseEnumReal32_8() * 0x180 + FX_TrailUpdate()) << 2) + &g_a96ae0))(arg1, arg2);
    Script_Isexists(arg1 + 0x250, arg1);
    return 0;
}
