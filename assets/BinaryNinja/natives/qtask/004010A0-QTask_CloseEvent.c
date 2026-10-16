#include "QTask_CloseEvent.h"
int32_t QTask_CloseEvent()

{
    Camera_ApplyBandFilter_3(0x54f8e0, 1);
    /* tailcall */
    return QTask_DispatchEvent();
}
