#include "gi_platform.h"
#include "0041AD70-TextBox_OnEvent.h"
int32_t TextBox_OnEvent(void* a1, int32_t a2)

{
    Script_Isexists(a1 + 0x21a4, a1);
    Script_Isexists(a1 + 0x21f4, a1);
    int32_t* valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x94));

    if (valA1)
    {
        Sys_ReadFileBlock_18(valA1);
        (*(int32_t*)(uintptr_t)(a1 + 0x94)) = 0;
    }

    void* valA2 = (*(int32_t*)(uintptr_t)(a1 + 0x44));

    if (valA2)
    {
        void* valA3 = Menu_HandleInput_3(valA2, a1 + 0x54);
        (*(int32_t*)(uintptr_t)(a1 + 0x98)) = valA3;

        if (valA3)
        {
            int32_t** valA4 = Sys_OpenFileStream_18(valA3, 0, 0, &g_567c74);
            (*(int32_t*)(uintptr_t)(a1 + 0x94)) = valA4;
            valA4[8] = 0;
        }
    }

    return ((int(*)())(uintptr_t)(*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0)))(a1, a2);
}
