#include "00425200-ConditionalSound_Start.h"
/* 0x00425200 ConditionalSound_Start full linked: callers=1 callees=9 */
struct status_msg* ConditionalSound_Start(void* a1)

{
    ConditionalSound_Stop(a1);

    if (*(a1 + 0xa8))
    {
        *(a1 + 0xb8) = sub_497450(a1 + 0x70);
        *(a1 + 0xbc) = sub_497410(a1 + 0x70);
        *(a1 + 0xc0) = 0;
        *(a1 + 0xc4) = 0;
        sub_4974a0(a1 + 0xc8);
        int32_t eax_5 = sub_4e6d60(a1 + 0xb8);
        *(a1 + 0x124) = 1;
        *(a1 + 0xb2) = 1;
        return eax_5;
    }

    struct status_msg* eax_6 = sub_4e6b00(a1, a1 + 0x70);

    if (eax_6)
    {
        *(a1 + 0x120) = QTask_LinkEventHandler_2(eax_6);

        if (*(a1 + 0xb3))
        {
            int32_t eax_9 = sub_4e6ce0(eax_6, 1);
            *(a1 + 0x124) = 1;
            *(a1 + 0xb2) = 1;
            return eax_9;
        }

        eax_6 = sub_4e6c30(eax_6, a1 + 0x90);
        *(a1 + 0x124) = 1;
        *(a1 + 0xb2) = 1;
    }

    return eax_6;
}
