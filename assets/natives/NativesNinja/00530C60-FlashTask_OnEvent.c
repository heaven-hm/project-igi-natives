#include "00530C60-FlashTask_OnEvent.h"
/* 0x00530c60 FlashTask_OnEvent full linked: callers=1 callees=1 */
uint32_t sub_530c60()

{
    uint32_t result = QTask_CloseEvent_2(g_54f7a0);
    g_a845ec = 0;
    return result;
}
