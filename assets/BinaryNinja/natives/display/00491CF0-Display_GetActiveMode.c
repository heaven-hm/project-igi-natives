// Original IGI.EXE function: Display_GetActiveMode (VA 0x00491CF0; static CFG gate PASS, CFG score 1.000).
#include "Display_GetActiveMode.h"
int32_t Display_GetActiveMode() __pure

// Sig: void* Display_GetActiveMode()
// Note: RETURNS pointer to the ACTIVE display-mode struct (global 0xC28B40):
// width/height/depth fields live at +0x4/+0x8/+0x10 per Display_SetMode
// comparisons. Takes no args. Read current resolution from here.
{
    return 0xc28b40;
}
