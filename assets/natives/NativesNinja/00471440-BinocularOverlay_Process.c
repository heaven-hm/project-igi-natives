#include "00471440-BinocularOverlay_Process.h"
/* 0x00471440 BinocularOverlay_Process full linked: callers=0 callees=4 */
int32_t sub_471440(void* a1)

{
    sub_497d70(a1 + 0x88, a1 + 0x38, a1 + 0x60, *(a1 + 0x78));
    Transcontext_SetActiveTransContext(a1 + 0x88);
    int32_t result = sub_471480(a1);
    sub_497ed0();
    return result;
}
