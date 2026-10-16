#include "0041D720-InputBox_LoadParameters.h"
/* 0x0041d720 InputBox_LoadParameters full linked: callers=0 callees=13 */
int32_t InputBox_LoadParameters(void* a1)

{
    long double x87_r7_1 = (Menu_FormatScreen_4(*(a1 + 0x44)) - 8) * 0.125f;
    long double temp2 = 0f;
    x87_r7_1 - temp2;
    float var_18c;

    var_18c = *(&((x87_r7_1 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0f : x87_r7_1;

    (*(((Menu_PlayMusic_13() + sub_4e7530() * 0x180) << 2) + &g_a96ae0))(a1);

    if (*(a1 + 0x19c))
    {
        char* edi_3 = a1 + 0x54;
        int32_t eax_9 = *(a1 + 0x20) + 2;
        int32_t eax_11 = *(a1 + 0x24) + 2;

        if (*(a1 + 0x196))
        {
            int32_t i = 0xffffffff;
            int32_t eax_13 = 0;

            while (i)
            {
                bool cond:0_1 = 0 != *edi_3;
                edi_3 = &edi_3[1];
                i -= 1;

                if (!cond:0_1)
                    break;
            }

            char var_100[0x100];

            if (~i - 1 > 0)
            {
                __builtin_memset(__builtin_memset(&var_100, 0x2a2a2a2a, (~i - 1) & 0xfffffffc),
                    0x2a, (~i - 1) & 3);
                eax_13 = ~i - 1;
            }

            var_100[eax_13] = 0;
            edi_3 = &var_100;
        }

        sub_4b6e90(*(a1 + 0x19c), edi_3);
        *(*(a1 + 0x19c) + 4) = eax_9;
        *(*(a1 + 0x19c) + 8) = eax_11;
        void* eax_16 = *(a1 + 0x19c);
        *(eax_16 + 0x24) |= 0x80000;
        *(*(a1 + 0x19c) + 0x10) = var_18c;
        sub_4b6f50(*(a1 + 0x19c));

        if (*(a1 + 0x195) && ((Frames_GetUpdateCounter() << 1) / Frames_Get()) & 1)
        {
            void var_12c;
            sub_4a5500(&var_12c, edi_3, *(a1 + 0x1a0));
            int32_t eax_25 = *(a1 + 0x1a0);
            int32_t* edx_7 = *(a1 + 0x19c);
            *(&var_12c + eax_25) = 0x61;
            char var_12b[0x2b];
            var_12b[eax_25] = 0;
            sub_4b6e90(edx_7, &var_12c);
            int32_t var_138_1 = 0x3f800000;
            int32_t eax_28 = eax_9 + sub_4b7df0(*(a1 + 0x19c)) - 6;
            int32_t edx_10 = g_a84a54;
            int32_t var_15c_1 = 0x3f800000;
            float var_174 = eax_28;
            long double x87_r7_6 = eax_11 + 0xa;
            int32_t var_134_1 = 0x3f800000;
            int32_t var_158_1 = 0x3f800000;
            float var_170_1 = x87_r7_6;
            int32_t var_130_1 = 0x3f800000;
            int32_t var_154_1 = 0x3f800000;
            int32_t var_144_1 = 0;
            int32_t var_168_1 = 0;
            float var_150_1 = eax_28 + 6;
            int32_t var_140_1 = 0;
            int32_t var_164_1 = 0;
            float var_14c_1 = x87_r7_6;
            int32_t var_148_1 = 0x3f800000;
            int32_t var_16c_1 = 0x3f800000;
            int32_t var_184_1 = 0;
            int32_t var_188 = 1;
            int32_t var_180_1 = 0;
            int32_t var_17c_1 = 2;
            float* var_178_1 = &var_174;
            g_a84a50 = 0;
            g_a84a58 = 0;
            (*((edx_10 << 2) + &g_a94e84))(&var_188);
        }
    }

    return Menu_DrawWidget_14(a1, 0.5f, var_18c, *(a1 + 0x4d));
}
