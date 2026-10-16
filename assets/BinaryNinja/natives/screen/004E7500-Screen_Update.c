#include "Screen_Update.h"
uint32_t Screen_Update()

{
    QTask_CreateTask_2(g_5488c8);
    int16_t objC = g_a5e618;
    g_5488c8 = 0xff;
    uint32_t result = QTask_CloseEvent_2(objC);
    g_a5ea66 = 0;
    return result;
}
