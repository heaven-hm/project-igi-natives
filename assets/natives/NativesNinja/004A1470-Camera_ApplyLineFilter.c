#include "004A1470-Camera_ApplyLineFilter.h"
/* 0x004a1470 Camera_ApplyLineFilter full linked: callers=1 callees=7 */
int32_t sub_4a1470()

{
    sub_4c3450();
    int32_t eax = sub_4d14d0();
    QTask_RemoveEventCallback(sub_4c48c0(), eax, sub_4a1570);
    int32_t eax_2 = sub_4d97e0();
    return QTask_RemoveEventCallback(sub_4c48c0(), eax_2, sub_4a14b0);
}
