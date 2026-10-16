#include "00424B60-Menu_HandleInput_14.h"
/* 0x00424b60 Menu_HandleInput_14 full linked: callers=1 callees=2 */
struct status_msg* Menu_HandleInput_14(void* a1, int32_t a2)

{
    return QTask_HandleInput(a1, Menu_PlayMusic_13(), a2);
}
