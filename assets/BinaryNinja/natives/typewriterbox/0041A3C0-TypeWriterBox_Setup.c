#include "TypeWriterBox_Setup.h"
int32_t TypeWriterBox_Setup(void* a1)

{
    int32_t* srcS = a1 + 0x78;
    int32_t i_1 = 4;
    int32_t i;

    do
    {
        int32_t* valA1 = *srcS;

        if (valA1)
            Sys_ReadFileBlock_18(valA1);

        srcS = &srcS[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    int32_t valA2 = Script_SpawnNewTask_6();
    int32_t objC = 0;
    objC = *(a1 + 0x1c);
    return (*(((valA2 * 0x180 + objC) << 2) + &g_a96ae0))(a1);
}
