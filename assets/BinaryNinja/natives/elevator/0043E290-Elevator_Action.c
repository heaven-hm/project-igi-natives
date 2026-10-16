#include "Elevator_Action.h"
void* Elevator_Action(void* a1, void** a2)

{
    int32_t valA = 0;
    valA = *(a1 + 0x1c);
    (*((valA << 2) + &g_a970e0))(a1);
    g_57c0f0 = *(a1 + 0x20) - *(a1 + 0x108);
    g_57c0f8 = *(a1 + 0x28) - *(a1 + 0x110);
    g_57c100 = *(a1 + 0x30) - *(a1 + 0x118);
    float tmpD = *(a1 + 0x154);
    float v_50 = *(a1 + 0x148);
    float objC1 = *(a1 + 0x160);
    float tmpD1 = *(a1 + 0x14c);
    float objC2 = *(a1 + 0x158);
    float tmpD2 = *(a1 + 0x164);
    float objC3 = *(a1 + 0x150);
    float tmpD3 = *(a1 + 0x15c);
    float objC4 = *(a1 + 0x168);
    int32_t tmpD4 = *(a1 + 0x16c);
    int32_t v_2c = tmpD4;
    memcpy(0x57c110, &v_50, 0x28);
    float v_28 = tmpD1 * *(a1 + 0x74) + objC3 * *(a1 + 0x78) + v_50 * *(a1 + 0x70);
    float v_24 = objC2 * *(a1 + 0x74) + tmpD3 * *(a1 + 0x78) + tmpD * *(a1 + 0x70);
    float v_20 = tmpD2 * *(a1 + 0x74) + objC4 * *(a1 + 0x78) + objC1 * *(a1 + 0x70);
    float v_1c = objC3 * *(a1 + 0x84) + v_50 * *(a1 + 0x7c) + tmpD1 * *(a1 + 0x80);
    int32_t v_4 = *(a1 + 0x94) + tmpD4 + 1;
    float v_18 = tmpD3 * *(a1 + 0x84) + tmpD * *(a1 + 0x7c) + objC2 * *(a1 + 0x80);
    float v_14 = objC4 * *(a1 + 0x84) + objC1 * *(a1 + 0x7c) + tmpD2 * *(a1 + 0x80);
    float v_10 = tmpD1 * *(a1 + 0x8c) + objC3 * *(a1 + 0x90) + v_50 * *(a1 + 0x88);
    float v_c = objC2 * *(a1 + 0x8c) + tmpD3 * *(a1 + 0x90) + tmpD * *(a1 + 0x88);
    float v_8 = tmpD2 * *(a1 + 0x8c) + objC4 * *(a1 + 0x90) + objC1 * *(a1 + 0x88);
    memcpy(0x57c110, &v_28, 0x28);
    *a2 = a1 + 0x20;
    a2[2] = &g_57c0f0;
    a2[1] = 0x57c110;
    return a1 + 0x20;
}
