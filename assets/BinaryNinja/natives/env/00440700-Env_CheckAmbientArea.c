// IGI native provenance: Env_CheckAmbientArea - 0x00440700 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00440700-Env_CheckAmbientArea.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_CheckAmbientArea.h"
uint32_t Env_CheckAmbientArea()

{
    int32_t data_val;
    data_val = g_57c15c;
    return QTask_CloseEvent_2(data_val);
}
