// Original IGI.EXE function: InputBox_Process (VA 0x0041D3A0; static CFG gate PASS, CFG score 1.000).
#include "InputBox_Process.h"
int32_t** InputBox_Process(void* a1, int32_t a2)

{
    Script_Isexists(a1 + 0xa4, a1);
    Script_Isexists(a1 + 0xf4, a1);
    Script_Isexists(a1 + 0x144, a1);
    int32_t* valA1 = *(a1 + 0x19c);

    if (valA1)
    {
        Sys_ReadFileBlock_18(valA1);
        *(a1 + 0x19c) = 0;
    }

    (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(a1, a2);
    int32_t** result = Menu_HandleInput_3(*(a1 + 0x44), "font1.fnt");
    *(a1 + 0x198) = result;

    if (result)
    {
        result = Sys_OpenFileStream_18(result, 0, 0, &g_567c74);
        *(a1 + 0x19c) = result;
    }

    return result;
}
