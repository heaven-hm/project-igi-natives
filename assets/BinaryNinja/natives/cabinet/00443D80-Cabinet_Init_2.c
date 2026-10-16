#include "Cabinet_Init_2.h"

void* Cabinet_Init_2(void* pThis)

{
    *(pThis + 0x238) = 1;
    *(pThis + 0x23c) = *(g_bc2360 + 0x68);
    return pThis;
}
