#include "004E7D70-CameraControlTask_Action.h"
/* 0x004e7d70 CameraControlTask_Action full linked: callers=1 callees=1 */
struct status_msg* sub_4e7d70(void* a1, void* a2, uint32_t a3)

{
    struct status_msg* result = sub_4ebba0(a1, a3);
    *(a2 + 0x28) = result;
    return result;
}
