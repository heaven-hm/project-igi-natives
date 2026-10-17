// IGI native provenance: Display_SwapBuffers_17 - 0x00499CE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00499CE0-Display_SwapBuffers_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SwapBuffers_17.h"
uint32_t Display_SwapBuffers_17()

{
    int32_t data_val;
    data_val = g_c311c0;
    return QTask_CloseEvent_2(data_val);
}
