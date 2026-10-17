// IGI native provenance: MenuText_Process - 0x00420F00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00420F00-MenuText_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuText_Process.h"
char* MenuText_Process(void* context)

{
    int32_t* data_val = *(context + 0x114);

    if (data_val)
    {
        Sys_ReadFileBlock_18(data_val);
        *(context + 0x114) = 0;
    }

    return Script_CallNativeHandler_6(context + 0x11c);
}
