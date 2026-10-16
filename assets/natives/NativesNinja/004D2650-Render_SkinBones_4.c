#include "004D2650-Render_SkinBones_4.h"
/* 0x004d2650 Render_SkinBones_4 full linked: callers=1 callees=16 */
char* sub_4d2650(int32_t a1, char* a2, int32_t a3)

{
    g_b12bcc = g_b16c68;
    g_b16c68 = 0;

    if (!*(a1 + 0xdc8))
    {
        int32_t __saved_esi_1 = 0;
        sub_50fae0(a1);
        *(a1 + 0xdc8) = 1;
    }

    sub_4e5cb0();
    char* result = sub_4da8b0();
    sub_4da2f0();

    if (g_bcab38)
    {
        int32_t edi_1 = a3;

        if (edi_1)
            sub_4d2540(a1);

        if (*(a1 + 0xc) && edi_1)
        {
            sub_50fd00(a1);
            sub_50fe60();
        }

        sub_4d2840(a1, a2);

        if (*a2)
            sub_4d27f0(*(a1 + 0xd18));

        if (edi_1)
        {
            int32_t var_28_1 = 0;
            void* var_24_1 = nullptr;
            int64_t* var_30 = &g_bcab08;
            int32_t var_2c_1 = 0;
            sub_4ce090(a1, sub_4d14c0(), &var_30, &g_bcab08, 0xffffffff, 5);
            g_a538d4 = var_28_1;
            void var_20;
            memcpy(0xb16c80, &var_20, 0x18);
            g_a538d0 = var_24_1;
            int32_t var_8;
            g_b04264 = var_8;

            if (var_24_1)
            {
                int32_t edx_1 = 0;
                g_54843c = 0;
                edx_1 = *(var_24_1 + 0x1c);
                (*((edx_1 << 2) + &g_a982e0))(var_24_1, 0);
                g_a538cc = 1;
            }

            edi_1 = a3;
        }

        if (!*(a1 + 0xc))
            goto label_4d2795;

        if (edi_1)
        {
            sub_50fd00(a1);
            sub_511500();
        label_4d2795:

            if (edi_1)
                sub_4d12c0(a1);
        }

        int32_t i = 0;
        void** edi_2 = a1 + 0xd1c;

        do
        {
            result = a2;

            if (result[i + 1])
                result = sub_4d27f0(*edi_2);

            i += 1;
            edi_2 = &edi_2[1];
        } while (i < 8);
    }

    g_a538d4 = 0;
    g_a538d0 = 0;
    g_a538cc = 0;
    g_54843c = 1;
    return result;
}
