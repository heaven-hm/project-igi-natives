// Original IGI.EXE function: MenuManager_Process (VA 0x00417CF0; static CFG gate PASS, CFG score 1.000).
#include "MenuManager_Process.h"
int32_t MenuManager_Process(void* context, char* param_2)

{
    void* data_1 = Script_ExecuteLevelScript_4(*(context + 0x20));
    *(context + 0x30) = data_1;

    if (!param_2 || !*param_2)
    {
        void* item_c_1 = context;
        Menu_PlayMusic(data_1);
    }
    else
        Menu_LocalMenusystemSound_2(context);

    void* data_2 = Menu_DrawWidget_3(context, "pointer.spr");
    Menu_FormatScreen_15(*(context + 0x27c8), data_2);
    int32_t result = Config_SaveGraphicOptions_2();
    *(context + 0x27e4) = result;
    return result;
}
