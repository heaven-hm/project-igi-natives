#include "00409FF0-HumanPlayer_CheckGround_3.h"
/* 0x00409ff0 HumanPlayer_CheckGround_3 full linked: callers=0 callees=5 */
int32_t HumanPlayer_CheckGround_3(void* a1, float a2)

{
    float esi = a2;
    *(esi + 0x33d) = 0;
    a2 = sub_4d6520(esi + 0x68, 0f);
    sub_489e70(esi, *(a1 + 0x10), 0.200000003f);
    int32_t eax_2 = *(a1 + 0xc) - 4;

    if (eax_2 <= 0x13)
    {
        int32_t ecx_1 = 0;
        ecx_1 = lookup_table_40a078[eax_2];

        switch (ecx_1)
        {
            case 0:
            {
                sub_4d65b0(esi + 0x68, 0, sub_4d64e0(esi + 0x68, 0) * a2);
                break;
            }
        }
    }

    int32_t result = HumanPlayer_ApplyRecoil_9(esi, 2);
    *(a1 + 0x14) = sub_40a090;
    return result;
}
