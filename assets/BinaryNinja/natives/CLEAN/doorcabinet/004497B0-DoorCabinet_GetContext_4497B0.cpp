// IGI native provenance: DoorCabinet_GetContext_4497B0 - 0x004497B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004497B0-DoorCabinet_GetContext_4497B0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_GetContext_4497B0.h"

int32_t* DoorCabinet_GetContext_4497B0(int32_t arg1, int32_t* arg2)

{
    *arg2 = arg1 + 0x20;
    arg2[1] = arg1 + 0x70;
    arg2[2] = 0;
    return arg2;
}
