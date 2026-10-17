// IGI native provenance: MenuUI_InvokeIsexists_4253A0 - 0x004253A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004253A0-MenuUI_InvokeIsexists_4253A0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_InvokeIsexists_4253A0.h"

int32_t MenuUI_InvokeIsexists_4253A0(void* arg1)

{
    Script_Isexists(arg1 + 0x20, arg1);
    return 0;
}
