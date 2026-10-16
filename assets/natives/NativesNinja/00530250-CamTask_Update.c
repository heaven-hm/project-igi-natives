#include "00530250-CamTask_Update.h"
/* 0x00530250 CamTask_Update full linked: callers=1 callees=1 */
uint32_t sub_530250()

{
    int32_t eax;
    eax = g_54f768;
    return QTask_CloseEvent_2(eax);
}
