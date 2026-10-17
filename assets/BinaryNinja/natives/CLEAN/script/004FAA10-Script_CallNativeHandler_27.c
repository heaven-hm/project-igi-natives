// IGI native provenance: Script_CallNativeHandler_27 - 0x004FAA10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FAA10-Script_CallNativeHandler_27.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_CallNativeHandler_27.h"
uint32_t Script_CallNativeHandler_27(void* context)

{
    void* source_val = context;
    Sys_ResolveSymbol_4(*(source_val + 4));
    Resource_Unpack(*(source_val + 4), &context, 1);
    Sys_ResolveSymbol_4(*(source_val + 4));
    Sys_ExecuteBytecode_4(*(source_val + 4), 0xffffffff, 1);
    return context;
}
