// IGI native provenance: Sys_OpenFileStream_19 - 0x004B7360 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7360-Sys_OpenFileStream_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream_19.h"
int32_t** Sys_OpenFileStream_19(int32_t context)

{
    int32_t* data_val = Display_CloseDevice_14(0x10);
    data_val[1] = g_943e48;
    data_val[3] = context;
    int32_t** result = Display_ClearSurfaces_14(0, data_val);
    g_a43e50 = 0;
    g_a84a4c = 0;
    return result;
}
