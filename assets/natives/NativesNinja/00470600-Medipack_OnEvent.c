#include "00470600-Medipack_OnEvent.h"
/* 0x00470600 Medipack_OnEvent full linked: callers=1 callees=1 */
uint32_t sub_470600()

{
    int32_t eax;
    eax = g_5be334;
    return QTask_CloseEvent_2(eax);
}
