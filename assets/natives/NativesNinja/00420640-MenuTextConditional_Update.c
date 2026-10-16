#include "00420640-MenuTextConditional_Update.h"
/* 0x00420640 MenuTextConditional_Update full linked: callers=0 callees=18 */
int32_t MenuTextConditional_Update(int80_t a1 @ st0, int32_t a2, int32_t a3)

{
    void* eax = *(a2 + 0x44);
    *(a2 + 0x28) = 0;
    *(a2 + 0x2c) = 0;

    if (eax)
    {
        void* eax_1 = Menu_HandleInput_3(eax, a2 + 0x94);
        *(a2 + 0x20c) = Menu_DrawWidget_3(*(a2 + 0x44), "glow.spr");
        int32_t* eax_3 = *(a2 + 0x114);

        if (eax_3)
        {
            sub_4b6f30(eax_3);
            *(a2 + 0x114) = 0;
        }

        if (eax_1)
        {
            int32_t edx_2 = (g_c28b44 >> 1) + *(a2 + 0x20) - 0x140;
            int32_t edx_3 = (g_c28b48 >> 1) + *(a2 + 0x24) - 0xf0;
            char* eax_9;
            int32_t ecx_5;
            eax_9 = Menu_LocalSS(*(a2 + 0x44), a2 + 0x54);
            int32_t var_20_3 = ecx_5;
            int32_t var_24_1 = ecx_5;
            int32_t** eax_10 = sub_4b6ec0(eax_1, edx_2, edx_3, eax_9);
            *(a2 + 0x114) = eax_10;
            eax_10[8] = 0;
            *(a2 + 0x28) = sub_4b7df0(*(a2 + 0x114));
            *(a2 + 0x2c) = sub_4b7e00(*(a2 + 0x114));
        }
    }

    sub_4f1400(a2 + 0x11c, a2);
    sub_4f1400(a2 + 0x16c, a2);
    sub_4f1400(a2 + 0x1bc, a2);

    if (*(a2 + 0x11c))
        *(a2 + 0x4c) = 1;

    if (sub_4f16c0(a2 + 0x16c))
    {
        sub_4f16e0(a2 + 0x16c, a2);
        int32_t var_8_1 = a1;
        *(a2 + 0x210) = var_8_1;
        *(a2 + 0x4c) = var_8_1;
    }

    if (sub_4f16c0(a2 + 0x1bc))
    {
        sub_4f16e0(a2 + 0x1bc, a2);
🚫🚫🚫        int32_t var_8_2 = /* int32_t var_8_2 = (unimplemented  {fistp qword [esp+0x18], st0}).d */;
        /* unimplemented  {fistp qword [esp+0x18], st0} */
        *(a2 + 0x214) = var_8_2;
    }

    return (*(((sub_4f1a70() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(a2, a3);
}
