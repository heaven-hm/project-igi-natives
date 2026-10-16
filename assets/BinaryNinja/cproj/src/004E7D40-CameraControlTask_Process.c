#include "gi_platform.h"
#include "004E7D40-CameraControlTask_Process.h"
struct status_msg* CameraControlTask_Process(void* a1, uint32_t a2)

{
    int32_t kind;
    kind = g_54d974;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    result->head[8] = a2;
    result->head[9] = 0;
    result->head[0xa] = 0;
    return result;
}
