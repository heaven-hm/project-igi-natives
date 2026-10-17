// IGI native provenance: FX_Definemission - 0x00484F30 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00484F30-FX_Definemission.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_Definemission.h"
int32_t FX_Definemission()

{
    Game_DefineOptions("DefineMission", Define_Mission, 0, 0xffffffff);
    TaskType_Set("MISSION_NEXT_MISSION_UNDEFINED", 0xffffffff);
    /* tailcall */
    return FX_LocalMissions();
}
