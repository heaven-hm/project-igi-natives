// IGI native provenance: QTask_CloseEvent - 0x004010A0 - CFG score 36.1% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004010A0-QTask_CloseEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_CloseEvent.h"
int32_t QTask_CloseEvent()

{
    Camera_ApplyBandFilter_3(0x54f8e0, 1);
    /* tailcall */
    return QTask_DispatchEvent();
}
