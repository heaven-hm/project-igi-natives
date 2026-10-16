#include "0046A9F0-AI_FireWeapon_27.h"
/* 0x0046a9f0 AI_FireWeapon_27 full linked: callers=2 callees=4 */
int32_t* sub_46a9f0(void* a1, void* a2)

{
    void* edi = a1;
    sub_46a0a0(edi);
    int32_t* result = nullptr;
    result = *(a2 + 0x1c);

    if (*((result << 2) + &g_a994e0))
    {
        uint32_t eax_1 = sub_46ab20();
        int32_t edx_1 = 0;
        edx_1 = *(a2 + 0x1c);
        result = *(((eax_1 * 0x180 + edx_1) << 2) + &g_a96ae0);

        if (result)
        {
            uint32_t eax_3 = sub_46ab20();
            int32_t ecx_4 = 0;
            ecx_4 = *(a2 + 0x1c);
            result = (*(((eax_3 * 0x180 + ecx_4) << 2) + &g_a96ae0))(a2, &a1);
            result = a1;

            if (result)
            {
                result = QTask_LinkEventHandler_2(a2);
                *(edi + 0x90) = result;
            }
        }
    }

    return result;
}
