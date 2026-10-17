// IGI native provenance: Display_SyncVSync_8 - 0x00495260 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00495260-Display_SyncVSync_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SyncVSync_8.h"
int32_t* Display_SyncVSync_8(int32_t context)

{
    return Display_SetDisplayMode_8(context, &g_5ca120);
}
