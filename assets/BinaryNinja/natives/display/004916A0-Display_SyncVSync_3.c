// IGI native provenance: Display_SyncVSync_3 - 0x004916A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004916A0-Display_SyncVSync_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SyncVSync_3.h"
int32_t* Display_SyncVSync_3(int32_t context)

{
    return Display_SetDisplayMode_8(context, &g_bcadec);
}
