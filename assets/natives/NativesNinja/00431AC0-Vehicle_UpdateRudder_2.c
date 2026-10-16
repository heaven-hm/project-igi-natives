#include "00431AC0-Vehicle_UpdateRudder_2.h"
/* 0x00431ac0 Vehicle_UpdateRudder_2 full linked: callers=1 callees=2 */
int32_t* Vehicle_UpdateRudder_2(void* a1)

{
    int16_t eax_2 = Menu_FormatScreen_18();
    return QTask_DeleteTask_2(*(a1 + 0xe8), eax_2);
}
