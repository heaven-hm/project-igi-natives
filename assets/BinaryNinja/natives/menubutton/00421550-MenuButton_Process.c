// Original IGI.EXE function: MenuButton_Process (VA 0x00421550; static CFG gate PASS, CFG score 1.000).
#include "MenuButton_Process.h"
int32_t MenuButton_Process(void* a1, int32_t a2)

{
    void* valA = *(a1 + 0x44);

    if (valA)
    {
        void* valA1 = Menu_DrawWidget_3(valA, a1 + 0x54);
        *(a1 + 0x94) = valA1;

        if (!valA1)
        {
            *(a1 + 0x28) = 0;
            *(a1 + 0x2c) = 0;
        }
        else
        {
            *(a1 + 0x28) = Sys_CloseFileStream_17(valA1);
            *(a1 + 0x2c) = Sys_ExecuteBytecode_17(valA1);
        }
    }

    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(a1, a2);
}
