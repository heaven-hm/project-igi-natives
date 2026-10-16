#include "Weapon_EjectMagazine_4.h"
struct status_msg* Weapon_EjectMagazine_4(void* a1, void* a2, void* a3, int32_t a4, int32_t a5, int32_t* a6, char* a7, int32_t a8, int32_t a9)

{
    int32_t kind = Qhash_Init(1);
    kind = g_5be3b0;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);

    if (a2)
    {
        int32_t* valA1 = QTask_LinkEventHandler_2(a2);
        result->sprite[0x60] = valA1;
        result->sprite[0x61] = *(&valA1 + 1);
        result->sprite[0x62] = *(&valA1 + 2);
        result->sprite[0x63] = *(&valA1 + 3);
    }

    if (a3)
    {
        int32_t* valA3 = QTask_LinkEventHandler_2(a3);
        result->sprite[0x64] = valA3;
        result->sprite[0x65] = *(&valA3 + 1);
        result->sprite[0x66] = *(&valA3 + 2);
        result->sprite[0x67] = *(&valA3 + 3);
    }

    memcpy(&result->sprite[0x3c], a4, 0x18);
    memcpy(&result->head[0x1c], a5, 0x28);
    int32_t objC1 = *a6;
    result->sprite[0x54] = objC1;
    result->sprite[0x55] = *(&objC1 + 1);
    result->sprite[0x56] = *(&objC1 + 2);
    result->sprite[0x57] = *(&objC1 + 3);
    int32_t objC2 = a6[1];
    result->sprite[0x58] = objC2;
    result->sprite[0x59] = *(&objC2 + 1);
    result->sprite[0x5a] = *(&objC2 + 2);
    result->sprite[0x5b] = *(&objC2 + 3);
    int32_t valA5 = a6[2];
    result->sprite[0x5c] = valA5;
    result->sprite[0x5d] = *(&valA5 + 1);
    result->sprite[0x5e] = *(&valA5 + 2);
    result->sprite[0x5f] = *(&valA5 + 3);
    DynObj_CreateMagicObject_5(result, DynObj_Missing(a7));
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
