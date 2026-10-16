#include "HumanSoldierRPG_Init_2.h"

void* HumanSoldierRPG_Init_2(void* pThis, void* param)

{
    int32_t ecx = *(pThis + 8);

    if (!(ecx & 4))
    {
        void* edx = *(pThis + 4);
        *(pThis + 0xc) = *(pThis + 0x10);
        *(pThis + 0x10) = 0xb;
        int32_t ecx_2 = *(edx + 0x2c);
        *(pThis + 0x14) = ecx_2;
        return ecx_2(pThis, param);
    }

    if (ecx & 0x10000)
    {
        void* edx_2 = *(pThis + 4);
        *(pThis + 0xc) = *(pThis + 0x10);
        *(pThis + 0x10) = 0xc;
        int32_t ecx_4 = *(edx_2 + 0x30);
        *(pThis + 0x14) = ecx_4;
        return ecx_4(pThis, param);
    }

    if (ecx & 0x20000)
    {
        void* edx_4 = *(pThis + 4);
        *(pThis + 0xc) = *(pThis + 0x10);
        *(pThis + 0x10) = 0xd;
        int32_t ecx_6 = *(edx_4 + 0x34);
        *(pThis + 0x14) = ecx_6;
        return ecx_6(pThis, param);
    }

    if (!(ecx & 0x81fe1) && *(param + 0xd04) != 0xffffffff)
        return pThis;

    int32_t ecx_7 = *(pThis + 0x10);
    *(pThis + 0x10) = 0;
    *(pThis + 0xc) = ecx_7;
    int32_t ecx_9 = **(pThis + 4);
    *(pThis + 0x14) = ecx_9;
    return ecx_9(pThis, param);
}
