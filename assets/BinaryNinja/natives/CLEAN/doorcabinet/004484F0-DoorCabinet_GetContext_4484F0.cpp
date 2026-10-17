// IGI native provenance: DoorCabinet_GetContext_4484F0 - 0x004484F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004484F0-DoorCabinet_GetContext_4484F0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_GetContext_4484F0.h"

void* DoorCabinet_GetContext_4484F0(void* arg1)

{
    *(arg1 + 0x239) = 1;
    *(arg1 + 0x23c) = *(g_bc2360 + 0x68);
    return arg1;
}
