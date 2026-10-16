#include "004227A0-Menu_PlayMusic_11.h"
/* 0x004227a0 Menu_PlayMusic_11 full linked: callers=2 callees=11 */
int32_t Menu_PlayMusic_11(void* a1, int32_t a2, int32_t a3, int32_t a4, float a5, int32_t a6, int32_t a7, int32_t a8)

{
    int32_t edi = 0;
    int32_t ebp = 0;
    int32_t var_4 = 0;
    int32_t result = 0;
    int32_t result_4;

    if (*(a1 + 0x94))
    {
        edi = sub_4b6ce0(*(a1 + (a5 << 2) + 0x94));
        int32_t result_1;
        result_1 = sub_4b6d00(*(a1 + (a5 << 2) + 0x94));
        result = result_1;
    }

    if (*(a1 + 0x98))
    {
        ebp = sub_4b6ce0(*(a1 + (a6 << 2) + 0x94));
        result_4 = result;

        if (result_4 <= sub_4b6d00(*(a1 + (a6 << 2) + 0x94)))
        {
            int32_t result_2;
            result_2 = sub_4b6d00(*(a1 + (a6 << 2) + 0x94));
            result = result_2;
        }
    }

    int32_t ebx_3 = a7;

    if (*(a1 + 0x9c))
    {
        var_4 = sub_4b6ce0(*(a1 + (ebx_3 << 2) + 0x94));
        result_4 = result;

        if (result_4 <= sub_4b6d00(*(a1 + (ebx_3 << 2) + 0x94)))
        {
            int32_t result_3;
            result_3 = sub_4b6d00(*(a1 + (ebx_3 << 2) + 0x94));
            result = result_3;
        }
    }

    if (a8)
        a3 -= result;

    int32_t eax_16;

    if (!edi)
        eax_16 = a4;
    else
    {
        int32_t result_8 = result_4;
        int32_t result_5 = result_4;
        result_4 = sub_4b4e00(*(a1 + (a5 << 2) + 0x94), a2, a3, 128f, 128f, 128f, 0, 0, 0);
        a2 += edi;
        eax_16 = a4 - edi;
    }

    if (!ebp)
    {
        result_4 = a2 + eax_16 - var_4;
        a2 = result_4;
    }
    else
    {
        int32_t i_2 = (eax_16 - var_4) / ebp;

        if (i_2 > 0)
        {
            int32_t i_1 = i_2;
            int32_t i;

            do
            {
                int32_t result_6 = result_4;
                sub_4b4e00(*(a1 + (a6 << 2) + 0x94), a2, a3, 128f, 128f, 128f, 0, 0, 0);
                result_4 = a2 + ebp;
                i = i_1;
                i_1 -= 1;
                a2 = result_4;
            } while (i != 1);
            ebx_3 = a7;
        }
    }

    if (var_4)
    {
        int32_t result_9 = result_4;
        int32_t result_7 = result_4;
        sub_4b4e00(*(a1 + (ebx_3 << 2) + 0x94), a2, a3, 128f, 128f, 128f, 0, 0, 0);
    }

    return result;
}
