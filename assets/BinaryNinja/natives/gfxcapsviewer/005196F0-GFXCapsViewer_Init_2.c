#include "GFXCapsViewer_Init_2.h"

int32_t* GFXCapsViewer_Init_2(int32_t* pThis @ 0x8)

{
    (*((Display_CloseDevice_5() << 2) + &g_a94e84))(0xa81028);
    *pThis = 0xa81028;
    return pThis;
}
