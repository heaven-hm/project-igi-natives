// IGI native provenance: DoorCabinet_InvokeFindType - 0x0044A1A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044A1A0-DoorCabinet_InvokeFindType.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_InvokeFindType.h"

int32_t DoorCabinet_InvokeFindType(void* arg1)

{
    return QTask_FindType(*(arg1 + 0x2b040));
}
