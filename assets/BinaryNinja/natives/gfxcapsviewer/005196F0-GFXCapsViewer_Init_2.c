// Original IGI.EXE function: GFXCapsViewer_Init_2 (VA 0x005196F0; static CFG gate PASS, CFG score 1.000).
#include "GFXCapsViewer_Init_2.h"

int32_t* GFXCapsViewer_Init_2(int32_t* pThis )

{
    (*((Display_CloseDevice_5() << 2) + &g_a94e84))(0xa81028);
    *pThis = 0xa81028;
    return pThis;
}
