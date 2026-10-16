#include "004099E0-HumanPlayer_ApplyRecoil_2.h"
/* 0x004099e0 HumanPlayer_ApplyRecoil_2 full linked: callers=0 callees=5 */
int32_t HumanPlayer_ApplyRecoil_2(void* a1, float a2)

{
    float esi = a2;
    *(esi + 0x33d) = 0;
    a2 = sub_4d6520(esi + 0x68, 0f);
    sub_489e70(esi, *(a1 + 0x10), 0.200000003f);
    int32_t eax_2 = *(a1 + 0xc) - 1;

    if (eax_2 <= 0x13)
    {
        int32_t ecx_1 = 0;
        ecx_1 = lookup_table_409a68[eax_2];

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
    *(a1 + 0x14) = sub_409a80;
    return result;
}
