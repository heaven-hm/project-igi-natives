#include "00417CF0-MenuManager_Process.h"
/* 0x00417cf0 MenuManager_Process full linked: callers=0 callees=6 */
int32_t MenuManager_Process(void* a1, char* a2)

{
    void* eax_1 = sub_4f1030(*(a1 + 0x20));
    *(a1 + 0x30) = eax_1;

    if (!a2 || !*a2)
    {
        void* var_c_1 = a1;
        Menu_PlayMusic(eax_1);
    }
    else
        Menu_LocalMenusystemSound_2(a1);

    void* eax_2 = Menu_DrawWidget_3(a1, "pointer.spr");
    Menu_FormatScreen_15(*(a1 + 0x27c8), eax_2);
    int32_t result = Config_SaveGraphicOptions_2();
    *(a1 + 0x27e4) = result;
    return result;
}
