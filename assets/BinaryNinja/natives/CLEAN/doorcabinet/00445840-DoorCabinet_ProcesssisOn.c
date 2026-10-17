// IGI native provenance: DoorCabinet_ProcesssisOn - 0x00445840 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00445840-DoorCabinet_ProcesssisOn.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_ProcesssisOn.h"

void* DoorCabinet_ProcesssisOn(void* arg1)

{
    if (*(arg1 + 0x220))
        *(arg1 + 0x1c2) = 1;

    return arg1;
}
