// IGI native provenance: FX_LocalMissions - 0x00485150 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00485150-FX_LocalMissions.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_LocalMissions.h"
int32_t FX_LocalMissions()

{
    g_5c89fc = 0;
    return Sys_IllegalDeviceNameInP("LOCAL:missions", Mission_Open, nullptr);
}
