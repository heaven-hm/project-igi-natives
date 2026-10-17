// IGI native provenance: MenuTextConditional_Process - 0x004205F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004205F0-MenuTextConditional_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuTextConditional_Process.h"
char* MenuTextConditional_Process(void* context)

{
    int32_t* data_val = *(context + 0x114);

    if (data_val)
    {
        Sys_ReadFileBlock_18(data_val);
        *(context + 0x114) = 0;
    }

    Script_CallNativeHandler_6(context + 0x11c);
    Script_CallNativeHandler_6(context + 0x16c);
    return Script_CallNativeHandler_6(context + 0x1bc);
}
