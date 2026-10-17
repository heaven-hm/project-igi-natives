// Original IGI.EXE function: SimBoneDynCubeObj_Init (VA 0x0052CA30; static CFG gate PASS, CFG score 1.000).
#include "SimBoneDynCubeObj_Init.h"
int32_t SimBoneDynCubeObj_Init()

{
    int32_t item_4 = 0;
    int16_t result = TaskType_Register("SimBoneDynCubeObj", 0x140, Render_DrawRigidMesh_12(), 0);
    g_54f700 = result;
    return result;
}
