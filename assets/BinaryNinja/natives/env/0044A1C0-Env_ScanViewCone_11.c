// IGI native provenance: Env_ScanViewCone_11 - 0x0044A1C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044A1C0-Env_ScanViewCone_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_ScanViewCone_11.h"
uint32_t Env_ScanViewCone_11()

{
    int32_t data_val;
    data_val = g_57c240;
    return QTask_CloseEvent_2(data_val);
}
