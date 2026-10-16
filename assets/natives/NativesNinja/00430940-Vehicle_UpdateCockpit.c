#include "00430940-Vehicle_UpdateCockpit.h"
/* 0x00430940 Vehicle_UpdateCockpit full linked: callers=1 callees=1 */
uint32_t Vehicle_UpdateCockpit()

{
    int32_t eax;
    eax = g_57bd30;
    return QTask_CloseEvent_2(eax);
}
