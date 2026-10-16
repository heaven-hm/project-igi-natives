#include "004ED5B0-InputPort_OnEvent.h"
/* 0x004ed5b0 InputPort_OnEvent full linked: callers=1 callees=1 */
uint32_t sub_4ed5b0()

{
    int32_t eax;
    eax = g_a5efa0;
    return QTask_CloseEvent_2(eax);
}
