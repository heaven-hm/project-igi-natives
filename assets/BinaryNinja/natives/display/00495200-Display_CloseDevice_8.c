// IGI native provenance: Display_CloseDevice_8 - 0x00495200 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00495200-Display_CloseDevice_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CloseDevice_8.h"
int32_t* Display_CloseDevice_8(int32_t context)

{
    return Display_NoMoreDirect3DCallba(context, &g_5ca120);
}
