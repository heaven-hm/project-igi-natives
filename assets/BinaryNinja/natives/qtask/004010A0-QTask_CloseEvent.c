// Original IGI.EXE function: QTask_CloseEvent (VA 0x004010A0; static CFG gate FAIL, CFG score 0.361).
#include "QTask_CloseEvent.h"
int32_t QTask_CloseEvent()

{
    Camera_ApplyBandFilter_3(0x54f8e0, 1);
    /* tailcall */
    return QTask_DispatchEvent();
}
