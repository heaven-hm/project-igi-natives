#include "gi_platform.h"
#include "00417CF0-MenuManager_Process.h"
int32_t MenuManager_Process(void* a1, char* a2)

{
    void* valA1 = Script_ExecuteLevelScript_4((*(int32_t*)(uintptr_t)(a1 + 0x20)));
    (*(int32_t*)(uintptr_t)(a1 + 0x30)) = valA1;

    if (!a2 || !*a2)
    {
        void* v_c_1 = a1;
        Menu_PlayMusic(valA1);
    }
    else
        Menu_LocalMenusystemSound_2(a1);

    void* valA2 = Menu_DrawWidget_3(a1, "pointer.spr");
    Menu_FormatScreen_15((*(int32_t*)(uintptr_t)(a1 + 0x27c8)), valA2);
    int32_t result = Config_SaveGraphicOptions_2();
    (*(int32_t*)(uintptr_t)(a1 + 0x27e4)) = result;
    return result;
}
