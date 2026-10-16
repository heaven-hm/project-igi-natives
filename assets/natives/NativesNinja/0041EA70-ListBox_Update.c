#include "0041EA70-ListBox_Update.h"
/* 0x0041ea70 ListBox_Update full linked: callers=0 callees=17 */
int32_t ListBox_Update(void* a1, int32_t a2)

{
    void* eax = *(a1 + 0xd8);
    void* ebp = *(a1 + 0xd4);
    void* eax_1 = Menu_HandleInput_3(*(a1 + 0x44), a1 + 0x94);
    int32_t* eax_2 = *(a1 + 0xbf4);

    if (eax_2)
    {
        sub_4b6f30(eax_2);
        *(a1 + 0xbf4) = 0;
    }

    if (eax_1)
    {
        int32_t** eax_3 = sub_4b6ec0(eax_1, 0, 0, &g_567c74);
        *(a1 + 0xbf4) = eax_3;
        eax_3[8] = 0;
    }

    sub_4f1400(a1 + 0xbf8, a1);
    sub_4f1400(a1 + 0xc48, a1);
    sub_4f1400(a1 + 0xc98, a1);
    sub_4f1400(a1 + 0xce8, a1);

    if (*(a1 + 0x44))
    {
        void* var_54_3 = a1 + 0x54;
        void var_40;
        Game_DataSymbolLoad(&var_40, "%s_1.spr");
        void* edi_1 = &var_40;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_2 = ~i;
        int32_t esi_2;
        int32_t edi_4;
        edi_4 = memcpy(*(a1 + 0xd4) + 0x54, edi_1 - ecx_2, ecx_2 & 0xfffffffc);
        void* var_60_3 = a1 + 0x54;
        memcpy(edi_4, esi_2, ecx_2 & 3);
        Game_DataSymbolLoad(&var_40, "%s_2.spr");
        void* edi_5 = &var_40;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:1_1 = 0 != *edi_5;
            edi_5 += 1;
            i_1 -= 1;

            if (!cond:1_1)
                break;
        }

        int32_t ecx_6 = ~i_1;
        int32_t esi_4;
        int32_t edi_8;
        edi_8 = memcpy(*(a1 + 0xd8) + 0x54, edi_5 - ecx_6, ecx_6 & 0xfffffffc);
        memcpy(edi_8, esi_4, ecx_6 & 3);
    }

    *(*(a1 + 0xd4) + 0x44) = *(a1 + 0x44);
    *(*(a1 + 0xd8) + 0x44) = *(a1 + 0x44);
    void* esi_5 = *(a1 + 0xd4);
    uint32_t eax_13 = sub_4f1a70();
    int32_t eax_14 = 0;
    eax_14 = *(esi_5 + 0x1c);
    (*(((eax_13 * 0x180 + eax_14) << 2) + &g_a96ae0))(esi_5, a2);
    void* esi_6 = *(a1 + 0xd8);
    uint32_t eax_17 = sub_4f1a70();
    int32_t edx_10 = 0;
    edx_10 = *(esi_6 + 0x1c);
    (*(((eax_17 * 0x180 + edx_10) << 2) + &g_a96ae0))(esi_6, a2);
    int32_t ecx_16 = *(eax + 0x2c);
    int32_t eax_21 = *(ebp + 0x2c);

    if (eax_21 <= ecx_16)
        eax_21 = ecx_16;

    *(a1 + 0x28) = *(a1 + 0xbec) + *(eax + 0x28) + *(ebp + 0x28) + 6;
    *(a1 + 0x2c) = eax_21 + 4;
    return (*(((sub_4f1a70() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(a1, a2);
}
