#include "004233D0-ControlsMenu_Update.h"
/* 0x004233d0 ControlsMenu_Update full linked: callers=0 callees=10 */
int32_t ControlsMenu_Update(void* a1, int32_t a2)

{
    void* edi = a1;
    int32_t* esi_1 = edi + 0x154;
    int32_t i_2 = 0x1b;
    int32_t i;

    do
    {
        int32_t* eax_1 = esi_1[-0x40];

        if (eax_1)
        {
            sub_4b6f30(eax_1);
            esi_1[-0x40] = 0;
        }

        int32_t* eax_2 = *esi_1;

        if (eax_2)
        {
            sub_4b6f30(eax_2);
            *esi_1 = 0;
        }

        esi_1 = &esi_1[1];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    void* eax_3 = *(edi + 0x44);
    void* ebx_1;

    if (!eax_3)
        ebx_1 = a1;
    else
        ebx_1 = Menu_HandleInput_3(eax_3, "font1.fnt");

    if (ebx_1)
    {
        int32_t i_1 = 0;
        int32_t*** edi_1 = edi + 0x154;

        do
        {
            int32_t var_4;
            Config_Moveleft(i_1, nullptr, &var_4);
            int32_t** eax_7 = sub_4b6ec0(ebx_1, 0, 0, Menu_LocalSS(*(a1 + 0x44), var_4));
            edi_1[-0x40] = eax_7;
            eax_7[8] = 0;
            int32_t** eax_8 = sub_4b6ec0(ebx_1, 0, 0, &g_567c74);
            *edi_1 = eax_8;
            eax_8[8] = 0;
            i_1 += 1;
            edi_1 = &edi_1[1];
        } while (i_1 < 0x1b);

        edi = a1;
    }

    return (*(((sub_4f1a70() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(edi, a2);
}
