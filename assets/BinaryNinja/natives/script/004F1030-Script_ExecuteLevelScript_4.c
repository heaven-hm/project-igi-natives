// IGI native provenance: Script_ExecuteLevelScript_4 - 0x004F1030 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F1030-Script_ExecuteLevelScript_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ExecuteLevelScript_4.h"
int32_t Script_ExecuteLevelScript_4(int32_t context)

{
    if (context >= 0 && context < 0x1000)
    {
        int32_t* data_val = *((context << 2) + &g_a71890);

        if (data_val)
            return *data_val;
    }

    return 0;
}
