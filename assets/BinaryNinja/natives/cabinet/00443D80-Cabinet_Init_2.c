// Original IGI.EXE function: Cabinet_Init_2 (VA 0x00443D80; static CFG gate PASS, CFG score 1.000).
#include "Cabinet_Init_2.h"

void* Cabinet_Init_2(void* pThis)

{
    *(pThis + 0x238) = 1;
    *(pThis + 0x23c) = *(g_bc2360 + 0x68);
    return pThis;
}
