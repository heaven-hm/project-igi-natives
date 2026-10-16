#include "AsciiBox_Process.h"
int32_t AsciiBox_Process(void* a1)

{
    Menu_FormatScreen_3(*(a1 + 0xf4));
    int32_t* valA1 = *(a1 + 0xd8);

    if (valA1)
    {
        Sys_ReadFileBlock_18(valA1);
        *(a1 + 0xd8) = 0;
    }

    if (*(a1 + 0xdc))
    {
        Qhash_Init(1);
        Sys_ExecuteBytecode_2(*(a1 + 0xdc));
        *(a1 + 0xdc) = 0;
        Qhash_Reset();
        *(a1 + 0xdc) = 0;
    }

    int32_t valA3 = Script_SpawnNewTask_6();
    int32_t valA4 = 0;
    valA4 = *(a1 + 0x1c);
    return (*(((valA3 * 0x180 + valA4) << 2) + &g_a96ae0))(a1);
}
