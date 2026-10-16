#include "00509650-Physics_EvaluateAreaCriteria_8.h"
/* 0x00509650 Physics_EvaluateAreaCriteria_8 full linked: callers=1 callees=4 */
uint32_t sub_509650()

{
    sub_518720(g_a7b2d8 | g_a7b2d4 | g_a7b2d0);
    int32_t edx_1 = sub_4c1830(g_a7b2cc);
    char eax_2 = g_54e83e;

    if (eax_2 != 0xff)
        QTask_InitContext(eax_2);

    edx_1 = g_54e83c;
    return QTask_CloseEvent_2(edx_1);
}
