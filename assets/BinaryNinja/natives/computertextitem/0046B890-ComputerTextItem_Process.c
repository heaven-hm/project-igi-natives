// Original IGI.EXE function: ComputerTextItem_Process (VA 0x0046B890; static CFG gate PASS, CFG score 1.000).
#include "ComputerTextItem_Process.h"
int32_t ComputerTextItem_Process(void* context)

{
    int32_t dest_val = *(context + 0x7c);
    *(*(context + 0x78) + 0x20) = 0xffffffff;
    Sys_CloseFileStream_18(*(context + 0x78));
    int32_t data_3 = dest_val * 3;

    if (*(context + 0x4e))
    {
        int32_t data_4 = data_3 << 2;
        *(*(context + 0x78) + 0x14) = *(data_4 + 0x53f7d0) * 0.5f + 64.0f;
        *(*(context + 0x78) + 0x18) = *(data_4 + 0x53f7d4) * 0.5f + 64.0f;
        *(*(context + 0x78) + 0x1c) = *(data_4 + 0x53f7d8) * 0.5f + 64.0f;
        return data_4;
    }

    int32_t data_5 = data_3 << 2;
    *(*(context + 0x78) + 0x14) = *(data_5 + 0x53f7d0);
    *(*(context + 0x78) + 0x18) = *(data_5 + 0x53f7d4);
    void* data_6 = *(context + 0x78);
    *(data_6 + 0x1c) = *(data_5 + 0x53f7d8);
    return data_6;
}
