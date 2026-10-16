#include "gi_platform.h"
#include "0052CA30-SimBoneDynCubeObj_Init.h"
int32_t SimBoneDynCubeObj_Init()

{
    int32_t v_4 = 0;
    int16_t result = TaskType_Register("SimBoneDynCubeObj", 0x140, Render_DrawRigidMesh_12(), 0);
    g_54f700 = result;
    return result;
}
