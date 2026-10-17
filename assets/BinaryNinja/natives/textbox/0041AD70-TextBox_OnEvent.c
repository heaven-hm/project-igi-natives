// Original IGI.EXE function: TextBox_OnEvent (VA 0x0041AD70; static CFG gate PASS, CFG score 1.000).
#include "TextBox_OnEvent.h"
int32_t TextBox_OnEvent(void* context, int32_t param_2)

{
    Script_Isexists(context + 0x21a4, context);
    Script_Isexists(context + 0x21f4, context);
    int32_t* data_1 = *(context + 0x94);

    if (data_1)
    {
        Sys_ReadFileBlock_18(data_1);
        *(context + 0x94) = 0;
    }

    void* data_2 = *(context + 0x44);

    if (data_2)
    {
        void* data_3 = Menu_HandleInput_3(data_2, context + 0x54);
        *(context + 0x98) = data_3;

        if (data_3)
        {
            int32_t** data_4 = Sys_OpenFileStream_18(data_3, 0, 0, &g_567c74);
            *(context + 0x94) = data_4;
            data_4[8] = 0;
        }
    }

    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(context, param_2);
}
