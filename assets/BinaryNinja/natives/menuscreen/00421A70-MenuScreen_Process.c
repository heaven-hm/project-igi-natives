// Original IGI.EXE function: MenuScreen_Process (VA 0x00421A70; static CFG gate PASS, CFG score 1.000).
#include "MenuScreen_Process.h"
int32_t MenuScreen_Process(int32_t context, int32_t param_2)

{
    void* data_val = *(context + 0x44);

    if (data_val)
    {
        *(context + 0x94) = Menu_PlayMusic_3(data_val, context + 0x54);

        if (FX_SmokeEmit_26())
        {
            *(context + 0x98) = Menu_PlayMusic_3(*(context + 0x44), "logo_us.pic");
            g_57bc0c = 0xc;
        }
        else
        {
            *(context + 0x98) = Menu_PlayMusic_3(*(context + 0x44), "logo.pic");
            g_57bc0c = 0;
        }

        int32_t* data_6 = *(context + 0x98);

        if (data_6)
        {
            int32_t data_7 = Picture_GetWidth(data_6);
            *(*(context + 0x98) + 4) = g_57bc0c + 320.0f - data_7 * 0.5f;
            *(*(context + 0x98) + 8) = (g_c28b48 >> 1) - 0xdc;
            *(*(context + 0x98) + 0x20) = 0;
        }

        void* data_12 = *(context + 0x94);

        if (data_12)
        {
            *(data_12 + 0x20) = 0;
            *(*(context + 0x94) + 4) = (g_c28b44 >> 1) - 0x140;
            *(*(context + 0x94) + 8) = (g_c28b48 >> 1) - 0xf0;
            int32_t data_17 = Picture_GetWidth(*(context + 0x94));
            int32_t* temp_7 = *(context + 0x94);
            *(context + 0x28) = data_17;
            *(context + 0x2c) = Picture_GetHeight(temp_7);
        }
    }

    Script_Isexists(context + 0xac, context);
    Script_Isexists(context + 0xfc, context);
    Script_Isexists(context + 0x14c, context);
    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(context, param_2);
}
