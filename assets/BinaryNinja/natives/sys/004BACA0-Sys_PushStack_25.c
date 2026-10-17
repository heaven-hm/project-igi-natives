// IGI native provenance: Sys_PushStack_25 - 0x004BACA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BACA0-Sys_PushStack_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack_25.h"
int32_t Sys_PushStack_25(int32_t* context)

{
    Camera_ApplyHandiCam_33(context);
    Camera_ApplyLineFilter_33(&g_a43eb0, context);
    int32_t result = g_a43e8c - 1;
    g_a43e8c = result;
    return result;
}
