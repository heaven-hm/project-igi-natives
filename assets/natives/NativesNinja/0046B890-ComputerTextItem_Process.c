#include "0046B890-ComputerTextItem_Process.h"
/* 0x0046b890 ComputerTextItem_Process full linked: callers=0 callees=1 */
int32_t sub_46b890(void* a1)

{
    int32_t edi = *(a1 + 0x7c);
    *(*(a1 + 0x78) + 0x20) = 0xffffffff;
    sub_4b6f50(*(a1 + 0x78));
    int32_t eax_3 = edi * 3;

    if (*(a1 + 0x4e))
    {
        int32_t eax_4 = eax_3 << 2;
        *(*(a1 + 0x78) + 0x14) = *(eax_4 + 0x53f7d0) * 0.5f + 64f;
        *(*(a1 + 0x78) + 0x18) = *(eax_4 + 0x53f7d4) * 0.5f + 64f;
        *(*(a1 + 0x78) + 0x1c) = *(eax_4 + 0x53f7d8) * 0.5f + 64f;
        return eax_4;
    }

    int32_t eax_5 = eax_3 << 2;
    *(*(a1 + 0x78) + 0x14) = *(eax_5 + 0x53f7d0);
    *(*(a1 + 0x78) + 0x18) = *(eax_5 + 0x53f7d4);
    void* eax_6 = *(a1 + 0x78);
    *(eax_6 + 0x1c) = *(eax_5 + 0x53f7d8);
    return eax_6;
}
