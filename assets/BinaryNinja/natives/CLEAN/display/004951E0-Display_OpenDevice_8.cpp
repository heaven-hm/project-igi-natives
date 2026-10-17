// IGI native provenance: Display_OpenDevice_8 - 0x004951E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004951E0-Display_OpenDevice_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_OpenDevice_8.h"
int32_t* Display_OpenDevice_8(int32_t context)

{
    return Display_NoMoreDirect3DCallba(context, &g_5ca11c);
}
