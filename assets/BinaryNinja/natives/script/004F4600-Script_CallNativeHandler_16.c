// IGI native provenance: Script_CallNativeHandler_16 - 0x004F4600 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004F4600-Script_CallNativeHandler_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_CallNativeHandler_16.h"
void* Script_CallNativeHandler_16(void* context)

{
    memset(context + 0x720, 0, 0x20);
    *(context + 0x744) = 0;
    return context;
}
