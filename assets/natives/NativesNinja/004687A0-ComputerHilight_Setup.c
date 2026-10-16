#include "004687A0-ComputerHilight_Setup.h"
/* 0x004687a0 ComputerHilight_Setup full linked: callers=0 callees=3 */
int32_t sub_4687a0(int80_t a1 @ st0, int32_t* a2, void* a3)

{
    int32_t* edi = a2;
    sub_4f16e0(&edi[0xe], edi);
    int32_t result = a1;

    if (result)
    {
        int32_t ebp_1 = 0;
        *(a3 + 0x18) = edi[0xa4];
        *(a3 + 0x1c) = edi[0xad];
        *(a3 + 0x20) = edi[0xb6];
        *(a3 + 0x24) = &edi[0xb7];
        *(a3 + 0x28) = &edi[0xf7];
        result = edi[0x63];

        if (result > 0)
        {
            a2 = &edi[0x64];

            do
            {
                void* eax_3 = sub_4f1030(*a2);

                if (eax_3)
                {
                    uint32_t eax_5 = sub_467d90();
                    int32_t ecx_4 = 0;
                    ecx_4 = *(eax_3 + 0x1c);
                    int32_t eax_9 = *(((eax_5 * 0x180 + ecx_4) << 2) + &g_a96ae0);

                    if (eax_9)
                        eax_9(eax_3, a3);
                }

                result = edi[0x63];
                ebp_1 += 1;
                a2 = &a2[1];
            } while (ebp_1 < result);
        }
    }

    return result;
}
