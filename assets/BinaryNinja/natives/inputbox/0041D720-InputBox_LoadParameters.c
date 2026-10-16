#include "InputBox_LoadParameters.h"
int32_t InputBox_LoadParameters(void* a1)

{
    long double x87_r7_1 = (Menu_FormatScreen_4(*(a1 + 0x44)) - 8) * 0.125f;
    long double f2 = 0f;
    x87_r7_1 - f2;
    float v_18c;

    v_18c = *(&((x87_r7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2) ? 1 : 0) << 0xa
        | (x87_r7_1 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0f : x87_r7_1;

    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(a1);

    if (*(a1 + 0x19c))
    {
        char* dstD3 = a1 + 0x54;
        int32_t valA9 = *(a1 + 0x20) + 2;
        int32_t valA11 = *(a1 + 0x24) + 2;

        if (*(a1 + 0x196))
        {
            int32_t i = 0xffffffff;
            int32_t valA13 = 0;

            while (i)
            {
                bool cond_0_1 = 0 != *dstD3;
                dstD3 = &dstD3[1];
                i -= 1;

                if (!cond_0_1)
                    break;
            }

            char v_100[0x100];

            if (~i - 1 > 0)
            {
                __builtin_memset(__builtin_memset(&v_100, 0x2a2a2a2a, (~i - 1) & 0xfffffffc),
                    0x2a, (~i - 1) & 3);
                valA13 = ~i - 1;
            }

            v_100[valA13] = 0;
            dstD3 = &v_100;
        }

        Sys_FreeMemory_18(*(a1 + 0x19c), dstD3);
        *(*(a1 + 0x19c) + 4) = valA9;
        *(*(a1 + 0x19c) + 8) = valA11;
        void* valA16 = *(a1 + 0x19c);
        *(valA16 + 0x24) |= 0x80000;
        *(*(a1 + 0x19c) + 0x10) = v_18c;
        Sys_CloseFileStream_18(*(a1 + 0x19c));

        if (*(a1 + 0x195) && ((Frames_GetUpdateCounter() << 1) / Frames_Get()) & 1)
        {
            void v_12c;
            Camera_ApplyLineFilter_5(&v_12c, dstD3, *(a1 + 0x1a0));
            int32_t valA25 = *(a1 + 0x1a0);
            int32_t* tmpD7 = *(a1 + 0x19c);
            *(&v_12c + valA25) = 0x61;
            char v_12b[0x2b];
            v_12b[valA25] = 0;
            Sys_FreeMemory_18(tmpD7, &v_12c);
            int32_t v_138_1 = 0x3f800000;
            int32_t valA28 = valA9 + Sys_CheckHeap_21(*(a1 + 0x19c)) - 6;
            int32_t tmpD10 = g_a84a54;
            int32_t v_15c_1 = 0x3f800000;
            float v_174 = valA28;
            long double x87_r7_6 = valA11 + 0xa;
            int32_t v_134_1 = 0x3f800000;
            int32_t v_158_1 = 0x3f800000;
            float v_170_1 = x87_r7_6;
            int32_t v_130_1 = 0x3f800000;
            int32_t v_154_1 = 0x3f800000;
            int32_t v_144_1 = 0;
            int32_t v_168_1 = 0;
            float v_150_1 = valA28 + 6;
            int32_t v_140_1 = 0;
            int32_t v_164_1 = 0;
            float v_14c_1 = x87_r7_6;
            int32_t v_148_1 = 0x3f800000;
            int32_t v_16c_1 = 0x3f800000;
            int32_t v_184_1 = 0;
            int32_t v_188 = 1;
            int32_t v_180_1 = 0;
            int32_t v_17c_1 = 2;
            float* v_178_1 = &v_174;
            g_a84a50 = 0;
            g_a84a58 = 0;
            (*((tmpD10 << 2) + &g_a94e84))(&v_188);
        }
    }

    return Menu_DrawWidget_14(a1, 0.5f, v_18c, *(a1 + 0x4d));
}
