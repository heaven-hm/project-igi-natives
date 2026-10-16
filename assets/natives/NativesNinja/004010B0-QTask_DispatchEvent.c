#include "004010B0-QTask_DispatchEvent.h"
/* 0x004010b0 QTask_DispatchEvent full linked: callers=2 callees=4 */
int32_t QTask_DispatchEvent()

{
    if (QTask_DispatchEvent_2())
        QTask_FindType(Game_GetContext());

    /* tailcall */
    return Flow_DeleteHandler();
}
