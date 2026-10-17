// Original IGI.EXE function: TypeWriterBox_Setup (VA 0x0041A3C0; static CFG gate PASS, CFG score 1.000).
#include "TypeWriterBox_Setup.h"
int32_t TypeWriterBox_Setup(void* context)

{
    int32_t* source_val = context + 0x78;
    int32_t i_1 = 4;
    int32_t i;

    do
    {
        int32_t* data_1 = *source_val;

        if (data_1)
            Sys_ReadFileBlock_18(data_1);

        source_val = &source_val[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    int32_t data_2 = Script_SpawnNewTask_6();
    int32_t entity_val = 0;
    entity_val = *(context + 0x1c);
    return (*(((data_2 * 0x180 + entity_val) << 2) + &g_a96ae0))(context);
}
