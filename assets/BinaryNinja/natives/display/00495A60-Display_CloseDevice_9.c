// IGI native provenance: Display_CloseDevice_9 - 0x00495A60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00495A60-Display_CloseDevice_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CloseDevice_9.h"
int32_t Display_CloseDevice_9()

{
    bool flag_0 = !g_6840e9;
    g_5ca1b4 = 0;

    if (!flag_0)
    {
        g_5ca194 = 0;
        g_5ca190 = 0;
        g_5ca1b4 = 1;
    }

    return 0;
}
