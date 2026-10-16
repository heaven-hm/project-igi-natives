#include "004E7D30-CameraControlTask_OnEvent.h"
/* 0x004e7d30 CameraControlTask_OnEvent full linked: callers=1 callees=1 */
uint32_t sub_4e7d30()

{
    int32_t eax;
    eax = g_54d974;
    return QTask_CloseEvent_2(eax);
}
