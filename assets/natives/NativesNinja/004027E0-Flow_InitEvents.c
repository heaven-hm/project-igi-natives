#include "004027E0-Flow_InitEvents.h"
/* 0x004027e0 Flow_InitEvents full linked: callers=1 callees=1 */
uint32_t Flow_InitEvents()

{
    int32_t eax;
    eax = g_567c7c;
    return QTask_CloseEvent_2(eax);
}
