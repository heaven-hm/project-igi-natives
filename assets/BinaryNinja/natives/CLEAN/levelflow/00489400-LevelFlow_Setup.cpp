// IGI native provenance: LevelFlow_Setup - 0x00489400 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00489400-LevelFlow_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelFlow_Setup.h"
int32_t LevelFlow_Setup(void* context)

{
    Script_Isexists(context + 0x7c, context);
    Script_Isexists(context + 0xcc, context);
    return 0;
}
