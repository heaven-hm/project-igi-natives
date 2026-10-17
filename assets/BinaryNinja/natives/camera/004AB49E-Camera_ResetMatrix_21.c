// Original IGI.EXE function: Camera_ResetMatrix_21 (VA 0x004AB49E; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetMatrix_21.h"
int32_t Camera_ResetMatrix_21(void* context)

{
    int32_t entity_val;
    int32_t item_8 = entity_val;
    void* source_val = *(context + 0x10);
    int32_t i = *(context + 8);
    int32_t result = 0;

    while (i >= 0)
    {
        i <<= 1;
        result += 1;
    }

    int32_t i_2 = 0x3f;
    void* data_2 = result * 0x204 + source_val + 0x144;
    void* item_8_1 = data_2;
    int32_t i_1;

    do
    {
        *(data_2 + 8) = data_2;
        *(data_2 + 4) = data_2;
        data_2 += 8;
        i_1 = i_2;
        i_2 -= 1;
    } while (i_1 != 1);
    void* lpAddress = (result << 0xf) + *(context + 0xc);

    if (!VirtualAlloc(lpAddress, 0x8000, MEM_COMMIT, PAGE_READWRITE))
        return 0xffffffff;

    if (lpAddress <= lpAddress + 0x7000)
    {
        void** data_5 = lpAddress + 0x10;

        do
        {
            data_5[-2] = 0xffffffff;
            data_5[0x3fb] = 0xffffffff;
            data_5[-1] = 0xff0;
            *data_5 = &data_5[0x3ff];
            data_5[1] = &data_5[-0x401];
            data_5[0x3fa] = 0xff0;
            data_5 = &data_5[0x400];
        } while (&data_5[-4] <= lpAddress + 0x7000);
    }

    *(item_8_1 + 0x1fc) = lpAddress + 0xc;
    *(lpAddress + 0x14) = item_8_1 + 0x1f8;
    *(item_8_1 + 0x200) = lpAddress + 0x700c;
    *(lpAddress + 0x7010) = item_8_1 + 0x1f8;
    *(source_val + (result << 2) + 0x44) = 0;
    *(source_val + (result << 2) + 0xc4) = 1;
    char data_8 = *(source_val + 0x43);
    *(source_val + 0x43) = data_8 + 1;

    if (!data_8)
        *(context + 4) |= 1;

    *(context + 8) &= ~(0x80000000 >> (result & 0x1f));
    return result;
}
