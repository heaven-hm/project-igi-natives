#include "0045DCF0-HumanPlayerInput_LoadParameters.h"
/* 0x0045dcf0 HumanPlayerInput_LoadParameters full linked: callers=0 callees=8 */
int32_t sub_45dcf0(int80_t a1 @ st0, void* a2)

{
    void* ebp = *(a2 + 0x14);
    void var_a0;

    if (!*(a2 + 0x81))
    {
    label_45dd48:
        void* var_c4_1 = a2;
        sub_45e060(&var_a0);

        if (*(a2 + 0x80))
        {
            int32_t eax_5 = *(a2 + 0x18c);

            if (eax_5 < 0x2328)
            {
                memcpy(eax_5 * 0xa0 + *(a2 + 0x188), &var_a0, 0xa0);
                int32_t eax_7 = *(a2 + 0x190) + 1;
                *(a2 + 0x18c) += 1;
                *(a2 + 0x190) = eax_7;
            }
        }
    }
    else
    {
        int32_t ecx_1 = *(a2 + 0x190);

        if (!ecx_1)
            goto label_45dd48;

        int32_t eax_1 = *(a2 + 0x18c);

        if (eax_1 >= ecx_1)
            goto label_45dd48;

        memcpy(&var_a0, eax_1 * 0xa0 + *(a2 + 0x184), 0xa0);
        *(a2 + 0x18c) = eax_1 + 1;
    }

    if (!sub_4f16c0(a2 + 0x194))
        sub_46c0a0(1);
    else
    {
        sub_4f16e0(a2 + 0x194, a2);
        sub_46c0a0(a1);
    }

    int32_t var_b0 = 0xffffffff;
    void* var_ac = &var_a0;
    uint32_t eax_11 = sub_4f40d0();
    int32_t eax_12 = 0;
    eax_12 = *(ebp + 0x1c);
    int32_t result = *(((eax_11 * 0x180 + eax_12) << 2) + &g_a96ae0);

    if (!result)
        return result;

    return result(ebp, &var_b0);
}
