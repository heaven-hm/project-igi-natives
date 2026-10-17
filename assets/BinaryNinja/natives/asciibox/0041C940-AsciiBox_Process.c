// IGI native provenance: AsciiBox_Process - 0x0041C940 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041C940-AsciiBox_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AsciiBox_Process.h"
int32_t AsciiBox_Process(void* context)

{
    Menu_FormatScreen_3(*(context + 0xf4));
    int32_t* data_1 = *(context + 0xd8);

    if (data_1)
    {
        Sys_ReadFileBlock_18(data_1);
        *(context + 0xd8) = 0;
    }

    if (*(context + 0xdc))
    {
        Qhash_Init(1);
        Sys_ExecuteBytecode_2(*(context + 0xdc));
        *(context + 0xdc) = 0;
        Qhash_Reset();
        *(context + 0xdc) = 0;
    }

    int32_t data_3 = Script_SpawnNewTask_6();
    int32_t data_4 = 0;
    data_4 = *(context + 0x1c);
    return (*(((data_3 * 0x180 + data_4) << 2) + &g_a96ae0))(context);
}
