#include "00408FE0-HumanPlayer_CheckGround_2.h"
/* 0x00408fe0 HumanPlayer_CheckGround_2 full linked: callers=0 callees=5 */
int32_t HumanPlayer_CheckGround_2(void* a1, float a2)

{
    float edi = a2;
    *(edi + 0x33d) = 0;
    a2 = sub_4d6520(edi + 0x68, 0f);
    int32_t var_14_1;
    float var_10;

    if (*(a1 + 0xc) != 0x1c)
    {
        var_10 = 0.200000003f;
        var_14_1 = *(a1 + 0x10);
    }
    else
    {
        var_10 = 0f;
        var_14_1 = *(a1 + 0x10);
    }

    sub_489e70(edi, var_14_1, var_10);
    int32_t eax_3 = *(a1 + 0xc) - 5;

    if (eax_3 <= 0x12)
    {
        int32_t edx_1 = 0;
        edx_1 = lookup_table_40907c[eax_3];

        switch (edx_1)
        {
            case 0:
            {
                sub_4d65b0(edi + 0x68, 0, sub_4d64e0(edi + 0x68, 0) * a2);
                break;
            }
        }
    }

    int32_t result = HumanPlayer_ApplyRecoil_9(edi, 3);
    *(a1 + 0x14) = HumanPlayer_UpdateStamina_2;
    return result;
}
