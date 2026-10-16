#include "GunDragunov_Init.h"

int32_t GunDragunov_Init(void* pThis)

{
    (*((Weapon_ComputeAccuracy_5() << 2) + &g_a96ae0))(pThis, 0);
    *(pThis + 0x104) = data_540394[0];
    *(pThis + 0x108) = data_540394[4][0];
    *(pThis + 0x10c) = data_540394[8][0];
    int32_t result_1 = data_540394[0xc][0];
    *(pThis + 0x110) = result_1;
    *(pThis + 0x114) = data_540394[0x10][0];
    return result_1;
}
