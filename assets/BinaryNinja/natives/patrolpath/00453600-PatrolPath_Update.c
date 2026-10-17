// IGI native provenance: PatrolPath_Update - 0x00453600 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00453600-PatrolPath_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PatrolPath_Update.h"
void* PatrolPath_Update()

{
    int32_t dest_val = 0;
    void* result;

    for (char (** i)[0x17] = &g_53e2a0; i < "PATROLPATHCOMMAND_SETSPEED"; )
    {
        result = TaskType_Set(*i, dest_val - 1);
        i = &i[1];
        dest_val += 1;
    }

    return result;
}
