// IGI native provenance: Sys_Sortrender - 0x004B73C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B73C0-Sys_Sortrender.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_Sortrender.h"
int32_t Sys_Sortrender()

{
    int32_t data_val = Display_RestoreDevice_14("SortRender");
    g_943e48 = data_val;
    return Display_SetGammaRamp_14(data_val, sub_4b7100);
}
