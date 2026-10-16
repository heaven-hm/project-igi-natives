#include "00491CF0-Display_GetActiveMode.h"
/* 0x00491cf0 Display_GetActiveMode full linked: callers=162 callees=0 */
int32_t Display_GetActiveMode() __pure

// Sig: void* Display_GetActiveMode()
// Note: RETURNS pointer to the ACTIVE display-mode struct (global 0xC28B40):
// width/height/depth fields live at +0x4/+0x8/+0x10 per Display_SetMode
// comparisons. Takes no args. Read current resolution from here.
{
    return 0xc28b40;
}
