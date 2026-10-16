#include "gi_platform.h"
#include "00422640-MenuFrame_OnEvent.h"
int32_t MenuFrame_OnEvent(void* a1, int32_t a2)

{
    if ((*(int32_t*)(uintptr_t)(a1 + 0x44)))
    {
        int32_t i = 0;
        int32_t* dstD1 = a1 + 0x94;

        do
        {
            int32_t v_54_1 = i + 1;
            void* v_58_1 = a1 + 0x54;
            char v_40[0x40];
            Game_DataSymbolLoad(&v_40, "%s_%d.spr");
            *dstD1 = Menu_DrawWidget_3((*(int32_t*)(uintptr_t)(a1 + 0x44)), &v_40);
            i += 1;
            dstD1 = &dstD1[1];
        } while (i < 8);
    }

    return ((int(*)())(uintptr_t)(*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0)))(a1, a2);
}
