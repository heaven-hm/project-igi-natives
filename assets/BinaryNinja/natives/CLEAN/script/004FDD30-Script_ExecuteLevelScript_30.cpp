// IGI native provenance: Script_ExecuteLevelScript_30 - 0x004FDD30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FDD30-Script_ExecuteLevelScript_30.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ExecuteLevelScript_30.h"
void Script_ExecuteLevelScript_30(void* context, int32_t param_2)

{
    int32_t source_val = *(context + 0xf0);

    if (!source_val)
        return;

    if (source_val - 1 != param_2)
    {
        int32_t data_1 = *(context + 0x6c);
        int32_t dest_1 = *(data_1 + (param_2 << 2));
        *(data_1 + (param_2 << 2)) = *(data_1 + (source_val << 2) - 4);
        *(*(context + 0x6c) + (*(context + 0xf0) << 2) - 4) = dest_1;
    }

    *(context + 0xf0) -= 1;
}
