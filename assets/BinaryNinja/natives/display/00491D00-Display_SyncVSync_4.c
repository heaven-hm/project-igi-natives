// IGI native provenance: Display_SyncVSync_4 - 0x00491D00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00491D00-Display_SyncVSync_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SyncVSync_4.h"
int32_t Display_SyncVSync_4()

{
    Display_SetDisplayMode_4();
    Display_CreateSurface_3();
    Display_OpenDevice_14();
    return Display_CloseDevice_4(g_bcae00);
}
