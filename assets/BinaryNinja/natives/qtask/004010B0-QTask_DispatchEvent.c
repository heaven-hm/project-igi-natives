// Original IGI.EXE function: QTask_DispatchEvent (VA 0x004010B0; static CFG gate FAIL, CFG score 0.415).
#include "QTask_DispatchEvent.h"
int32_t QTask_DispatchEvent()

{
    if (QTask_DispatchEvent_2())
        QTask_FindType(Game_GetContext());

    /* tailcall */
    return Flow_DeleteHandler();
}
