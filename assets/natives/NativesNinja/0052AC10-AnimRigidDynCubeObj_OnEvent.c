#include "0052AC10-AnimRigidDynCubeObj_OnEvent.h"
/* 0x0052ac10 AnimRigidDynCubeObj_OnEvent full linked: callers=0 callees=3 */
int32_t sub_52ac10(int32_t a1, int32_t* a2)

{
    int32_t result = *a2;
    memcpy(a2[2], a1 + 0x20, 0x18);
    memcpy(result + 0x18, a1 + 0x70, 0x28);
    memcpy(result, a1 + 0x20, 0x18);
    return result;
}
