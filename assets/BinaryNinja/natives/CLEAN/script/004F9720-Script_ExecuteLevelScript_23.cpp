// IGI native provenance: Script_ExecuteLevelScript_23 - 0x004F9720 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F9720-Script_ExecuteLevelScript_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ExecuteLevelScript_23.h"
void* Script_ExecuteLevelScript_23(void* context, int32_t param_2)

{
    if (!*(context + 0x6c) || param_2 >= *(context + 0x58) || param_2 < 0 || param_2 == 0xffffffff)
        return 0;

    int32_t* data_4 = Script_UndefinedGraphnodeda(context) * param_2 + *(context + 0x6c);
    int32_t data_6 = *data_4 + 1;
    int32_t data_7 = -(data_6);
    return (data_7 - data_7) & data_4;
}
