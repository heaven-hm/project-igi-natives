// IGI native provenance: Display_RestoreDevice - 0x00490370 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00490370-Display_RestoreDevice.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_RestoreDevice.h"
int32_t Timer_Now()

{
    return GetTickCount() - g_tick_base;
}
