// IGI native provenance: DoorCabinet_ProcesssisInUse - 0x00444940 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00444940-DoorCabinet_ProcesssisInUse.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_ProcesssisInUse.h"

void* DoorCabinet_ProcesssisInUse(void* arg1, void* arg2)

{
    *(arg1 + 0x11f) = 1;
    *(arg1 + 0x124) = *(g_bc2360 + 0x68);

    if (!*(arg2 + 0x24))
    {
        *(arg1 + 0x11c) = 1;
        *(arg1 + 0x11d) = 0;
        *(arg1 + 0x130) = 1;
    }

    if (*(arg2 + 0x24) == 1)
    {
        *(arg1 + 0x11d) = 1;
        *(arg1 + 0x11c) = 0;
        *(arg1 + 0x130) = 1;
    }

    return arg1;
}
