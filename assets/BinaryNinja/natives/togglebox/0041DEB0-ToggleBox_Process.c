// IGI native provenance: ToggleBox_Process - 0x0041DEB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041DEB0-ToggleBox_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ToggleBox_Process.h"
int32_t ToggleBox_Process(void* context)

{
    int32_t* data_val = *(context + 0x9c);

    if (data_val)
        Sys_ReadFileBlock_18(data_val);

    int32_t* data_1 = *(context + 0xa0);

    if (data_1)
        Sys_ReadFileBlock_18(data_1);

    QTask_FindType(*(context + 0x94));
    QTask_FindType(*(context + 0x98));
    Script_CallNativeHandler_6(context + 0xac);
    Script_CallNativeHandler_6(context + 0xfc);
    int32_t data_4 = Script_SpawnNewTask_6();
    int32_t temp_1 = 0;
    temp_1 = *(context + 0x1c);
    return (*(((data_4 * 0x180 + temp_1) << 2) + &g_a96ae0))(context);
}
