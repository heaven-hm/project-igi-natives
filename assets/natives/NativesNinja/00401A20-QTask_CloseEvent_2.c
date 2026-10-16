#include "00401A20-QTask_CloseEvent_2.h"
/* 0x00401a20 QTask_CloseEvent_2 full linked: callers=279 callees=1 */
uint32_t QTask_CloseEvent_2(int16_t a1)

{
    uint32_t result = a1;
    uint32_t esi_1 = result * 0x30;
    result = *(esi_1 + 0xaf5f04);

    if (result)
        result = sub_4b0b70(esi_1 + 0xaf5eec);

    *(esi_1 + &g_af5f05) = 0;
    return result;
}
