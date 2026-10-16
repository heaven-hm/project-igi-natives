#include "0043E290-Elevator_Action.h"
/* 0x0043e290 Elevator_Action full linked: callers=0 callees=2 */
void* Elevator_Action(void* a1, void** a2)

{
    int32_t eax = 0;
    eax = *(a1 + 0x1c);
    (*((eax << 2) + &g_a970e0))(a1);
    g_57c0f0 = *(a1 + 0x20) - *(a1 + 0x108);
    g_57c0f8 = *(a1 + 0x28) - *(a1 + 0x110);
    g_57c100 = *(a1 + 0x30) - *(a1 + 0x118);
    float edx = *(a1 + 0x154);
    float var_50 = *(a1 + 0x148);
    float ecx_1 = *(a1 + 0x160);
    float edx_1 = *(a1 + 0x14c);
    float ecx_2 = *(a1 + 0x158);
    float edx_2 = *(a1 + 0x164);
    float ecx_3 = *(a1 + 0x150);
    float edx_3 = *(a1 + 0x15c);
    float ecx_4 = *(a1 + 0x168);
    int32_t edx_4 = *(a1 + 0x16c);
    int32_t var_2c = edx_4;
    memcpy(0x57c110, &var_50, 0x28);
    float var_28 = edx_1 * *(a1 + 0x74) + ecx_3 * *(a1 + 0x78) + var_50 * *(a1 + 0x70);
    float var_24 = ecx_2 * *(a1 + 0x74) + edx_3 * *(a1 + 0x78) + edx * *(a1 + 0x70);
    float var_20 = edx_2 * *(a1 + 0x74) + ecx_4 * *(a1 + 0x78) + ecx_1 * *(a1 + 0x70);
    float var_1c = ecx_3 * *(a1 + 0x84) + var_50 * *(a1 + 0x7c) + edx_1 * *(a1 + 0x80);
    int32_t var_4 = *(a1 + 0x94) + edx_4 + 1;
    float var_18 = edx_3 * *(a1 + 0x84) + edx * *(a1 + 0x7c) + ecx_2 * *(a1 + 0x80);
    float var_14 = ecx_4 * *(a1 + 0x84) + ecx_1 * *(a1 + 0x7c) + edx_2 * *(a1 + 0x80);
    float var_10 = edx_1 * *(a1 + 0x8c) + ecx_3 * *(a1 + 0x90) + var_50 * *(a1 + 0x88);
    float var_c = ecx_2 * *(a1 + 0x8c) + edx_3 * *(a1 + 0x90) + edx * *(a1 + 0x88);
    float var_8 = edx_2 * *(a1 + 0x8c) + ecx_4 * *(a1 + 0x90) + ecx_1 * *(a1 + 0x88);
    memcpy(0x57c110, &var_28, 0x28);
    *a2 = a1 + 0x20;
    a2[2] = &g_57c0f0;
    a2[1] = 0x57c110;
    return a1 + 0x20;
}
