// IGI native provenance: CameraControlTask_OnEvent - 0x004E7D30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7D30-CameraControlTask_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CameraControlTask_OnEvent.h"
uint32_t CameraControlTask_OnEvent()

{
    int32_t data_val;
    data_val = g_54d974;
    return QTask_CloseEvent_2(data_val);
}
