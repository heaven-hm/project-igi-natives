// IGI native provenance: AmbientArea_Setup - 0x0044C700 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044C700-AmbientArea_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AmbientArea_Setup.h"
char* AmbientArea_Setup(void* context)

{
    int32_t* data_val = *(context + 0x1b8);

    if (data_val)
        Qtask_UpdateList(data_val);

    return Script_CallNativeHandler_6(context + 0x1bc);
}
