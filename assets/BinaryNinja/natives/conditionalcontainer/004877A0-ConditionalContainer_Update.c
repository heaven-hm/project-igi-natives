// IGI native provenance: ConditionalContainer_Update - 0x004877A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004877A0-ConditionalContainer_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ConditionalContainer_Update.h"
int32_t ConditionalContainer_Update(void* context)

{
    Script_Isexists(context + 0x20, context);
    Script_Isexists(context + 0x70, context);
    Script_Isexists(context + 0xc0, context);
    return 0;
}
