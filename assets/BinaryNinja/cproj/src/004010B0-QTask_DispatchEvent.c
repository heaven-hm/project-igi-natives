#include "gi_platform.h"
#include "004010B0-QTask_DispatchEvent.h"
int32_t QTask_DispatchEvent()

{
    if (QTask_DispatchEvent_2())
        QTask_FindType(Game_GetContext());

    /* tailcall */
    return Flow_DeleteHandler();
}
