// Original IGI.EXE function: Render_DrawBoneMesh_12 (VA 0x004D9620; static CFG gate PASS, CFG score 0.917).
#include "Render_DrawBoneMesh_12.h"
int32_t Render_DrawBoneMesh_12(void* a1 @ 0x8, int16_t a2, int32_t* a3)

{
    DynObj_LookupHashItem_9(a1);
    Render_FailedToCreateBoneob(a1 + 0x68, a2);
    *(a1 + 0x74) = a3;
    *(a1 + 0x78) = 0x3f800000;
    *(a1 + 0x7c) = 0;
    *(a1 + 0x80) = 0;
    *(a1 + 0x84) = 0;
    *(a1 + 0x88) = 0x3f800000;
    *(a1 + 0x8c) = 0;
    *(a1 + 0x90) = 0;
    *(a1 + 0x94) = 0;
    *(a1 + 0x98) = 0x3f800000;
    *(a1 + 0x9c) = 0;
    *(a1 + 0xa0) = Render_ComputeNormals(a3);
    *(a1 + 0xa4) = 0x3f800000;
    *(a1 + 0xa8) = 0x3f800000;
    *(a1 + 0xac) = 0x3f800000;
    *(a1 + 0xd0) = 0;
    *(a1 + 0xb0) = 0x3f800000;
    __builtin_memset(a1 + 0xb4, 0, 0x18);
    *(a1 + 0xcc) = 1;
    *(a1 + 0xd4) = 1;
    return 1;
}
