#include "0041F740-SlideBar_OnEvent.h"
/* 0x0041f740 SlideBar_OnEvent full linked: callers=0 callees=23 */
int32_t SlideBar_OnEvent(long double a1 @ st0, void* a2, int32_t a3)

{
    void* ebx = a2;
    void* ebp = *(ebx + 0x9c);
    void* edi = *(ebx + 0x98);
    sub_4f1400(ebx + 0xb8, ebx);
    sub_4f1400(ebx + 0x108, ebx);
    sub_4f1400(ebx + 0x158, ebx);
    sub_4f1400(ebx + 0x1a8, ebx);
    sub_4f1400(ebx + 0x1f8, ebx);

    if (!sub_4f16c0(ebx + 0x1a8))
        *(ebx + 0xa8) = 0x3d4ccccd;
    else
    {
        sub_4f16e0(ebx + 0x1a8, ebx);
        *(ebx + 0xa8) = a1;
    }

    if (*(ebx + 0x44))
    {
        void* var_58_2 = ebx + 0x54;
        char var_40[0x40];
        Game_DataSymbolLoad(&var_40, "%s_1.spr");
        char (* edi_1)[0x40] = &var_40;
        int32_t i = 0xffffffff;
        void* var_64_1 = ebx + 0x54;

        while (i)
        {
            bool cond:1_1 = 0 != *edi_1;
            edi_1 = &(*edi_1)[1];
            i -= 1;

            if (!cond:1_1)
                break;
        }

        int32_t ecx_1 = ~i;
        int32_t esi_2;
        int32_t edi_4;
        edi_4 = memcpy(*(ebx + 0x98) + 0x54, edi_1 - ecx_1, ecx_1 & 0xfffffffc);
        memcpy(edi_4, esi_2, ecx_1 & 3);
        Game_DataSymbolLoad(&var_40, "%s_2.spr");
        char (* edi_5)[0x40] = &var_40;
        int32_t i_1 = 0xffffffff;
        void* var_70_1 = ebx + 0x54;

        while (i_1)
        {
            bool cond:2_1 = 0 != *edi_5;
            edi_5 = &(*edi_5)[1];
            i_1 -= 1;

            if (!cond:2_1)
                break;
        }

        int32_t ecx_5 = ~i_1;
        int32_t esi_4;
        int32_t edi_8;
        edi_8 = memcpy(*(ebx + 0x9c) + 0x54, edi_5 - ecx_5, ecx_5 & 0xfffffffc);
        memcpy(edi_8, esi_4, ecx_5 & 3);
        Game_DataSymbolLoad(&var_40, "%s_3.spr");
        *(ebx + 0x94) = Menu_DrawWidget_3(*(ebx + 0x44), &var_40);
    }

    void* esi_5 = *(ebx + 0x98);
    uint32_t eax_9 = sub_4f1a70();
    int32_t edx_5 = 0;
    edx_5 = *(esi_5 + 0x1c);
    (*(((eax_9 * 0x180 + edx_5) << 2) + &g_a96ae0))(esi_5, a3);
    void* esi_6 = *(ebx + 0x9c);
    uint32_t eax_12 = sub_4f1a70();
    int32_t eax_13 = 0;
    eax_13 = *(esi_6 + 0x1c);
    (*(((eax_12 * 0x180 + eax_13) << 2) + &g_a96ae0))(esi_6, a3);
    int32_t edx_9 = *(ebx + 0xac);
    int32_t esi_7 = 4;
    a2 = 4;

    if (!*(ebx + 0xb4))
    {
        void* edx_13 = *(ebx + 0x94);
        a2 = edx_9 + *(ebp + 0x2c) + *(edi + 0x2c) + 6;

        if (edx_13)
        {
            int32_t eax_27 = *(edi + 0x28);
            int32_t ecx_20 = *(ebp + 0x28);
            int32_t esi_8 = eax_27;

            if (eax_27 <= ecx_20)
                esi_8 = ecx_20;

            int32_t eax_29;

            if (esi_8 <= sub_4b6ce0(edx_13))
                eax_29 = sub_4b6ce0(*(ebx + 0x94));
            else
            {
                int32_t edi_10 = *(edi + 0x28);
                int32_t ebp_3 = *(ebp + 0x28);

                eax_29 = edi_10 <= ebp_3 ? ebp_3 : edi_10;
            }

            esi_7 = eax_29 + 4;
        }
    }
    else
    {
        esi_7 = edx_9 + *(ebp + 0x28) + *(edi + 0x28) + 6;
        void* edx_11 = *(ebx + 0x94);

        if (edx_11)
        {
            void* eax_18 = *(edi + 0x2c);
            void* ecx_15 = *(ebp + 0x2c);
            a2 = eax_18;

            if (eax_18 <= ecx_15)
                a2 = ecx_15;

            if (a2 <= sub_4b6d00(edx_11))
                a2 = sub_4b6d00(*(ebx + 0x94)) + 4;
            else
            {
                void* edi_9 = *(edi + 0x2c);
                void* ebp_2 = *(ebp + 0x2c);

                a2 = edi_9 <= ebp_2 ? ebp_2 + 4 : edi_9 + 4;
            }
        }
    }

    *(ebx + 0x28) = esi_7;
    *(ebx + 0x2c) = a2;
    return (*(((sub_4f1a70() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(ebx, a3);
}
