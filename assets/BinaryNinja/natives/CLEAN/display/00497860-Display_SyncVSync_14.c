// IGI native provenance: Display_SyncVSync_14 - 0x00497860 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00497860-Display_SyncVSync_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SyncVSync_14.h"
int32_t Display_SyncVSync_14(void* context)

{
    return (*((*(context + 4) << 2) + &g_a94e84))(context);
}
