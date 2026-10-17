// IGI native provenance: Sys_ReadFileBlock_4 - 0x004B1690 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B1690-Sys_ReadFileBlock_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ReadFileBlock_4.h"
void Sys_ReadFileBlock_4(int32_t* context)

{
    if (context == 0x943980)
    {
        g_943988 = 0;
        return;
    }

    int32_t entity_val = *context;
    (*(entity_val * 0x8c + &g_9436bc))(entity_val, context);
}
