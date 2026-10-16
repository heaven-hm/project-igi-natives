#include "ComputerTextItem_Process.h"
int32_t ComputerTextItem_Process(void* a1)

{
    int32_t dstD = *(a1 + 0x7c);
    *(*(a1 + 0x78) + 0x20) = 0xffffffff;
    Sys_CloseFileStream_18(*(a1 + 0x78));
    int32_t valA3 = dstD * 3;

    if (*(a1 + 0x4e))
    {
        int32_t valA4 = valA3 << 2;
        *(*(a1 + 0x78) + 0x14) = *(valA4 + 0x53f7d0) * 0.5f + 64f;
        *(*(a1 + 0x78) + 0x18) = *(valA4 + 0x53f7d4) * 0.5f + 64f;
        *(*(a1 + 0x78) + 0x1c) = *(valA4 + 0x53f7d8) * 0.5f + 64f;
        return valA4;
    }

    int32_t valA5 = valA3 << 2;
    *(*(a1 + 0x78) + 0x14) = *(valA5 + 0x53f7d0);
    *(*(a1 + 0x78) + 0x18) = *(valA5 + 0x53f7d4);
    void* valA6 = *(a1 + 0x78);
    *(valA6 + 0x1c) = *(valA5 + 0x53f7d8);
    return valA6;
}
