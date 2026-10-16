#include "00452B80-AI_CheckHearing_4.h"
/* 0x00452b80 AI_CheckHearing_4 full linked: callers=3 callees=0 */
int32_t* sub_452b80(void* a1, int32_t a2, int32_t a3, char a4)

{
    int32_t* result;

    for (int32_t* i = &g_53caa0; i < "IENDLYDETECTION"; i = &i[3])
    {
        result = i[-2] + a2;
        int32_t ecx_2 = i[-1] + a3;

        if (result >= 0 && result < *(a1 + 0x14) && ecx_2 >= 0 && ecx_2 < *(a1 + 0x18))
        {
            result = a1 + ((ecx_2 + result * 0x14) << 2) + 0x20;
            int32_t ecx_4 = *i;

            if (!a4)
                *result -= ecx_4;
            else
                *result += ecx_4;
        }
    }

    return result;
}
