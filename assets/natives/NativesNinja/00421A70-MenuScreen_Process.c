#include "00421A70-MenuScreen_Process.h"
/* 0x00421a70 MenuScreen_Process full linked: callers=0 callees=15 */
int32_t MenuScreen_Process(int32_t a1, int32_t a2)

{
    void* eax = *(a1 + 0x44);

    if (eax)
    {
        *(a1 + 0x94) = Menu_PlayMusic_3(eax, a1 + 0x54);

        if (sub_48f2d0())
        {
            *(a1 + 0x98) = Menu_PlayMusic_3(*(a1 + 0x44), "logo_us.pic");
            g_57bc0c = 0xc;
        }
        else
        {
            *(a1 + 0x98) = Menu_PlayMusic_3(*(a1 + 0x44), "logo.pic");
            g_57bc0c = 0;
        }

        int32_t* eax_6 = *(a1 + 0x98);

        if (eax_6)
        {
            int32_t eax_7 = Picture_GetWidth(eax_6);
            *(*(a1 + 0x98) + 4) = g_57bc0c + 320f - eax_7 * 0.5f;
            *(*(a1 + 0x98) + 8) = (g_c28b48 >> 1) - 0xdc;
            *(*(a1 + 0x98) + 0x20) = 0;
        }

        void* eax_12 = *(a1 + 0x94);

        if (eax_12)
        {
            *(eax_12 + 0x20) = 0;
            *(*(a1 + 0x94) + 4) = (g_c28b44 >> 1) - 0x140;
            *(*(a1 + 0x94) + 8) = (g_c28b48 >> 1) - 0xf0;
            int32_t eax_17 = Picture_GetWidth(*(a1 + 0x94));
            int32_t* edx_7 = *(a1 + 0x94);
            *(a1 + 0x28) = eax_17;
            *(a1 + 0x2c) = Picture_GetHeight(edx_7);
        }
    }

    sub_4f1400(a1 + 0xac, a1);
    sub_4f1400(a1 + 0xfc, a1);
    sub_4f1400(a1 + 0x14c, a1);
    return (*(((sub_4f1a70() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(a1, a2);
}
