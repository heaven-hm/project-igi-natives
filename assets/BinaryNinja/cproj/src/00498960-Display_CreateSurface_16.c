#include "gi_platform.h"
#include "00498960-Display_CreateSurface_16.h"
struct status_msg* Display_CreateSurface_16(uint32_t a1, int32_t a2, int32_t a3, float a4, float a5)

{
    int32_t kind;
    kind = g_c311c0;
    struct status_msg* result = QTask_HandleInput(nullptr, kind, 0);
    *(result + 0xe3c) = 0;
    *(result + 0x564c) = 0;
    DynObj_RegisterSymbol_8(a1, result, 0);
    int32_t objC = 0;
    result->head[0x1a] = a1;
    objC = !a3;
    *(result + 0x5650) = objC;
    *(result + 0x5654) = a2;
    *(result + 0x56a8) = 0;
    *(result + 0x5648) = 0;
    void* __offset(status_msg, 0xe5c) valA1 = &result->head[0x397];
    int32_t i_1 = 0x240;
    int32_t i;

    do
    {
        *(ADJ(valA1) + 0xe5c) = 0;
        valA1 += 0x20;
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(result + 0x56a0) = a4;
    *(result + 0x5698) = a4 + a5;
    Display_CheckCapabilities_17(result, 0.3125.0f);
    int32_t objC1 = g_bcad74;
    int32_t objC2 = -(objC1);
    int32_t v_10 = 0;
    int32_t v_c = 0;
    int32_t v_8 = 0;
    int32_t v_4 = 0;
    int32_t* valA2 = g_5ca110;
    int32_t v_c_1 = (((objC2 - objC2) & 0xfffff800) + 0x800) | 0x10000;
    v_10 = 0x10;
    int32_t v_4_1 = 0x780;
    int32_t v_8_1 = 0x142;
    ((int(*)())(uintptr_t)(*(*valA2 + 0x14)))(valA2, &v_10, &result->head[0x15b3], 0);
    *(result + 0x56ad) = 0;
    g_6e5bd0 = result;
    return result;
}
