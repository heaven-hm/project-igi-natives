// IGI native provenance: AlarmLight_Trigger - 0x00439770 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00439770-AlarmLight_Trigger.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AlarmLight_Trigger.h"

int32_t AlarmLight_Trigger(void* pThis, int32_t* param)

{
    *param = pThis + 0x20;
    param[1] = pThis + 0x70;
    int32_t result = *(pThis + 0x1a4);
    param[2] = result;
    return result;
}
