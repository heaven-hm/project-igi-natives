// Original IGI.EXE function: Render_DrawBoneMesh_12 (VA 0x004D9620; static CFG gate PASS, CFG score 0.917).
#include "Render_DrawBoneMesh_12.h"
int32_t Render_DrawBoneMesh_12(void* context , int16_t param_2, int32_t* param_3)

{
    DynObj_LookupHashItem_9(context);
    Render_FailedToCreateBoneob(context + 0x68, param_2);
    *(context + 0x74) = param_3;
    *(context + 0x78) = 0x3f800000;
    *(context + 0x7c) = 0;
    *(context + 0x80) = 0;
    *(context + 0x84) = 0;
    *(context + 0x88) = 0x3f800000;
    *(context + 0x8c) = 0;
    *(context + 0x90) = 0;
    *(context + 0x94) = 0;
    *(context + 0x98) = 0x3f800000;
    *(context + 0x9c) = 0;
    *(context + 0xa0) = Render_ComputeNormals(param_3);
    *(context + 0xa4) = 0x3f800000;
    *(context + 0xa8) = 0x3f800000;
    *(context + 0xac) = 0x3f800000;
    *(context + 0xd0) = 0;
    *(context + 0xb0) = 0x3f800000;
    memset(context + 0xb4, 0, 0x18);
    *(context + 0xcc) = 1;
    *(context + 0xd4) = 1;
    return 1;
}
