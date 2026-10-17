// IGI native provenance: Display_CreateSurface_7 - 0x00495170 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00495170-Display_CreateSurface_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CreateSurface_7.h"
int32_t* Display_CreateSurface_7(int32_t context)

{
    return Display_NoMoreDirect3DCallba(context, &g_5ca118);
}
