// IGI native provenance: Camera_ResetMatrix_19 - 0x004AA3B4 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004AA3B4-Camera_ResetMatrix_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ResetMatrix_19.h"
int32_t Camera_ResetMatrix_19()

{
    *memset(0xc32320, 0, 0x100) = 0;
    g_c32200 = 0;
    g_c3221c = 0;
    g_c32424 = 0;
    g_c32210 = 0;
    int32_t* dest_2 = &g_c32214;
    *dest_2 = 0;
    dest_2[1] = 0;
    return 0;
}
