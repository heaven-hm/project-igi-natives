// IGI native provenance: DoorCabinet_Invoke8_449610 - 0x00449610 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00449610-DoorCabinet_Invoke8_449610.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_Invoke8_449610.h"

int32_t DoorCabinet_Invoke8_449610(void* arg1, int32_t arg2)

{
    (*(((Script_ParseEnumReal32_8() * 0x180 + FX_TrailUpdate()) << 2) + &g_a96ae0))(arg1, arg2);
    Script_Isexists(arg1 + 0x278, arg1);
    return 0;
}
