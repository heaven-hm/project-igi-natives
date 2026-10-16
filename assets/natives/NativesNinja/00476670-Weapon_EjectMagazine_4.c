#include "00476670-Weapon_EjectMagazine_4.h"
/* 0x00476670 Weapon_EjectMagazine_4 full linked: callers=1 callees=9 */
struct status_msg* sub_476670(void* a1, void* a2, void* a3, int32_t a4, int32_t a5, int32_t* a6, char* a7, int32_t a8, int32_t a9)

{
    int32_t kind = Qhash_Init(1);
    kind = g_5be3b0;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);

    if (a2)
    {
        int32_t* eax_1 = QTask_LinkEventHandler_2(a2);
        result->sprite[0x60] = eax_1;
        result->sprite[0x61] = *(&eax_1 + 1);
        result->sprite[0x62] = *(&eax_1 + 2);
        result->sprite[0x63] = *(&eax_1 + 3);
    }

    if (a3)
    {
        int32_t* eax_3 = QTask_LinkEventHandler_2(a3);
        result->sprite[0x64] = eax_3;
        result->sprite[0x65] = *(&eax_3 + 1);
        result->sprite[0x66] = *(&eax_3 + 2);
        result->sprite[0x67] = *(&eax_3 + 3);
    }

    memcpy(&result->sprite[0x3c], a4, 0x18);
    memcpy(&result->head[0x1c], a5, 0x28);
    int32_t ecx_1 = *a6;
    result->sprite[0x54] = ecx_1;
    result->sprite[0x55] = *(&ecx_1 + 1);
    result->sprite[0x56] = *(&ecx_1 + 2);
    result->sprite[0x57] = *(&ecx_1 + 3);
    int32_t ecx_2 = a6[1];
    result->sprite[0x58] = ecx_2;
    result->sprite[0x59] = *(&ecx_2 + 1);
    result->sprite[0x5a] = *(&ecx_2 + 2);
    result->sprite[0x5b] = *(&ecx_2 + 3);
    int32_t eax_5 = a6[2];
    result->sprite[0x5c] = eax_5;
    result->sprite[0x5d] = *(&eax_5 + 1);
    result->sprite[0x5e] = *(&eax_5 + 2);
    result->sprite[0x5f] = *(&eax_5 + 3);
    sub_4c48d0(result, sub_4cec10(a7));
    result->sprite[0x6c] = a8;
    result->sprite[0x6d] = *(&a8 + 1);
    result->sprite[0x6e] = *(&a8 + 2);
    result->sprite[0x6f] = *(&a8 + 3);
    result->sprite[0x70] = a9;
    result->sprite[0x71] = *(&a9 + 1);
    result->sprite[0x72] = *(&a9 + 2);
    result->sprite[0x73] = *(&a9 + 3);
    Qhash_Reset();
    return result;
}
