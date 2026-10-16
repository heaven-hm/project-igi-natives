#include "004010A0-QTask_CloseEvent.h"
/* 0x004010a0 QTask_CloseEvent full linked: callers=1 callees=2 */
int32_t QTask_CloseEvent()

{
    sub_4a507c(0x54f8e0, 1);
    /* tailcall */
    return QTask_DispatchEvent();
}
