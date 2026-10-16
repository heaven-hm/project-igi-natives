#include "gi_platform.h"
#include "0041D3A0-InputBox_Process.h"
int32_t** InputBox_Process(void* a1, int32_t a2)

{
    Script_Isexists(a1 + 0xa4, a1);
    Script_Isexists(a1 + 0xf4, a1);
    Script_Isexists(a1 + 0x144, a1);
    int32_t* valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x19c));

    if (valA1)
    {
        Sys_ReadFileBlock_18(valA1);
        (*(int32_t*)(uintptr_t)(a1 + 0x19c)) = 0;
    }

    ((int(*)())(uintptr_t)(*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0)))(a1, a2);
    int32_t** result = Menu_HandleInput_3((*(int32_t*)(uintptr_t)(a1 + 0x44)), "font1.fnt");
    (*(int32_t*)(uintptr_t)(a1 + 0x198)) = result;

    if (result)
    {
        result = Sys_OpenFileStream_18(result, 0, 0, &g_567c74);
        (*(int32_t*)(uintptr_t)(a1 + 0x19c)) = result;
    }

    return result;
}
