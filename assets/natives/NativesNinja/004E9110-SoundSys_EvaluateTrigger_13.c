#include "004E9110-SoundSys_EvaluateTrigger_13.h"
/* 0x004e9110 SoundSys_EvaluateTrigger_13 full linked: callers=1 callees=4 */
int32_t sub_4e9110(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)

{
    int32_t eax_1;
    int32_t edx;
    edx = HIGHD(0xff - a5);
    eax_1 = LOWD(0xff - a5);
    int32_t edi_1 = (eax_1 - edx) >> 1;
    int32_t result;

    if (!edi_1)
        result = a2;

    if (edi_1 || result || a3 || a4)
    {
        int32_t ecx_1 = sub_497620(a1 + 0x30, 1);

        if (edi_1)
        {
            int32_t eax_4 = edi_1 & 0xff;
            int32_t ecx_2 = *(a1 + 0x54);
            int32_t var_30_1 = ecx_2;
            int32_t var_34_1 = ecx_2;
            int32_t var_38_1 = ecx_2;
            int32_t ecx_3 = *(a1 + 0x48);
            int32_t var_3c_1 = ecx_3;
            ecx_1 = sub_4b4820(ecx_3, *(a1 + 0x4c), *(a1 + 0x50), ecx_2, eax_4, eax_4, eax_4,
                0x10, 0);
        }

        result = a2;

        if (result || a3 || a4)
        {
            int32_t var_24_2 = ecx_1;
            int32_t var_28_2 = ecx_1;
            int32_t var_2c_2 = ecx_1;
            int32_t var_30_3 = ecx_1;
            int32_t var_34_3 = ecx_1;
            int32_t ecx_4 = *(a1 + 0x4c);
            int32_t var_38_3 = ecx_4;
            int32_t var_3c_3 = ecx_4;
            result = sub_4b4820(*(a1 + 0x48), ecx_4, *(a1 + 0x50), *(a1 + 0x54),
                result & 0xff, a3 & 0xff, a4 & 0xff, 8, 0);
        }
    }

    return result;
}
