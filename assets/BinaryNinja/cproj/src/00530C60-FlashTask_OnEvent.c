#include "gi_platform.h"
#include "00530C60-FlashTask_OnEvent.h"
uint32_t FlashTask_OnEvent()

{
    uint32_t result = QTask_CloseEvent_2(g_54f7a0);
    g_a845ec = 0;
    return result;
}
