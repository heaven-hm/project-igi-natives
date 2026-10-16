#include "00422640-MenuFrame_OnEvent.h"
/* 0x00422640 MenuFrame_OnEvent full linked: callers=0 callees=4 */
int32_t MenuFrame_OnEvent(void* a1, int32_t a2)

{
    if (*(a1 + 0x44))
    {
        int32_t i = 0;
        int32_t* edi_1 = a1 + 0x94;

        do
        {
            int32_t var_54_1 = i + 1;
            void* var_58_1 = a1 + 0x54;
            char var_40[0x40];
            Game_DataSymbolLoad(&var_40, "%s_%d.spr");
            *edi_1 = Menu_DrawWidget_3(*(a1 + 0x44), &var_40);
            i += 1;
            edi_1 = &edi_1[1];
        } while (i < 8);
    }

    return (*(((sub_4f1a70() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(a1, a2);
}
